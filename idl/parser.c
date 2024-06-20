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
#define STATE_COUNT 802
#define LARGE_STATE_COUNT 34
#define SYMBOL_COUNT 381
#define ALIAS_COUNT 0
#define TOKEN_COUNT 156
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
  anon_sym_id = 81,
  anon_sym_autoid = 82,
  anon_sym_optional = 83,
  anon_sym_position = 84,
  anon_sym_value = 85,
  anon_sym_extensibility = 86,
  anon_sym_final = 87,
  anon_sym_appendable = 88,
  anon_sym_mutable = 89,
  anon_sym_key = 90,
  anon_sym_must_understand = 91,
  anon_sym_default_literal = 92,
  anon_sym_range = 93,
  anon_sym_min = 94,
  anon_sym_max = 95,
  anon_sym_unit = 96,
  anon_sym_bit_bound = 97,
  anon_sym_external = 98,
  anon_sym_nested = 99,
  anon_sym_verbatim = 100,
  anon_sym_service = 101,
  anon_sym_oneway = 102,
  anon_sym_ami = 103,
  anon_sym_module = 104,
  anon_sym_typename = 105,
  anon_sym_valuetype = 106,
  anon_sym_eventtype = 107,
  anon_sym_struct = 108,
  anon_sym_union = 109,
  anon_sym_enum = 110,
  anon_sym_const = 111,
  anon_sym_alias = 112,
  anon_sym_custom = 113,
  anon_sym_truncatable = 114,
  anon_sym_supports = 115,
  anon_sym_public = 116,
  anon_sym_private = 117,
  anon_sym_factory = 118,
  anon_sym_typedef = 119,
  anon_sym_LBRACK = 120,
  anon_sym_RBRACK = 121,
  anon_sym_ATdefault_literal = 122,
  anon_sym_ATignore_literal_names = 123,
  anon_sym_switch = 124,
  anon_sym_case = 125,
  anon_sym_typeid = 126,
  anon_sym_typeprefix = 127,
  anon_sym_import = 128,
  anon_sym_Object = 129,
  anon_sym_context = 130,
  sym_value_base_type = 131,
  anon_sym_component = 132,
  anon_sym_provides = 133,
  anon_sym_uses = 134,
  anon_sym_multiple = 135,
  anon_sym_home = 136,
  anon_sym_manages = 137,
  anon_sym_emits = 138,
  anon_sym_publishes = 139,
  anon_sym_consumes = 140,
  anon_sym_primarykey = 141,
  anon_sym_finder = 142,
  anon_sym_porttype = 143,
  anon_sym_port = 144,
  anon_sym_mirrorport = 145,
  anon_sym_connector = 146,
  anon_sym_native = 147,
  anon_sym_POUNDdefine = 148,
  aux_sym_predefine_token1 = 149,
  sym_identifier = 150,
  anon_sym_SLASH_SLASH = 151,
  aux_sym_comment_token1 = 152,
  aux_sym_comment_token2 = 153,
  anon_sym_SLASH_STAR = 154,
  aux_sym_comment_token3 = 155,
  sym_specification = 156,
  sym_signed_short_int = 157,
  sym_signed_long_int = 158,
  sym_signed_longlong_int = 159,
  sym_unsigned_int = 160,
  sym_fixed_pt_const_type = 161,
  sym_integer_type = 162,
  sym_signed_int = 163,
  sym_unsigned_short_int = 164,
  sym_unsigned_long_int = 165,
  sym_unsigned_longlong_int = 166,
  sym_floating_pt_type = 167,
  sym_char_type = 168,
  sym_scoped_name = 169,
  sym_string_type = 170,
  sym_type_spec = 171,
  sym_simple_type_spec = 172,
  sym_base_type_spec = 173,
  sym_any_type = 174,
  sym_fixed_pt_type = 175,
  sym_template_type_spec = 176,
  sym_sequence_type = 177,
  sym_map_type = 178,
  sym_positive_int_const = 179,
  sym_const_expr = 180,
  sym_or_expr = 181,
  sym_xor_expr = 182,
  sym_and_expr = 183,
  sym_shift_expr = 184,
  sym_add_expr = 185,
  sym_mult_expr = 186,
  sym_unary_expr = 187,
  sym_primary_expr = 188,
  sym_unary_operator = 189,
  sym_literal = 190,
  sym_string_literal = 191,
  sym_char_literal = 192,
  sym_boolean_literal = 193,
  sym_preproc_call = 194,
  sym_except_dcl = 195,
  sym_interface_dcl = 196,
  sym_interface_kind = 197,
  sym_interface_forward_dcl = 198,
  sym_interface_def = 199,
  sym_interface_header = 200,
  sym_interface_inheritance_spec = 201,
  sym_interface_name = 202,
  sym_interface_body = 203,
  sym_export = 204,
  sym_op_dcl = 205,
  sym_op_type_spec = 206,
  sym_parameter_dcls = 207,
  sym_param_dcl = 208,
  sym_param_attribute = 209,
  sym_raises_expr = 210,
  sym_attr_dcl = 211,
  sym_readonly_attr_spec = 212,
  sym_readonly_attr_declarator = 213,
  sym_attr_spec = 214,
  sym_attr_declarator = 215,
  sym_attr_raises_expr = 216,
  sym_get_excep_expr = 217,
  sym_set_excep_expr = 218,
  sym_exception_list = 219,
  sym_bitset_dcl = 220,
  sym_bitfield = 221,
  sym_bitfield_spec = 222,
  sym_destination_type = 223,
  sym_bitmask_dcl = 224,
  sym_bit_value = 225,
  sym_annotation_dcl = 226,
  sym_annotation_body = 227,
  sym_annotation_member = 228,
  sym_annotation_member_type = 229,
  sym_any_const_type = 230,
  sym_annotation_appl = 231,
  sym_annotation_appl_params = 232,
  sym_annotation_appl_param = 233,
  sym_annotation_built_name = 234,
  sym_template_module_dcl = 235,
  sym_formal_parameters = 236,
  sym_formal_parameter = 237,
  sym_formal_parameter_type = 238,
  sym_tpl_definition = 239,
  sym_template_module_inst = 240,
  sym_actual_parameters = 241,
  sym_actual_parameter = 242,
  sym_template_module_ref = 243,
  sym_formal_parameter_names = 244,
  sym_value_dcl = 245,
  sym_value_def = 246,
  sym_value_kind = 247,
  sym_value_header = 248,
  sym_value_inheritance_spec = 249,
  sym_value_inheritance = 250,
  sym_value_supports = 251,
  sym_value_name = 252,
  sym_value_element = 253,
  sym_state_member = 254,
  sym_init_dcl = 255,
  sym_init_param_dcls = 256,
  sym_init_param_dcl = 257,
  sym_value_forward_dcl = 258,
  sym_typedef_dcl = 259,
  sym_type_declarator = 260,
  sym_any_declarators = 261,
  sym_any_declarator = 262,
  sym_simple_declarator = 263,
  sym_declarator = 264,
  sym_declarators = 265,
  sym_array_declarator = 266,
  sym_fixed_array_size = 267,
  sym_enum_dcl = 268,
  sym_enumerator = 269,
  sym_enum_modifier = 270,
  sym_enum_anno = 271,
  sym_union_dcl = 272,
  sym_union_forward_dcl = 273,
  sym_union_def = 274,
  sym_case = 275,
  sym_case_label = 276,
  sym_element_spec = 277,
  sym_switch_type_spec = 278,
  sym_type_id_dcl = 279,
  sym_type_prefix_dcl = 280,
  sym_import_dcl = 281,
  sym_imported_scope = 282,
  sym_object_type = 283,
  sym_op_oneway_dcl = 284,
  sym_in_parameter_dcls = 285,
  sym_in_param_dcl = 286,
  sym_op_with_context = 287,
  sym_context_expr = 288,
  sym_value_box_def = 289,
  sym_value_abs_def = 290,
  sym_component_dcl = 291,
  sym_component_forward_dcl = 292,
  sym_component_def = 293,
  sym_component_header = 294,
  sym_component_inheritance_spec = 295,
  sym_component_body = 296,
  sym_component_export = 297,
  sym_provides_dcl = 298,
  sym_interface_type = 299,
  sym_uses_dcl = 300,
  sym_home_dcl = 301,
  sym_home_header = 302,
  sym_home_inheritance_spec = 303,
  sym_home_body = 304,
  sym_home_export = 305,
  sym_factory_dcl = 306,
  sym_factory_param_dcls = 307,
  sym_factory_param_dcl = 308,
  sym_supported_interface_spec = 309,
  sym_emits_dcl = 310,
  sym_publishes_dcl = 311,
  sym_consumes_dcl = 312,
  sym_primary_key_spec = 313,
  sym_finder_dcl = 314,
  sym_event_dcl = 315,
  sym_event_forward_dcl = 316,
  sym_event_abs_def = 317,
  sym_event_def = 318,
  sym_event_header = 319,
  sym_porttype_dcl = 320,
  sym_porttype_forward_dcl = 321,
  sym_porttype_def = 322,
  sym_port_body = 323,
  sym_port_ref = 324,
  sym_port_export = 325,
  sym_port_dcl = 326,
  sym_connector_dcl = 327,
  sym_connector_header = 328,
  sym_connector_inherit_spec = 329,
  sym_connector_export = 330,
  sym_definition = 331,
  sym_type_dcl = 332,
  sym_constr_type_dcl = 333,
  sym_native_dcl = 334,
  sym_module_dcl = 335,
  sym_struct_dcl = 336,
  sym_struct_forward_dcl = 337,
  sym_struct_def = 338,
  sym_member = 339,
  sym_default = 340,
  sym_predefine = 341,
  sym_const_dcl = 342,
  sym_const_type = 343,
  sym_comment = 344,
  aux_sym_specification_repeat1 = 345,
  aux_sym_string_literal_repeat1 = 346,
  aux_sym_char_literal_repeat1 = 347,
  aux_sym_except_dcl_repeat1 = 348,
  aux_sym_interface_def_repeat1 = 349,
  aux_sym_interface_inheritance_spec_repeat1 = 350,
  aux_sym_interface_body_repeat1 = 351,
  aux_sym_parameter_dcls_repeat1 = 352,
  aux_sym_raises_expr_repeat1 = 353,
  aux_sym_readonly_attr_declarator_repeat1 = 354,
  aux_sym_bitset_dcl_repeat1 = 355,
  aux_sym_bitfield_repeat1 = 356,
  aux_sym_bitmask_dcl_repeat1 = 357,
  aux_sym_annotation_dcl_repeat1 = 358,
  aux_sym_annotation_appl_params_repeat1 = 359,
  aux_sym_template_module_dcl_repeat1 = 360,
  aux_sym_formal_parameters_repeat1 = 361,
  aux_sym_actual_parameters_repeat1 = 362,
  aux_sym_formal_parameter_names_repeat1 = 363,
  aux_sym_value_def_repeat1 = 364,
  aux_sym_value_inheritance_spec_repeat1 = 365,
  aux_sym_init_param_dcls_repeat1 = 366,
  aux_sym_any_declarators_repeat1 = 367,
  aux_sym_declarators_repeat1 = 368,
  aux_sym_array_declarator_repeat1 = 369,
  aux_sym_enum_dcl_repeat1 = 370,
  aux_sym_enumerator_repeat1 = 371,
  aux_sym_union_def_repeat1 = 372,
  aux_sym_in_parameter_dcls_repeat1 = 373,
  aux_sym_context_expr_repeat1 = 374,
  aux_sym_component_body_repeat1 = 375,
  aux_sym_home_body_repeat1 = 376,
  aux_sym_factory_param_dcls_repeat1 = 377,
  aux_sym_port_body_repeat1 = 378,
  aux_sym_connector_dcl_repeat1 = 379,
  aux_sym_module_dcl_repeat1 = 380,
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
  [anon_sym_id] = "id",
  [anon_sym_autoid] = "autoid",
  [anon_sym_optional] = "optional",
  [anon_sym_position] = "position",
  [anon_sym_value] = "value",
  [anon_sym_extensibility] = "extensibility",
  [anon_sym_final] = "final",
  [anon_sym_appendable] = "appendable",
  [anon_sym_mutable] = "mutable",
  [anon_sym_key] = "key",
  [anon_sym_must_understand] = "must_understand",
  [anon_sym_default_literal] = "default_literal",
  [anon_sym_range] = "range",
  [anon_sym_min] = "min",
  [anon_sym_max] = "max",
  [anon_sym_unit] = "unit",
  [anon_sym_bit_bound] = "bit_bound",
  [anon_sym_external] = "external",
  [anon_sym_nested] = "nested",
  [anon_sym_verbatim] = "verbatim",
  [anon_sym_service] = "service",
  [anon_sym_oneway] = "oneway",
  [anon_sym_ami] = "ami",
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
  [sym_primary_expr] = "primary_expr",
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
  [sym_annotation_built_name] = "annotation_built_name",
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
  [sym_value_inheritance] = "value_inheritance",
  [sym_value_supports] = "value_supports",
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
  [sym_union_dcl] = "union_dcl",
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
  [sym_type_dcl] = "type_dcl",
  [sym_constr_type_dcl] = "constr_type_dcl",
  [sym_native_dcl] = "native_dcl",
  [sym_module_dcl] = "module_dcl",
  [sym_struct_dcl] = "struct_dcl",
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
  [anon_sym_id] = anon_sym_id,
  [anon_sym_autoid] = anon_sym_autoid,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_position] = anon_sym_position,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_extensibility] = anon_sym_extensibility,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_appendable] = anon_sym_appendable,
  [anon_sym_mutable] = anon_sym_mutable,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_must_understand] = anon_sym_must_understand,
  [anon_sym_default_literal] = anon_sym_default_literal,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_unit] = anon_sym_unit,
  [anon_sym_bit_bound] = anon_sym_bit_bound,
  [anon_sym_external] = anon_sym_external,
  [anon_sym_nested] = anon_sym_nested,
  [anon_sym_verbatim] = anon_sym_verbatim,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_oneway] = anon_sym_oneway,
  [anon_sym_ami] = anon_sym_ami,
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
  [sym_primary_expr] = sym_primary_expr,
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
  [sym_annotation_built_name] = sym_annotation_built_name,
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
  [sym_value_inheritance] = sym_value_inheritance,
  [sym_value_supports] = sym_value_supports,
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
  [sym_union_dcl] = sym_union_dcl,
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
  [sym_type_dcl] = sym_type_dcl,
  [sym_constr_type_dcl] = sym_constr_type_dcl,
  [sym_native_dcl] = sym_native_dcl,
  [sym_module_dcl] = sym_module_dcl,
  [sym_struct_dcl] = sym_struct_dcl,
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
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autoid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_position] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extensibility] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_appendable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mutable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_must_understand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_literal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit_bound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_external] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nested] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verbatim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oneway] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ami] = {
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
  [sym_primary_expr] = {
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
  [sym_annotation_built_name] = {
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
  [sym_value_inheritance] = {
    .visible = true,
    .named = true,
  },
  [sym_value_supports] = {
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
  [sym_union_dcl] = {
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
  [sym_type_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_constr_type_dcl] = {
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
  [sym_struct_dcl] = {
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
  [60] = 55,
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
  [73] = 55,
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
  [98] = 82,
  [99] = 99,
  [100] = 85,
  [101] = 101,
  [102] = 92,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 106,
  [113] = 103,
  [114] = 104,
  [115] = 110,
  [116] = 116,
  [117] = 106,
  [118] = 106,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 123,
  [125] = 123,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 123,
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
  [184] = 80,
  [185] = 79,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 95,
  [195] = 81,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 92,
  [206] = 97,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 96,
  [214] = 214,
  [215] = 215,
  [216] = 82,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 85,
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
  [307] = 80,
  [308] = 308,
  [309] = 309,
  [310] = 79,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 92,
  [321] = 85,
  [322] = 322,
  [323] = 82,
  [324] = 324,
  [325] = 80,
  [326] = 326,
  [327] = 327,
  [328] = 79,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 263,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 336,
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
  [350] = 95,
  [351] = 351,
  [352] = 352,
  [353] = 81,
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
  [367] = 95,
  [368] = 81,
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
  [419] = 336,
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
  [531] = 97,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 96,
  [537] = 537,
  [538] = 97,
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
  [550] = 96,
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
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 757,
  [782] = 755,
  [783] = 725,
  [784] = 630,
  [785] = 711,
  [786] = 652,
  [787] = 787,
  [788] = 729,
  [789] = 789,
  [790] = 630,
  [791] = 711,
  [792] = 652,
  [793] = 793,
  [794] = 729,
  [795] = 795,
  [796] = 630,
  [797] = 729,
  [798] = 798,
  [799] = 799,
  [800] = 800,
  [801] = 801,
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
      if (eof) ADVANCE(680);
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '$') ADVANCE(740);
      if (lookahead == '%') ADVANCE(749);
      if (lookahead == '\'') ADVANCE(763);
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == '*') ADVANCE(747);
      if (lookahead == '+') ADVANCE(744);
      if (lookahead == ',') ADVANCE(733);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '/') ADVANCE(748);
      if (lookahead == '0') ADVANCE(779);
      if (lookahead == ':') ADVANCE(825);
      if (lookahead == ';') ADVANCE(826);
      if (lookahead == '<') ADVANCE(728);
      if (lookahead == '=') ADVANCE(852);
      if (lookahead == '>') ADVANCE(730);
      if (lookahead == '@') ADVANCE(851);
      if (lookahead == 'F') ADVANCE(111);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == 'O') ADVANCE(172);
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead == 'V') ADVANCE(124);
      if (lookahead == '[') ADVANCE(929);
      if (lookahead == '\\') SKIP(676)
      if (lookahead == ']') ADVANCE(930);
      if (lookahead == '^') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'b') ADVANCE(327);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'g') ADVANCE(285);
      if (lookahead == 'h') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 'k') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(457);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(459);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 's') ADVANCE(227);
      if (lookahead == 't') ADVANCE(511);
      if (lookahead == 'u') ADVANCE(323);
      if (lookahead == 'v') ADVANCE(165);
      if (lookahead == 'w') ADVANCE(186);
      if (lookahead == '{') ADVANCE(817);
      if (lookahead == '|') ADVANCE(738);
      if (lookahead == '}') ADVANCE(818);
      if (lookahead == '~') ADVANCE(752);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(783);
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
      if (lookahead == '\n') SKIP(86)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(86)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(72)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(72)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(68)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(68)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(87)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(87)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(88)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(88)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(84)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(84)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(76)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(76)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(89)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(89)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(90)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(90)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(93)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(93)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(67)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(67)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(94)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(94)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(69)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(69)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(95)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(95)
      if (lookahead == '\r') SKIP(31)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(73)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(73)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(70)
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
      if (lookahead == '\n') SKIP(75)
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(75)
      if (lookahead == '\r') SKIP(39)
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(98)
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(98)
      if (lookahead == '\r') SKIP(41)
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(96)
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(96)
      if (lookahead == '\r') SKIP(43)
      END_STATE();
    case 45:
      if (lookahead == '\n') SKIP(92)
      END_STATE();
    case 46:
      if (lookahead == '\n') SKIP(92)
      if (lookahead == '\r') SKIP(45)
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(74)
      if (lookahead == '\'') ADVANCE(763);
      if (lookahead == '/') ADVANCE(766);
      if (lookahead == '\\') ADVANCE(765);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(767);
      if (lookahead != 0) ADVANCE(764);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(754);
      if (lookahead == '\r') ADVANCE(753);
      if (lookahead == 'U') ADVANCE(672);
      if (lookahead == 'u') ADVANCE(668);
      if (lookahead == 'x') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(756);
      if (lookahead != 0) ADVANCE(753);
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(71)
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '/') ADVANCE(760);
      if (lookahead == '\\') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(761);
      if (lookahead != 0) ADVANCE(762);
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(77)
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(77)
      if (lookahead == '\r') SKIP(50)
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(1382);
      if (lookahead == '\r') ADVANCE(1380);
      if (lookahead == '\\') ADVANCE(1384);
      if (lookahead != 0) ADVANCE(1383);
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(55)
      END_STATE();
    case 54:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\r') SKIP(53)
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(1379);
      if (lookahead == '\r') ADVANCE(55);
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == '\\') SKIP(54)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == '\n') SKIP(97)
      END_STATE();
    case 57:
      if (lookahead == '\n') SKIP(97)
      if (lookahead == '\r') SKIP(56)
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == '/') ADVANCE(811);
      if (lookahead == '\\') ADVANCE(809);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(100)
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') SKIP(63)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(99)
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') SKIP(63)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(99)
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '/') ADVANCE(811);
      if (lookahead == '\\') ADVANCE(809);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(100)
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 62:
      if (lookahead == '\n') SKIP(99)
      END_STATE();
    case 63:
      if (lookahead == '\n') SKIP(99)
      if (lookahead == '\r') SKIP(62)
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '*') ADVANCE(1390);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '*') ADVANCE(1390);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 66:
      if (lookahead == ' ') ADVANCE(396);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '$') ADVANCE(740);
      if (lookahead == '%') ADVANCE(749);
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == '*') ADVANCE(747);
      if (lookahead == '+') ADVANCE(743);
      if (lookahead == ',') ADVANCE(733);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead == '/') ADVANCE(748);
      if (lookahead == ':') ADVANCE(825);
      if (lookahead == ';') ADVANCE(826);
      if (lookahead == '<') ADVANCE(728);
      if (lookahead == '>') ADVANCE(730);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == ']') ADVANCE(930);
      if (lookahead == '^') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'b') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == 'l') ADVANCE(463);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead == 'p') ADVANCE(521);
      if (lookahead == 's') ADVANCE(597);
      if (lookahead == '{') ADVANCE(817);
      if (lookahead == '|') ADVANCE(738);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '\'') ADVANCE(763);
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == '+') ADVANCE(744);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(781);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == 'F') ADVANCE(983);
      if (lookahead == 'L') ADVANCE(758);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'T') ADVANCE(988);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'a') ADVANCE(1204);
      if (lookahead == 'b') ADVANCE(1235);
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'f') ADVANCE(1136);
      if (lookahead == 'i') ADVANCE(1208);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(997);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1072);
      if (lookahead == 'u') ADVANCE(1143);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '~') ADVANCE(752);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '\'') ADVANCE(763);
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == '+') ADVANCE(744);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(781);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == 'F') ADVANCE(983);
      if (lookahead == 'L') ADVANCE(758);
      if (lookahead == 'T') ADVANCE(988);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '~') ADVANCE(752);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == 'L') ADVANCE(758);
      if (lookahead == '\\') SKIP(36)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71)
      END_STATE();
    case 72:
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '$') ADVANCE(740);
      if (lookahead == '%') ADVANCE(749);
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == '*') ADVANCE(747);
      if (lookahead == '+') ADVANCE(743);
      if (lookahead == ',') ADVANCE(733);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead == '/') ADVANCE(748);
      if (lookahead == ':') ADVANCE(824);
      if (lookahead == ';') ADVANCE(826);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '>') ADVANCE(730);
      if (lookahead == '@') ADVANCE(851);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == ']') ADVANCE(930);
      if (lookahead == '^') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'b') ADVANCE(348);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'h') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead == 'l') ADVANCE(463);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead == 's') ADVANCE(597);
      if (lookahead == 't') ADVANCE(655);
      if (lookahead == 'u') ADVANCE(448);
      if (lookahead == 'v') ADVANCE(153);
      if (lookahead == '{') ADVANCE(817);
      if (lookahead == '|') ADVANCE(738);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72)
      END_STATE();
    case 73:
      if (lookahead == '$') ADVANCE(740);
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == ',') ADVANCE(733);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(824);
      if (lookahead == ';') ADVANCE(826);
      if (lookahead == '<') ADVANCE(727);
      if (lookahead == '>') ADVANCE(729);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == ']') ADVANCE(930);
      if (lookahead == '^') ADVANCE(739);
      if (lookahead == '{') ADVANCE(817);
      if (lookahead == '|') ADVANCE(738);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 74:
      if (lookahead == '\'') ADVANCE(763);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74)
      END_STATE();
    case 75:
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == ',') ADVANCE(733);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '>') ADVANCE(729);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == '\\') SKIP(40)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(75)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 76:
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(1204);
      if (lookahead == 'b') ADVANCE(1235);
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'f') ADVANCE(1136);
      if (lookahead == 'i') ADVANCE(1208);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(997);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1072);
      if (lookahead == 'u') ADVANCE(1143);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 77:
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') SKIP(51)
      if (lookahead == 'i') ADVANCE(423);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77)
      END_STATE();
    case 78:
      if (lookahead == '*') ADVANCE(1386);
      if (lookahead == '/') ADVANCE(1375);
      END_STATE();
    case 79:
      if (lookahead == '*') ADVANCE(1390);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '*') ADVANCE(1390);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '*') ADVANCE(1387);
      if (lookahead == '/') ADVANCE(1376);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 82:
      if (lookahead == ',') ADVANCE(733);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '<') ADVANCE(727);
      if (lookahead == '>') ADVANCE(729);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(930);
      if (lookahead == 'a') ADVANCE(1029);
      if (lookahead == 'b') ADVANCE(1138);
      if (lookahead == 'c') ADVANCE(1130);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'e') ADVANCE(1206);
      if (lookahead == 'f') ADVANCE(996);
      if (lookahead == 'i') ADVANCE(1189);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(997);
      if (lookahead == 'n') ADVANCE(1004);
      if (lookahead == 'o') ADVANCE(1044);
      if (lookahead == 'r') ADVANCE(1099);
      if (lookahead == 's') ADVANCE(1069);
      if (lookahead == 't') ADVANCE(1368);
      if (lookahead == 'u') ADVANCE(1142);
      if (lookahead == 'v') ADVANCE(1021);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '{') ADVANCE(817);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 83:
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '0') ADVANCE(775);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      END_STATE();
    case 84:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(825);
      if (lookahead == ';') ADVANCE(826);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'a') ADVANCE(1204);
      if (lookahead == 'b') ADVANCE(1235);
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'f') ADVANCE(1136);
      if (lookahead == 'i') ADVANCE(1208);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(997);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1071);
      if (lookahead == 'u') ADVANCE(1143);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '{') ADVANCE(817);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(84)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 85:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(1029);
      if (lookahead == 'b') ADVANCE(1138);
      if (lookahead == 'c') ADVANCE(1130);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'e') ADVANCE(1206);
      if (lookahead == 'f') ADVANCE(995);
      if (lookahead == 'i') ADVANCE(1189);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(997);
      if (lookahead == 'n') ADVANCE(1004);
      if (lookahead == 'o') ADVANCE(1044);
      if (lookahead == 'p') ADVANCE(1273);
      if (lookahead == 'r') ADVANCE(1099);
      if (lookahead == 's') ADVANCE(1069);
      if (lookahead == 't') ADVANCE(1368);
      if (lookahead == 'u') ADVANCE(1142);
      if (lookahead == 'v') ADVANCE(1021);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 86:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(1029);
      if (lookahead == 'b') ADVANCE(1138);
      if (lookahead == 'c') ADVANCE(1130);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'e') ADVANCE(1206);
      if (lookahead == 'f') ADVANCE(1136);
      if (lookahead == 'i') ADVANCE(1189);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(997);
      if (lookahead == 'n') ADVANCE(1004);
      if (lookahead == 'o') ADVANCE(1044);
      if (lookahead == 'r') ADVANCE(1099);
      if (lookahead == 's') ADVANCE(1069);
      if (lookahead == 't') ADVANCE(1368);
      if (lookahead == 'u') ADVANCE(1142);
      if (lookahead == 'v') ADVANCE(1021);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(86)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 87:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'a') ADVANCE(1204);
      if (lookahead == 'b') ADVANCE(1138);
      if (lookahead == 'c') ADVANCE(1017);
      if (lookahead == 'd') ADVANCE(1096);
      if (lookahead == 'e') ADVANCE(1207);
      if (lookahead == 'f') ADVANCE(1136);
      if (lookahead == 'i') ADVANCE(1208);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(997);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1069);
      if (lookahead == 'u') ADVANCE(1142);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(87)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 88:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'a') ADVANCE(1204);
      if (lookahead == 'b') ADVANCE(1138);
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'e') ADVANCE(1207);
      if (lookahead == 'f') ADVANCE(1136);
      if (lookahead == 'i') ADVANCE(1208);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(997);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1069);
      if (lookahead == 'u') ADVANCE(1142);
      if (lookahead == 'w') ADVANCE(1039);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 89:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(341);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'a') ADVANCE(1204);
      if (lookahead == 'b') ADVANCE(1235);
      if (lookahead == 'c') ADVANCE(1131);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'e') ADVANCE(1207);
      if (lookahead == 'f') ADVANCE(1136);
      if (lookahead == 'i') ADVANCE(1208);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1072);
      if (lookahead == 't') ADVANCE(1370);
      if (lookahead == 'u') ADVANCE(1143);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(89)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 90:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'a') ADVANCE(1204);
      if (lookahead == 'b') ADVANCE(1235);
      if (lookahead == 'c') ADVANCE(1131);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'e') ADVANCE(1205);
      if (lookahead == 'f') ADVANCE(1173);
      if (lookahead == 'i') ADVANCE(1220);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1070);
      if (lookahead == 't') ADVANCE(1371);
      if (lookahead == 'u') ADVANCE(1142);
      if (lookahead == 'v') ADVANCE(1022);
      if (lookahead == 'w') ADVANCE(1040);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(90)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 91:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == 'm') ADVANCE(1353);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(91)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 92:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == '\\') SKIP(46)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 93:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'b') ADVANCE(1235);
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'f') ADVANCE(1136);
      if (lookahead == 'i') ADVANCE(1208);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1072);
      if (lookahead == 'u') ADVANCE(1143);
      if (lookahead == 'w') ADVANCE(1039);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(93)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 94:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'b') ADVANCE(1235);
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'i') ADVANCE(1208);
      if (lookahead == 'l') ADVANCE(1244);
      if (lookahead == 's') ADVANCE(1133);
      if (lookahead == 'u') ADVANCE(1143);
      if (lookahead == 'w') ADVANCE(1040);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(94)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 95:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == 'a') ADVANCE(1194);
      if (lookahead == 'b') ADVANCE(1154);
      if (lookahead == 'd') ADVANCE(1118);
      if (lookahead == 'e') ADVANCE(1361);
      if (lookahead == 'f') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1058);
      if (lookahead == 'k') ADVANCE(1100);
      if (lookahead == 'm') ADVANCE(1003);
      if (lookahead == 'n') ADVANCE(1117);
      if (lookahead == 'o') ADVANCE(1203);
      if (lookahead == 'p') ADVANCE(1238);
      if (lookahead == 'r') ADVANCE(1013);
      if (lookahead == 's') ADVANCE(1107);
      if (lookahead == 'u') ADVANCE(1226);
      if (lookahead == 'v') ADVANCE(1025);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 96:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '\\') SKIP(44)
      if (lookahead == 't') ADVANCE(1280);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(96)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 97:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ';') ADVANCE(826);
      if (lookahead == '\\') SKIP(57)
      if (lookahead == 's') ADVANCE(1358);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(97)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 98:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == '\\') SKIP(42)
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(98)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 99:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') SKIP(63)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(99)
      END_STATE();
    case 100:
      if (lookahead == '/') ADVANCE(811);
      if (lookahead == '\\') ADVANCE(809);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(100)
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 101:
      if (lookahead == '1') ADVANCE(107);
      if (lookahead == '3') ADVANCE(103);
      if (lookahead == '6') ADVANCE(105);
      if (lookahead == '8') ADVANCE(694);
      END_STATE();
    case 102:
      if (lookahead == '1') ADVANCE(108);
      if (lookahead == '3') ADVANCE(104);
      if (lookahead == '6') ADVANCE(106);
      if (lookahead == '8') ADVANCE(702);
      if (lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 103:
      if (lookahead == '2') ADVANCE(708);
      END_STATE();
    case 104:
      if (lookahead == '2') ADVANCE(689);
      END_STATE();
    case 105:
      if (lookahead == '4') ADVANCE(711);
      END_STATE();
    case 106:
      if (lookahead == '4') ADVANCE(692);
      END_STATE();
    case 107:
      if (lookahead == '6') ADVANCE(705);
      END_STATE();
    case 108:
      if (lookahead == '6') ADVANCE(683);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(722);
      END_STATE();
    case 110:
      if (lookahead == '<') ADVANCE(742);
      END_STATE();
    case 111:
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 112:
      if (lookahead == 'B') ADVANCE(164);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(768);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(770);
      END_STATE();
    case 115:
      if (lookahead == 'L') ADVANCE(117);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(118);
      END_STATE();
    case 117:
      if (lookahead == 'S') ADVANCE(114);
      END_STATE();
    case 118:
      if (lookahead == 'U') ADVANCE(113);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(455);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(631);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(398);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(399);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(416);
      if (lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(432);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'h') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == 'u') ADVANCE(550);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == 'u') ADVANCE(550);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(648);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(538);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(588);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(625);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(513);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(632);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(601);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(636);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(558);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(510);
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(619);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 172:
      if (lookahead == 'b') ADVANCE(365);
      END_STATE();
    case 173:
      if (lookahead == 'b') ADVANCE(559);
      END_STATE();
    case 174:
      if (lookahead == 'b') ADVANCE(559);
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 175:
      if (lookahead == 'b') ADVANCE(559);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead == 'm') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(646);
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead == 't') ADVANCE(585);
      if (lookahead == 'u') ADVANCE(591);
      END_STATE();
    case 176:
      if (lookahead == 'b') ADVANCE(379);
      END_STATE();
    case 177:
      if (lookahead == 'b') ADVANCE(489);
      END_STATE();
    case 178:
      if (lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 179:
      if (lookahead == 'b') ADVANCE(361);
      END_STATE();
    case 180:
      if (lookahead == 'b') ADVANCE(381);
      END_STATE();
    case 181:
      if (lookahead == 'b') ADVANCE(637);
      END_STATE();
    case 182:
      if (lookahead == 'b') ADVANCE(384);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(388);
      END_STATE();
    case 184:
      if (lookahead == 'b') ADVANCE(389);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(390);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead == 's') ADVANCE(607);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(921);
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(315);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(605);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 'p') ADVANCE(592);
      if (lookahead == 'u') ADVANCE(561);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(571);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(574);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(577);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(608);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(610);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(803);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(853);
      if (lookahead == 'm') ADVANCE(499);
      if (lookahead == 'n') ADVANCE(830);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(827);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(698);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(855);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(889);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(937);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(842);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(885);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(873);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(634);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(525);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'p') ADVANCE(525);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(295);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'o') ADVANCE(630);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead == 'h') ADVANCE(467);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == 'u') ADVANCE(503);
      if (lookahead == 'w') ADVANCE(344);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(935);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(952);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(877);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(861);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(964);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(869);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(923);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(893);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(950);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(945);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(836);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(917);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(960);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(966);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(621);
      if (lookahead == 'h') ADVANCE(467);
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 297:
      if (lookahead == 'f') ADVANCE(927);
      END_STATE();
    case 298:
      if (lookahead == 'f') ADVANCE(139);
      END_STATE();
    case 299:
      if (lookahead == 'f') ADVANCE(162);
      END_STATE();
    case 300:
      if (lookahead == 'f') ADVANCE(326);
      END_STATE();
    case 301:
      if (lookahead == 'f') ADVANCE(354);
      END_STATE();
    case 302:
      if (lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 303:
      if (lookahead == 'f') ADVANCE(158);
      END_STATE();
    case 304:
      if (lookahead == 'g') ADVANCE(685);
      END_STATE();
    case 305:
      if (lookahead == 'g') ADVANCE(723);
      END_STATE();
    case 306:
      if (lookahead == 'g') ADVANCE(725);
      END_STATE();
    case 307:
      if (lookahead == 'g') ADVANCE(691);
      END_STATE();
    case 308:
      if (lookahead == 'g') ADVANCE(707);
      END_STATE();
    case 309:
      if (lookahead == 'g') ADVANCE(710);
      END_STATE();
    case 310:
      if (lookahead == 'g') ADVANCE(687);
      END_STATE();
    case 311:
      if (lookahead == 'g') ADVANCE(443);
      END_STATE();
    case 312:
      if (lookahead == 'g') ADVANCE(234);
      END_STATE();
    case 313:
      if (lookahead == 'g') ADVANCE(269);
      END_STATE();
    case 314:
      if (lookahead == 'g') ADVANCE(452);
      END_STATE();
    case 315:
      if (lookahead == 'h') ADVANCE(933);
      END_STATE();
    case 316:
      if (lookahead == 'h') ADVANCE(277);
      END_STATE();
    case 317:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 318:
      if (lookahead == 'h') ADVANCE(485);
      END_STATE();
    case 319:
      if (lookahead == 'i') ADVANCE(897);
      END_STATE();
    case 320:
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 321:
      if (lookahead == 'i') ADVANCE(466);
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 322:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(644);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(498);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(587);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 344:
      if (lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(593);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(581);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(581);
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(589);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(488);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(444);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(477);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(614);
      END_STATE();
    case 364:
      if (lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 365:
      if (lookahead == 'j') ADVANCE(286);
      END_STATE();
    case 366:
      if (lookahead == 'k') ADVANCE(843);
      END_STATE();
    case 367:
      if (lookahead == 'k') ADVANCE(268);
      END_STATE();
    case 368:
      if (lookahead == 'l') ADVANCE(865);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(819);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(887);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(857);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(875);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(931);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(626);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(650);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(638);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 379:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(576);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(583);
      END_STATE();
    case 387:
      if (lookahead == 'l') ADVANCE(622);
      END_STATE();
    case 388:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 389:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 390:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead == 's') ADVANCE(562);
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 392:
      if (lookahead == 'l') ADVANCE(629);
      END_STATE();
    case 393:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 394:
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 395:
      if (lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 396:
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 397:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 398:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 399:
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 400:
      if (lookahead == 'm') ADVANCE(910);
      END_STATE();
    case 401:
      if (lookahead == 'm') ADVANCE(915);
      END_STATE();
    case 402:
      if (lookahead == 'm') ADVANCE(891);
      END_STATE();
    case 403:
      if (lookahead == 'm') ADVANCE(499);
      if (lookahead == 'n') ADVANCE(582);
      END_STATE();
    case 404:
      if (lookahead == 'm') ADVANCE(499);
      if (lookahead == 'n') ADVANCE(604);
      END_STATE();
    case 405:
      if (lookahead == 'm') ADVANCE(339);
      if (lookahead == 'n') ADVANCE(623);
      if (lookahead == 'v') ADVANCE(287);
      if (lookahead == 'x') ADVANCE(192);
      END_STATE();
    case 406:
      if (lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 407:
      if (lookahead == 'm') ADVANCE(270);
      END_STATE();
    case 408:
      if (lookahead == 'm') ADVANCE(244);
      END_STATE();
    case 409:
      if (lookahead == 'm') ADVANCE(280);
      END_STATE();
    case 410:
      if (lookahead == 'm') ADVANCE(492);
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 411:
      if (lookahead == 'm') ADVANCE(492);
      if (lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 412:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 413:
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 414:
      if (lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 415:
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'v') ADVANCE(156);
      END_STATE();
    case 416:
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(263);
      END_STATE();
    case 417:
      if (lookahead == 'n') ADVANCE(879);
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 418:
      if (lookahead == 'n') ADVANCE(908);
      END_STATE();
    case 419:
      if (lookahead == 'n') ADVANCE(696);
      END_STATE();
    case 420:
      if (lookahead == 'n') ADVANCE(859);
      END_STATE();
    case 421:
      if (lookahead == 'n') ADVANCE(815);
      END_STATE();
    case 422:
      if (lookahead == 'n') ADVANCE(845);
      END_STATE();
    case 423:
      if (lookahead == 'n') ADVANCE(829);
      END_STATE();
    case 424:
      if (lookahead == 'n') ADVANCE(623);
      if (lookahead == 'v') ADVANCE(287);
      if (lookahead == 'x') ADVANCE(191);
      END_STATE();
    case 425:
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 426:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 431:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 432:
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(736);
      if (lookahead == 'x') ADVANCE(881);
      END_STATE();
    case 433:
      if (lookahead == 'n') ADVANCE(479);
      END_STATE();
    case 434:
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 435:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 436:
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 437:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 438:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 439:
      if (lookahead == 'n') ADVANCE(564);
      END_STATE();
    case 440:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 441:
      if (lookahead == 'n') ADVANCE(600);
      END_STATE();
    case 442:
      if (lookahead == 'n') ADVANCE(578);
      END_STATE();
    case 443:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 444:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 445:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 446:
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 's') ADVANCE(566);
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 447:
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 's') ADVANCE(565);
      END_STATE();
    case 448:
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 449:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 450:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 451:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 452:
      if (lookahead == 'n') ADVANCE(482);
      END_STATE();
    case 453:
      if (lookahead == 'n') ADVANCE(604);
      END_STATE();
    case 454:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 455:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 456:
      if (lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 457:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 458:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 459:
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead == 'r') ADVANCE(320);
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 460:
      if (lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == 'u') ADVANCE(550);
      END_STATE();
    case 462:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead == 't') ADVANCE(883);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 473:
      if (lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 474:
      if (lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 475:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 477:
      if (lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 478:
      if (lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 479:
      if (lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 480:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 481:
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 482:
      if (lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 483:
      if (lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 484:
      if (lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 485:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 486:
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 487:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 488:
      if (lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 489:
      if (lookahead == 'o') ADVANCE(635);
      END_STATE();
    case 490:
      if (lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 491:
      if (lookahead == 'p') ADVANCE(264);
      END_STATE();
    case 492:
      if (lookahead == 'p') ADVANCE(468);
      END_STATE();
    case 493:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 494:
      if (lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 495:
      if (lookahead == 'p') ADVANCE(251);
      END_STATE();
    case 496:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 497:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 498:
      if (lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 499:
      if (lookahead == 'p') ADVANCE(481);
      END_STATE();
    case 500:
      if (lookahead == 'p') ADVANCE(483);
      END_STATE();
    case 501:
      if (lookahead == 'p') ADVANCE(616);
      END_STATE();
    case 502:
      if (lookahead == 'p') ADVANCE(484);
      END_STATE();
    case 503:
      if (lookahead == 'p') ADVANCE(500);
      END_STATE();
    case 504:
      if (lookahead == 'q') ADVANCE(628);
      if (lookahead == 'r') ADVANCE(641);
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 505:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 506:
      if (lookahead == 'r') ADVANCE(718);
      END_STATE();
    case 507:
      if (lookahead == 'r') ADVANCE(720);
      END_STATE();
    case 508:
      if (lookahead == 'r') ADVANCE(958);
      END_STATE();
    case 509:
      if (lookahead == 'r') ADVANCE(963);
      END_STATE();
    case 510:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 511:
      if (lookahead == 'r') ADVANCE(624);
      if (lookahead == 'y') ADVANCE(493);
      END_STATE();
    case 512:
      if (lookahead == 'r') ADVANCE(649);
      END_STATE();
    case 513:
      if (lookahead == 'r') ADVANCE(653);
      END_STATE();
    case 514:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 515:
      if (lookahead == 'r') ADVANCE(633);
      END_STATE();
    case 516:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 517:
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 518:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 519:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 520:
      if (lookahead == 'r') ADVANCE(570);
      END_STATE();
    case 521:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 522:
      if (lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 523:
      if (lookahead == 'r') ADVANCE(595);
      END_STATE();
    case 524:
      if (lookahead == 'r') ADVANCE(579);
      END_STATE();
    case 525:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 526:
      if (lookahead == 'r') ADVANCE(580);
      END_STATE();
    case 527:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 528:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 529:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 530:
      if (lookahead == 'r') ADVANCE(555);
      END_STATE();
    case 531:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 532:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 533:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 534:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 535:
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 536:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 537:
      if (lookahead == 's') ADVANCE(949);
      END_STATE();
    case 538:
      if (lookahead == 's') ADVANCE(914);
      END_STATE();
    case 539:
      if (lookahead == 's') ADVANCE(954);
      END_STATE();
    case 540:
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 541:
      if (lookahead == 's') ADVANCE(833);
      END_STATE();
    case 542:
      if (lookahead == 's') ADVANCE(953);
      END_STATE();
    case 543:
      if (lookahead == 's') ADVANCE(956);
      END_STATE();
    case 544:
      if (lookahead == 's') ADVANCE(948);
      END_STATE();
    case 545:
      if (lookahead == 's') ADVANCE(919);
      END_STATE();
    case 546:
      if (lookahead == 's') ADVANCE(838);
      END_STATE();
    case 547:
      if (lookahead == 's') ADVANCE(955);
      END_STATE();
    case 548:
      if (lookahead == 's') ADVANCE(839);
      END_STATE();
    case 549:
      if (lookahead == 's') ADVANCE(932);
      END_STATE();
    case 550:
      if (lookahead == 's') ADVANCE(606);
      END_STATE();
    case 551:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 552:
      if (lookahead == 's') ADVANCE(598);
      END_STATE();
    case 553:
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 554:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 555:
      if (lookahead == 's') ADVANCE(596);
      END_STATE();
    case 556:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 557:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 558:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 559:
      if (lookahead == 's') ADVANCE(609);
      END_STATE();
    case 560:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 561:
      if (lookahead == 't') ADVANCE(831);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 563:
      if (lookahead == 't') ADVANCE(961);
      END_STATE();
    case 564:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 565:
      if (lookahead == 't') ADVANCE(912);
      END_STATE();
    case 566:
      if (lookahead == 't') ADVANCE(912);
      if (lookahead == 'u') ADVANCE(407);
      END_STATE();
    case 567:
      if (lookahead == 't') ADVANCE(713);
      END_STATE();
    case 568:
      if (lookahead == 't') ADVANCE(832);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(700);
      END_STATE();
    case 570:
      if (lookahead == 't') ADVANCE(681);
      END_STATE();
    case 571:
      if (lookahead == 't') ADVANCE(942);
      END_STATE();
    case 572:
      if (lookahead == 't') ADVANCE(840);
      END_STATE();
    case 573:
      if (lookahead == 't') ADVANCE(940);
      END_STATE();
    case 574:
      if (lookahead == 't') ADVANCE(906);
      END_STATE();
    case 575:
      if (lookahead == 't') ADVANCE(944);
      END_STATE();
    case 576:
      if (lookahead == 't') ADVANCE(847);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(820);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(947);
      END_STATE();
    case 579:
      if (lookahead == 't') ADVANCE(962);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(704);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 582:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(846);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(652);
      END_STATE();
    case 594:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 595:
      if (lookahead == 't') ADVANCE(545);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 597:
      if (lookahead == 't') ADVANCE(515);
      if (lookahead == 'u') ADVANCE(503);
      END_STATE();
    case 598:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 599:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 600:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 601:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 602:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 603:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 604:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 605:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 606:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 607:
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 608:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 609:
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 611:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 612:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 613:
      if (lookahead == 't') ADVANCE(615);
      END_STATE();
    case 614:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 615:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 616:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 617:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 618:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 619:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 620:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 621:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 622:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 623:
      if (lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 624:
      if (lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 625:
      if (lookahead == 'u') ADVANCE(383);
      END_STATE();
    case 626:
      if (lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 627:
      if (lookahead == 'u') ADVANCE(568);
      END_STATE();
    case 628:
      if (lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 629:
      if (lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 630:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 631:
      if (lookahead == 'u') ADVANCE(449);
      END_STATE();
    case 632:
      if (lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 633:
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 634:
      if (lookahead == 'u') ADVANCE(382);
      END_STATE();
    case 635:
      if (lookahead == 'u') ADVANCE(438);
      END_STATE();
    case 636:
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 637:
      if (lookahead == 'u') ADVANCE(602);
      END_STATE();
    case 638:
      if (lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 639:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 640:
      if (lookahead == 'v') ADVANCE(340);
      END_STATE();
    case 641:
      if (lookahead == 'v') ADVANCE(331);
      END_STATE();
    case 642:
      if (lookahead == 'v') ADVANCE(238);
      END_STATE();
    case 643:
      if (lookahead == 'w') ADVANCE(131);
      END_STATE();
    case 644:
      if (lookahead == 'x') ADVANCE(939);
      END_STATE();
    case 645:
      if (lookahead == 'x') ADVANCE(575);
      END_STATE();
    case 646:
      if (lookahead == 'y') ADVANCE(731);
      END_STATE();
    case 647:
      if (lookahead == 'y') ADVANCE(871);
      END_STATE();
    case 648:
      if (lookahead == 'y') ADVANCE(895);
      END_STATE();
    case 649:
      if (lookahead == 'y') ADVANCE(925);
      END_STATE();
    case 650:
      if (lookahead == 'y') ADVANCE(834);
      END_STATE();
    case 651:
      if (lookahead == 'y') ADVANCE(957);
      END_STATE();
    case 652:
      if (lookahead == 'y') ADVANCE(863);
      END_STATE();
    case 653:
      if (lookahead == 'y') ADVANCE(367);
      END_STATE();
    case 654:
      if (lookahead == 'y') ADVANCE(494);
      END_STATE();
    case 655:
      if (lookahead == 'y') ADVANCE(495);
      END_STATE();
    case 656:
      if (lookahead == 'y') ADVANCE(496);
      END_STATE();
    case 657:
      if (lookahead == 'y') ADVANCE(497);
      END_STATE();
    case 658:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 659:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 660:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(772);
      END_STATE();
    case 661:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      END_STATE();
    case 662:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      END_STATE();
    case 663:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      END_STATE();
    case 664:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(773);
      END_STATE();
    case 665:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(753);
      END_STATE();
    case 666:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      END_STATE();
    case 667:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(666);
      END_STATE();
    case 668:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(667);
      END_STATE();
    case 669:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(668);
      END_STATE();
    case 670:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(669);
      END_STATE();
    case 671:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(670);
      END_STATE();
    case 672:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(671);
      END_STATE();
    case 673:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1383);
      if (lookahead == '\r') ADVANCE(1385);
      if (lookahead == '\\') ADVANCE(1384);
      END_STATE();
    case 674:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(812);
      END_STATE();
    case 675:
      if (eof) ADVANCE(680);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 676:
      if (eof) ADVANCE(680);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(675)
      END_STATE();
    case 677:
      if (eof) ADVANCE(680);
      if (lookahead == '\n') SKIP(679)
      END_STATE();
    case 678:
      if (eof) ADVANCE(680);
      if (lookahead == '\n') SKIP(679)
      if (lookahead == '\r') SKIP(677)
      END_STATE();
    case 679:
      if (eof) ADVANCE(680);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '$') ADVANCE(740);
      if (lookahead == '%') ADVANCE(749);
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == '*') ADVANCE(747);
      if (lookahead == '+') ADVANCE(743);
      if (lookahead == ',') ADVANCE(733);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead == '/') ADVANCE(748);
      if (lookahead == ':') ADVANCE(825);
      if (lookahead == ';') ADVANCE(826);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(852);
      if (lookahead == '>') ADVANCE(730);
      if (lookahead == '@') ADVANCE(851);
      if (lookahead == '[') ADVANCE(929);
      if (lookahead == '\\') SKIP(678)
      if (lookahead == ']') ADVANCE(930);
      if (lookahead == '^') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'b') ADVANCE(349);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'd') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'g') ADVANCE(285);
      if (lookahead == 'h') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(403);
      if (lookahead == 'l') ADVANCE(487);
      if (lookahead == 'm') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 't') ADVANCE(655);
      if (lookahead == 'u') ADVANCE(324);
      if (lookahead == 'v') ADVANCE(153);
      if (lookahead == '|') ADVANCE(738);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(679)
      END_STATE();
    case 680:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(217);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(394);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_longlong);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_unsigned_tiny_int);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_unsigned_tiny_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_boolean_type);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_boolean_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_fixed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_octet_type);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_octet_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_signed_tiny_int);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_signed_tiny_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_unsignedshort);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_unsignedlong);
      if (lookahead == ' ') ADVANCE(397);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_unsignedlonglong);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_longdouble);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_wchar);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_wchar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_wstring);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_wstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(742);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(741);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '0') ADVANCE(779);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '0') ADVANCE(779);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(1386);
      if (lookahead == '/') ADVANCE(1375);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(48);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(753);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(755);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_L);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(762);
      if (lookahead == '/') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(762);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(760);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(762);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(762);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\n') ADVANCE(754);
      if (lookahead == '\r') ADVANCE(753);
      if (lookahead == 'U') ADVANCE(672);
      if (lookahead == 'u') ADVANCE(668);
      if (lookahead == 'x') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(756);
      if (lookahead != 0) ADVANCE(753);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(1386);
      if (lookahead == '/') ADVANCE(1375);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\') ADVANCE(48);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(660);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(772);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(800);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(664);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(773);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(773);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(664);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(774);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(774);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(661);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(789);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(790);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(777);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(661);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(791);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1373);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(792);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(661);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(790);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(777);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(661);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(792);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(659);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(793);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(795);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(659);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(798);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(663);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(795);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(659);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(794);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(973);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(796);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(659);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(799);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1373);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(796);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(659);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(800);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(659);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(801);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(662);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(664);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(786);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(662);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(786);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(663);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(664);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(790);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(663);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(664);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(792);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(663);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(790);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(777);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(663);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(790);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(663);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(792);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(663);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(792);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '0') ADVANCE(780);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(800);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '0') ADVANCE(782);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(801);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(664);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(773);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(773);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(664);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(774);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(774);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(786);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(800);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(801);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(800);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_preproc_call_token1);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'e') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'e') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'f') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'i') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'n') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') SKIP(100)
      if (lookahead == '\r') ADVANCE(810);
      if (lookahead == '/') ADVANCE(674);
      if (lookahead == '\\') ADVANCE(813);
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') SKIP(100)
      if (lookahead == '/') ADVANCE(674);
      if (lookahead == '\\') ADVANCE(813);
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(1386);
      if (lookahead == '/') ADVANCE(1375);
      if (lookahead == '\\') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(812);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(674);
      if (lookahead == '\\') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(812);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(814);
      if (lookahead == '/') ADVANCE(674);
      if (lookahead == '\\') ADVANCE(813);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(812);
      if (lookahead == '/') ADVANCE(674);
      if (lookahead == '\\') ADVANCE(813);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_exception);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(722);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_raises);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_getraises);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_setraises);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_bitset);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_bitset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_bitfield);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_bitmask);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_bitmask);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_ATannotation);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(393);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_autoid);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_autoid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_position);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_extensibility);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_extensibility);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_appendable);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_appendable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_mutable);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_mutable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_must_understand);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_must_understand);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_default_literal);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_default_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_range);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_bit_bound);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_bit_bound);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_external);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_nested);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_nested);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_verbatim);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_service);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_oneway);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_oneway);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_ami);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_ami);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_typename);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_typename);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_valuetype);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_valuetype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_eventtype);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_eventtype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_custom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_truncatable);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_truncatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_supports);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_supports);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_factory);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_factory);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_typedef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_ATdefault_literal);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_typeid);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_typeid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_typeprefix);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_Object);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_Object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_value_base_type);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_value_base_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_home);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_manages);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_emits);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_publishes);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_consumes);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_finder);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_finder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_porttype);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_mirrorport);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_connector);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '\r') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(971);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == '/') ADVANCE(1378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(971);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '/') ADVANCE(969);
      if (lookahead == '\\') ADVANCE(968);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(971);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(971);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '0') ADVANCE(776);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(778);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(981);
      if (lookahead == '3') ADVANCE(977);
      if (lookahead == '6') ADVANCE(979);
      if (lookahead == '8') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(981);
      if (lookahead == '3') ADVANCE(977);
      if (lookahead == '6') ADVANCE(979);
      if (lookahead == '8') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(982);
      if (lookahead == '3') ADVANCE(978);
      if (lookahead == '6') ADVANCE(980);
      if (lookahead == '8') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1046);
      if (lookahead == 'i') ADVANCE(1360);
      if (lookahead == 'l') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1046);
      if (lookahead == 'i') ADVANCE(1196);
      if (lookahead == 'l') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1359);
      if (lookahead == 'i') ADVANCE(1201);
      if (lookahead == 'u') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1290);
      if (lookahead == 'h') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1186);
      if (lookahead == 'o') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1187);
      if (lookahead == 'e') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1293);
      if (lookahead == 'n') ADVANCE(1362);
      if (lookahead == 't') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1134);
      if (lookahead == 's') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1319);
      if (lookahead == 'n') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1262);
      if (lookahead == 'h') ADVANCE(1236);
      if (lookahead == 't') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1262);
      if (lookahead == 'h') ADVANCE(1236);
      if (lookahead == 't') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1262);
      if (lookahead == 'h') ADVANCE(1236);
      if (lookahead == 't') ADVANCE(1275);
      if (lookahead == 'u') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1262);
      if (lookahead == 'h') ADVANCE(1236);
      if (lookahead == 't') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1120);
      if (lookahead == 'o') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1001);
      if (lookahead == 'o') ADVANCE(1228);
      if (lookahead == 'u') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1001);
      if (lookahead == 'o') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1360);
      if (lookahead == 'l') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1296);
      if (lookahead == 'o') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1214);
      if (lookahead == 'n') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1214);
      if (lookahead == 'n') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == 'u') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1237);
      if (lookahead == 's') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1258);
      if (lookahead == 'n') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(994);
      if (lookahead == 's') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1137);
      if (lookahead == 'p') ADVANCE(1257);
      if (lookahead == 'u') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1063);
      if (lookahead == 'x') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1073);
      if (lookahead == 'p') ADVANCE(1335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1340);
      if (lookahead == 'v') ADVANCE(1116);
      if (lookahead == 'x') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1340);
      if (lookahead == 'x') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1288);
      if (lookahead == 'r') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1140);
      if (lookahead == 'u') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1315);
      if (lookahead == 't') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(1390);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1383);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(971);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(1379);
      if (lookahead == '\r') ADVANCE(55);
      if (lookahead == '@') ADVANCE(850);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(1382);
      if (lookahead == '\\') ADVANCE(673);
      if (lookahead != 0) ADVANCE(1383);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(1388);
      if (lookahead == '/') ADVANCE(1377);
      if (lookahead == '\\') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1383);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(1381);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1383);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\\') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1383);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1383);
      if (lookahead == '\r') ADVANCE(1385);
      if (lookahead == '\\') ADVANCE(1384);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1383);
      if (lookahead == '\\') ADVANCE(673);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(1390);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(80);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\\') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1383);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(971);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '*') ADVANCE(1390);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(80);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 679},
  [2] = {.lex_state = 82},
  [3] = {.lex_state = 85},
  [4] = {.lex_state = 85},
  [5] = {.lex_state = 85},
  [6] = {.lex_state = 85},
  [7] = {.lex_state = 85},
  [8] = {.lex_state = 82},
  [9] = {.lex_state = 82},
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
  [25] = {.lex_state = 679},
  [26] = {.lex_state = 679},
  [27] = {.lex_state = 72},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 72},
  [30] = {.lex_state = 68},
  [31] = {.lex_state = 68},
  [32] = {.lex_state = 87},
  [33] = {.lex_state = 88},
  [34] = {.lex_state = 84},
  [35] = {.lex_state = 76},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 76},
  [39] = {.lex_state = 76},
  [40] = {.lex_state = 76},
  [41] = {.lex_state = 76},
  [42] = {.lex_state = 76},
  [43] = {.lex_state = 76},
  [44] = {.lex_state = 76},
  [45] = {.lex_state = 76},
  [46] = {.lex_state = 89},
  [47] = {.lex_state = 89},
  [48] = {.lex_state = 89},
  [49] = {.lex_state = 90},
  [50] = {.lex_state = 76},
  [51] = {.lex_state = 85},
  [52] = {.lex_state = 85},
  [53] = {.lex_state = 90},
  [54] = {.lex_state = 85},
  [55] = {.lex_state = 85},
  [56] = {.lex_state = 85},
  [57] = {.lex_state = 85},
  [58] = {.lex_state = 85},
  [59] = {.lex_state = 82},
  [60] = {.lex_state = 82},
  [61] = {.lex_state = 82},
  [62] = {.lex_state = 82},
  [63] = {.lex_state = 76},
  [64] = {.lex_state = 76},
  [65] = {.lex_state = 76},
  [66] = {.lex_state = 76},
  [67] = {.lex_state = 76},
  [68] = {.lex_state = 76},
  [69] = {.lex_state = 76},
  [70] = {.lex_state = 76},
  [71] = {.lex_state = 76},
  [72] = {.lex_state = 76},
  [73] = {.lex_state = 86},
  [74] = {.lex_state = 86},
  [75] = {.lex_state = 93},
  [76] = {.lex_state = 93},
  [77] = {.lex_state = 87},
  [78] = {.lex_state = 87},
  [79] = {.lex_state = 76},
  [80] = {.lex_state = 76},
  [81] = {.lex_state = 76},
  [82] = {.lex_state = 76},
  [83] = {.lex_state = 89},
  [84] = {.lex_state = 89},
  [85] = {.lex_state = 76},
  [86] = {.lex_state = 76},
  [87] = {.lex_state = 89},
  [88] = {.lex_state = 89},
  [89] = {.lex_state = 76},
  [90] = {.lex_state = 76},
  [91] = {.lex_state = 76},
  [92] = {.lex_state = 76},
  [93] = {.lex_state = 89},
  [94] = {.lex_state = 76},
  [95] = {.lex_state = 76},
  [96] = {.lex_state = 76},
  [97] = {.lex_state = 76},
  [98] = {.lex_state = 67},
  [99] = {.lex_state = 76},
  [100] = {.lex_state = 67},
  [101] = {.lex_state = 94},
  [102] = {.lex_state = 67},
  [103] = {.lex_state = 72},
  [104] = {.lex_state = 72},
  [105] = {.lex_state = 679},
  [106] = {.lex_state = 69},
  [107] = {.lex_state = 72},
  [108] = {.lex_state = 679},
  [109] = {.lex_state = 679},
  [110] = {.lex_state = 72},
  [111] = {.lex_state = 72},
  [112] = {.lex_state = 69},
  [113] = {.lex_state = 679},
  [114] = {.lex_state = 679},
  [115] = {.lex_state = 679},
  [116] = {.lex_state = 72},
  [117] = {.lex_state = 69},
  [118] = {.lex_state = 69},
  [119] = {.lex_state = 72},
  [120] = {.lex_state = 69},
  [121] = {.lex_state = 69},
  [122] = {.lex_state = 69},
  [123] = {.lex_state = 95},
  [124] = {.lex_state = 95},
  [125] = {.lex_state = 95},
  [126] = {.lex_state = 69},
  [127] = {.lex_state = 69},
  [128] = {.lex_state = 69},
  [129] = {.lex_state = 95},
  [130] = {.lex_state = 69},
  [131] = {.lex_state = 69},
  [132] = {.lex_state = 69},
  [133] = {.lex_state = 69},
  [134] = {.lex_state = 69},
  [135] = {.lex_state = 69},
  [136] = {.lex_state = 69},
  [137] = {.lex_state = 679},
  [138] = {.lex_state = 69},
  [139] = {.lex_state = 69},
  [140] = {.lex_state = 69},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 69},
  [143] = {.lex_state = 69},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 69},
  [147] = {.lex_state = 679},
  [148] = {.lex_state = 72},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 72},
  [151] = {.lex_state = 72},
  [152] = {.lex_state = 72},
  [153] = {.lex_state = 72},
  [154] = {.lex_state = 72},
  [155] = {.lex_state = 72},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 72},
  [158] = {.lex_state = 72},
  [159] = {.lex_state = 72},
  [160] = {.lex_state = 72},
  [161] = {.lex_state = 72},
  [162] = {.lex_state = 72},
  [163] = {.lex_state = 72},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 72},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 69},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 72},
  [171] = {.lex_state = 679},
  [172] = {.lex_state = 72},
  [173] = {.lex_state = 679},
  [174] = {.lex_state = 72},
  [175] = {.lex_state = 72},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 67},
  [180] = {.lex_state = 73},
  [181] = {.lex_state = 69},
  [182] = {.lex_state = 73},
  [183] = {.lex_state = 73},
  [184] = {.lex_state = 67},
  [185] = {.lex_state = 67},
  [186] = {.lex_state = 73},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 70},
  [192] = {.lex_state = 679},
  [193] = {.lex_state = 72},
  [194] = {.lex_state = 67},
  [195] = {.lex_state = 67},
  [196] = {.lex_state = 72},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 73},
  [203] = {.lex_state = 91},
  [204] = {.lex_state = 73},
  [205] = {.lex_state = 75},
  [206] = {.lex_state = 67},
  [207] = {.lex_state = 679},
  [208] = {.lex_state = 679},
  [209] = {.lex_state = 679},
  [210] = {.lex_state = 98},
  [211] = {.lex_state = 679},
  [212] = {.lex_state = 72},
  [213] = {.lex_state = 67},
  [214] = {.lex_state = 679},
  [215] = {.lex_state = 73},
  [216] = {.lex_state = 75},
  [217] = {.lex_state = 72},
  [218] = {.lex_state = 679},
  [219] = {.lex_state = 98},
  [220] = {.lex_state = 75},
  [221] = {.lex_state = 72},
  [222] = {.lex_state = 73},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 73},
  [225] = {.lex_state = 73},
  [226] = {.lex_state = 98},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 73},
  [231] = {.lex_state = 73},
  [232] = {.lex_state = 73},
  [233] = {.lex_state = 73},
  [234] = {.lex_state = 73},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 72},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 96},
  [239] = {.lex_state = 92},
  [240] = {.lex_state = 73},
  [241] = {.lex_state = 92},
  [242] = {.lex_state = 73},
  [243] = {.lex_state = 73},
  [244] = {.lex_state = 73},
  [245] = {.lex_state = 73},
  [246] = {.lex_state = 73},
  [247] = {.lex_state = 67},
  [248] = {.lex_state = 73},
  [249] = {.lex_state = 73},
  [250] = {.lex_state = 73},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 73},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 73},
  [257] = {.lex_state = 73},
  [258] = {.lex_state = 679},
  [259] = {.lex_state = 47},
  [260] = {.lex_state = 47},
  [261] = {.lex_state = 73},
  [262] = {.lex_state = 73},
  [263] = {.lex_state = 75},
  [264] = {.lex_state = 73},
  [265] = {.lex_state = 73},
  [266] = {.lex_state = 73},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 49},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 77},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 72},
  [274] = {.lex_state = 679},
  [275] = {.lex_state = 1382},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 75},
  [278] = {.lex_state = 73},
  [279] = {.lex_state = 679},
  [280] = {.lex_state = 75},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 98},
  [284] = {.lex_state = 75},
  [285] = {.lex_state = 73},
  [286] = {.lex_state = 73},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 75},
  [289] = {.lex_state = 73},
  [290] = {.lex_state = 73},
  [291] = {.lex_state = 73},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 75},
  [294] = {.lex_state = 55},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 73},
  [299] = {.lex_state = 73},
  [300] = {.lex_state = 75},
  [301] = {.lex_state = 73},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 679},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 77},
  [306] = {.lex_state = 77},
  [307] = {.lex_state = 55},
  [308] = {.lex_state = 73},
  [309] = {.lex_state = 77},
  [310] = {.lex_state = 55},
  [311] = {.lex_state = 75},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 49},
  [315] = {.lex_state = 49},
  [316] = {.lex_state = 75},
  [317] = {.lex_state = 73},
  [318] = {.lex_state = 679},
  [319] = {.lex_state = 49},
  [320] = {.lex_state = 55},
  [321] = {.lex_state = 55},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 55},
  [324] = {.lex_state = 49},
  [325] = {.lex_state = 75},
  [326] = {.lex_state = 98},
  [327] = {.lex_state = 47},
  [328] = {.lex_state = 73},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 72},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 82},
  [335] = {.lex_state = 679},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 82},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 75},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 75},
  [345] = {.lex_state = 82},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 82},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 73},
  [351] = {.lex_state = 82},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 73},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 75},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 75},
  [361] = {.lex_state = 75},
  [362] = {.lex_state = 75},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 73},
  [367] = {.lex_state = 55},
  [368] = {.lex_state = 55},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 82},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 82},
  [375] = {.lex_state = 49},
  [376] = {.lex_state = 75},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 75},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 73},
  [383] = {.lex_state = 679},
  [384] = {.lex_state = 82},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 73},
  [388] = {.lex_state = 75},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 679},
  [391] = {.lex_state = 47},
  [392] = {.lex_state = 75},
  [393] = {.lex_state = 679},
  [394] = {.lex_state = 679},
  [395] = {.lex_state = 75},
  [396] = {.lex_state = 679},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 75},
  [400] = {.lex_state = 75},
  [401] = {.lex_state = 97},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 82},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 73},
  [410] = {.lex_state = 75},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 73},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 47},
  [423] = {.lex_state = 47},
  [424] = {.lex_state = 75},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 75},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 72},
  [430] = {.lex_state = 75},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 82},
  [440] = {.lex_state = 75},
  [441] = {.lex_state = 75},
  [442] = {.lex_state = 75},
  [443] = {.lex_state = 75},
  [444] = {.lex_state = 679},
  [445] = {.lex_state = 82},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 75},
  [451] = {.lex_state = 82},
  [452] = {.lex_state = 73},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 73},
  [455] = {.lex_state = 73},
  [456] = {.lex_state = 73},
  [457] = {.lex_state = 73},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 73},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 82},
  [462] = {.lex_state = 77},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 73},
  [465] = {.lex_state = 77},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 73},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 73},
  [471] = {.lex_state = 72},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 77},
  [475] = {.lex_state = 73},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 73},
  [478] = {.lex_state = 73},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 679},
  [484] = {.lex_state = 73},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 73},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 73},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 73},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 72},
  [495] = {.lex_state = 73},
  [496] = {.lex_state = 73},
  [497] = {.lex_state = 73},
  [498] = {.lex_state = 75},
  [499] = {.lex_state = 82},
  [500] = {.lex_state = 73},
  [501] = {.lex_state = 73},
  [502] = {.lex_state = 73},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 73},
  [506] = {.lex_state = 73},
  [507] = {.lex_state = 73},
  [508] = {.lex_state = 73},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 75},
  [511] = {.lex_state = 73},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 73},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 82},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 73},
  [520] = {.lex_state = 75},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 75},
  [523] = {.lex_state = 73},
  [524] = {.lex_state = 75},
  [525] = {.lex_state = 75},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 75},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 82},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 55},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 73},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 73},
  [536] = {.lex_state = 55},
  [537] = {.lex_state = 679},
  [538] = {.lex_state = 73},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 82},
  [542] = {.lex_state = 98},
  [543] = {.lex_state = 82},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 98},
  [546] = {.lex_state = 82},
  [547] = {.lex_state = 73},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 73},
  [550] = {.lex_state = 73},
  [551] = {.lex_state = 73},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 73},
  [554] = {.lex_state = 82},
  [555] = {.lex_state = 82},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 58},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 73},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 73},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 73},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 73},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 82},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 82},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 73},
  [576] = {.lex_state = 73},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 82},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 82},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 82},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 73},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 73},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 73},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 82},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 73},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 73},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 679},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 73},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 73},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 73},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 73},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 73},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 679},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 73},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 73},
  [657] = {.lex_state = 59},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 73},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 79},
  [675] = {.lex_state = 82},
  [676] = {.lex_state = 82},
  [677] = {.lex_state = 73},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 73},
  [684] = {.lex_state = 73},
  [685] = {.lex_state = 72},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 73},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 82},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 73},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 73},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 82},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 73},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 73},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 73},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 72},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 73},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 82},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 73},
  [741] = {.lex_state = 73},
  [742] = {.lex_state = 73},
  [743] = {.lex_state = 73},
  [744] = {.lex_state = 73},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 73},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 970},
  [758] = {.lex_state = 73},
  [759] = {.lex_state = 73},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 73},
  [762] = {.lex_state = 73},
  [763] = {.lex_state = 73},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 73},
  [769] = {.lex_state = 73},
  [770] = {.lex_state = 73},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 73},
  [774] = {.lex_state = 73},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 82},
  [777] = {.lex_state = 73},
  [778] = {.lex_state = 73},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 73},
  [781] = {.lex_state = 970},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 73},
  [785] = {.lex_state = 73},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 73},
  [790] = {.lex_state = 73},
  [791] = {.lex_state = 73},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 82},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 73},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 73},
  [799] = {.lex_state = 679},
  [800] = {(TSStateId)(-1)},
  [801] = {(TSStateId)(-1)},
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
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_autoid] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_position] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_extensibility] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_appendable] = ACTIONS(1),
    [anon_sym_mutable] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_must_understand] = ACTIONS(1),
    [anon_sym_default_literal] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_unit] = ACTIONS(1),
    [anon_sym_bit_bound] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [anon_sym_nested] = ACTIONS(1),
    [anon_sym_verbatim] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_oneway] = ACTIONS(1),
    [anon_sym_ami] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_typename] = ACTIONS(1),
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
    [sym_specification] = STATE(756),
    [sym_preproc_call] = STATE(108),
    [sym_except_dcl] = STATE(755),
    [sym_interface_dcl] = STATE(755),
    [sym_interface_kind] = STATE(754),
    [sym_interface_forward_dcl] = STATE(752),
    [sym_interface_def] = STATE(752),
    [sym_interface_header] = STATE(751),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_dcl] = STATE(755),
    [sym_annotation_appl] = STATE(206),
    [sym_template_module_dcl] = STATE(755),
    [sym_template_module_inst] = STATE(755),
    [sym_value_dcl] = STATE(755),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(725),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(755),
    [sym_type_prefix_dcl] = STATE(755),
    [sym_import_dcl] = STATE(755),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_component_dcl] = STATE(755),
    [sym_component_forward_dcl] = STATE(719),
    [sym_component_def] = STATE(719),
    [sym_component_header] = STATE(704),
    [sym_home_dcl] = STATE(755),
    [sym_home_header] = STATE(692),
    [sym_event_dcl] = STATE(755),
    [sym_event_forward_dcl] = STATE(689),
    [sym_event_abs_def] = STATE(689),
    [sym_event_def] = STATE(689),
    [sym_event_header] = STATE(688),
    [sym_porttype_dcl] = STATE(755),
    [sym_porttype_forward_dcl] = STATE(686),
    [sym_porttype_def] = STATE(686),
    [sym_connector_dcl] = STATE(755),
    [sym_connector_header] = STATE(681),
    [sym_definition] = STATE(108),
    [sym_type_dcl] = STATE(755),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_module_dcl] = STATE(755),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_predefine] = STATE(113),
    [sym_const_dcl] = STATE(755),
    [sym_comment] = STATE(1),
    [aux_sym_specification_repeat1] = STATE(25),
    [aux_sym_interface_def_repeat1] = STATE(179),
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
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(792),
    [sym_export] = STATE(62),
    [sym_op_dcl] = STATE(336),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(792),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(792),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(792),
    [sym_import_dcl] = STATE(792),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(336),
    [sym_op_with_context] = STATE(792),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_home_body] = STATE(691),
    [sym_home_export] = STATE(61),
    [sym_factory_dcl] = STATE(694),
    [sym_finder_dcl] = STATE(694),
    [sym_type_dcl] = STATE(792),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(792),
    [sym_comment] = STATE(2),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_factory] = ACTIONS(139),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_finder] = ACTIONS(149),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(786),
    [sym_export] = STATE(54),
    [sym_op_dcl] = STATE(338),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(786),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(786),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_element] = STATE(52),
    [sym_state_member] = STATE(54),
    [sym_init_dcl] = STATE(54),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(786),
    [sym_import_dcl] = STATE(786),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(338),
    [sym_op_with_context] = STATE(786),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(786),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(786),
    [sym_comment] = STATE(3),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_public] = ACTIONS(157),
    [anon_sym_private] = ACTIONS(157),
    [anon_sym_factory] = ACTIONS(159),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [4] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(786),
    [sym_export] = STATE(54),
    [sym_op_dcl] = STATE(338),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(786),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(786),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_element] = STATE(52),
    [sym_state_member] = STATE(54),
    [sym_init_dcl] = STATE(54),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(786),
    [sym_import_dcl] = STATE(786),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(338),
    [sym_op_with_context] = STATE(786),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(786),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(786),
    [sym_comment] = STATE(4),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_public] = ACTIONS(157),
    [anon_sym_private] = ACTIONS(157),
    [anon_sym_factory] = ACTIONS(159),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [5] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(786),
    [sym_export] = STATE(54),
    [sym_op_dcl] = STATE(338),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(786),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(786),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_element] = STATE(52),
    [sym_state_member] = STATE(54),
    [sym_init_dcl] = STATE(54),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(786),
    [sym_import_dcl] = STATE(786),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(338),
    [sym_op_with_context] = STATE(786),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(786),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(786),
    [sym_comment] = STATE(5),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_public] = ACTIONS(157),
    [anon_sym_private] = ACTIONS(157),
    [anon_sym_factory] = ACTIONS(159),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [6] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(786),
    [sym_export] = STATE(54),
    [sym_op_dcl] = STATE(338),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(786),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(786),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_element] = STATE(52),
    [sym_state_member] = STATE(54),
    [sym_init_dcl] = STATE(54),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(786),
    [sym_import_dcl] = STATE(786),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(338),
    [sym_op_with_context] = STATE(786),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(786),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(786),
    [sym_comment] = STATE(6),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_oneway] = ACTIONS(254),
    [anon_sym_valuetype] = ACTIONS(257),
    [anon_sym_struct] = ACTIONS(260),
    [anon_sym_union] = ACTIONS(263),
    [anon_sym_enum] = ACTIONS(266),
    [anon_sym_const] = ACTIONS(269),
    [anon_sym_custom] = ACTIONS(272),
    [anon_sym_public] = ACTIONS(275),
    [anon_sym_private] = ACTIONS(275),
    [anon_sym_factory] = ACTIONS(278),
    [anon_sym_typedef] = ACTIONS(281),
    [anon_sym_ATignore_literal_names] = ACTIONS(284),
    [anon_sym_typeid] = ACTIONS(287),
    [anon_sym_import] = ACTIONS(290),
    [anon_sym_Object] = ACTIONS(293),
    [sym_value_base_type] = ACTIONS(180),
    [anon_sym_native] = ACTIONS(296),
    [sym_identifier] = ACTIONS(299),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [7] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(786),
    [sym_export] = STATE(54),
    [sym_op_dcl] = STATE(338),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(786),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(786),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_element] = STATE(52),
    [sym_state_member] = STATE(54),
    [sym_init_dcl] = STATE(54),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(786),
    [sym_import_dcl] = STATE(786),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(338),
    [sym_op_with_context] = STATE(786),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(786),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(786),
    [sym_comment] = STATE(7),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_public] = ACTIONS(157),
    [anon_sym_private] = ACTIONS(157),
    [anon_sym_factory] = ACTIONS(159),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [8] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(792),
    [sym_export] = STATE(62),
    [sym_op_dcl] = STATE(336),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(792),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(792),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(792),
    [sym_import_dcl] = STATE(792),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(336),
    [sym_op_with_context] = STATE(792),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_home_export] = STATE(61),
    [sym_factory_dcl] = STATE(694),
    [sym_finder_dcl] = STATE(694),
    [sym_type_dcl] = STATE(792),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(792),
    [sym_comment] = STATE(8),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_factory] = ACTIONS(139),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_finder] = ACTIONS(149),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [9] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(792),
    [sym_export] = STATE(62),
    [sym_op_dcl] = STATE(336),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(792),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(792),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(792),
    [sym_import_dcl] = STATE(792),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(336),
    [sym_op_with_context] = STATE(792),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_home_export] = STATE(61),
    [sym_factory_dcl] = STATE(694),
    [sym_finder_dcl] = STATE(694),
    [sym_type_dcl] = STATE(792),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(792),
    [sym_comment] = STATE(9),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_oneway] = ACTIONS(395),
    [anon_sym_valuetype] = ACTIONS(398),
    [anon_sym_struct] = ACTIONS(401),
    [anon_sym_union] = ACTIONS(404),
    [anon_sym_enum] = ACTIONS(407),
    [anon_sym_const] = ACTIONS(410),
    [anon_sym_custom] = ACTIONS(413),
    [anon_sym_factory] = ACTIONS(416),
    [anon_sym_typedef] = ACTIONS(419),
    [anon_sym_ATignore_literal_names] = ACTIONS(422),
    [anon_sym_typeid] = ACTIONS(425),
    [anon_sym_import] = ACTIONS(428),
    [anon_sym_Object] = ACTIONS(431),
    [sym_value_base_type] = ACTIONS(321),
    [anon_sym_finder] = ACTIONS(434),
    [anon_sym_native] = ACTIONS(437),
    [sym_identifier] = ACTIONS(440),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [10] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(652),
    [sym_interface_body] = STATE(655),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(419),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(652),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(652),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(652),
    [sym_import_dcl] = STATE(652),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(419),
    [sym_op_with_context] = STATE(652),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(652),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(652),
    [sym_comment] = STATE(10),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_RBRACE] = ACTIONS(443),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [11] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(652),
    [sym_interface_body] = STATE(727),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(419),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(652),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(652),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(652),
    [sym_import_dcl] = STATE(652),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(419),
    [sym_op_with_context] = STATE(652),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(652),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(652),
    [sym_comment] = STATE(11),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [12] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(652),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(419),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(652),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(652),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(652),
    [sym_import_dcl] = STATE(652),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(419),
    [sym_op_with_context] = STATE(652),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(652),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(652),
    [sym_comment] = STATE(12),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [13] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(652),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(419),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(652),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(652),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(652),
    [sym_import_dcl] = STATE(652),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(419),
    [sym_op_with_context] = STATE(652),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(652),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(652),
    [sym_comment] = STATE(13),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [14] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(652),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(419),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(652),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(652),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(652),
    [sym_import_dcl] = STATE(652),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(419),
    [sym_op_with_context] = STATE(652),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(652),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(652),
    [sym_comment] = STATE(14),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_RBRACE] = ACTIONS(451),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [15] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(652),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(419),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(652),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(652),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(652),
    [sym_import_dcl] = STATE(652),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(419),
    [sym_op_with_context] = STATE(652),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(652),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(652),
    [sym_comment] = STATE(15),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [16] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(652),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(419),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(652),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(652),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(652),
    [sym_import_dcl] = STATE(652),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(419),
    [sym_op_with_context] = STATE(652),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(652),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(652),
    [sym_comment] = STATE(16),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_RBRACE] = ACTIONS(455),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [17] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(652),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(419),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(652),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(652),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(652),
    [sym_import_dcl] = STATE(652),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(419),
    [sym_op_with_context] = STATE(652),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(652),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(652),
    [sym_comment] = STATE(17),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_RBRACE] = ACTIONS(457),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [18] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(652),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(419),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(652),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(652),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(652),
    [sym_import_dcl] = STATE(652),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(419),
    [sym_op_with_context] = STATE(652),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(652),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(652),
    [sym_comment] = STATE(18),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_RBRACE] = ACTIONS(455),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [19] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(652),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(419),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(652),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(652),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(652),
    [sym_import_dcl] = STATE(652),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(419),
    [sym_op_with_context] = STATE(652),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(652),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(652),
    [sym_comment] = STATE(19),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_RBRACE] = ACTIONS(459),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [20] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(652),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(419),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(652),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(652),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(652),
    [sym_import_dcl] = STATE(652),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(419),
    [sym_op_with_context] = STATE(652),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(652),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(652),
    [sym_comment] = STATE(20),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [21] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(640),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_except_dcl] = STATE(652),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(419),
    [sym_op_type_spec] = STATE(656),
    [sym_attr_dcl] = STATE(652),
    [sym_readonly_attr_spec] = STATE(661),
    [sym_attr_spec] = STATE(661),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_value_dcl] = STATE(652),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(679),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(652),
    [sym_import_dcl] = STATE(652),
    [sym_object_type] = STATE(257),
    [sym_op_oneway_dcl] = STATE(419),
    [sym_op_with_context] = STATE(652),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_type_dcl] = STATE(652),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_const_dcl] = STATE(652),
    [sym_comment] = STATE(21),
    [aux_sym_interface_def_repeat1] = STATE(247),
    [aux_sym_interface_body_repeat1] = STATE(21),
    [anon_sym_short] = ACTIONS(461),
    [anon_sym_int16] = ACTIONS(461),
    [anon_sym_long] = ACTIONS(464),
    [anon_sym_int32] = ACTIONS(464),
    [anon_sym_longlong] = ACTIONS(467),
    [anon_sym_int64] = ACTIONS(470),
    [sym_unsigned_tiny_int] = ACTIONS(473),
    [sym_boolean_type] = ACTIONS(476),
    [anon_sym_fixed] = ACTIONS(479),
    [sym_octet_type] = ACTIONS(476),
    [sym_signed_tiny_int] = ACTIONS(482),
    [anon_sym_unsignedshort] = ACTIONS(485),
    [anon_sym_uint16] = ACTIONS(488),
    [anon_sym_unsignedlong] = ACTIONS(491),
    [anon_sym_uint32] = ACTIONS(491),
    [anon_sym_unsignedlonglong] = ACTIONS(494),
    [anon_sym_uint64] = ACTIONS(497),
    [anon_sym_float] = ACTIONS(500),
    [anon_sym_double] = ACTIONS(500),
    [anon_sym_longdouble] = ACTIONS(503),
    [anon_sym_char] = ACTIONS(506),
    [anon_sym_wchar] = ACTIONS(506),
    [anon_sym_COLON_COLON] = ACTIONS(509),
    [anon_sym_string] = ACTIONS(512),
    [anon_sym_wstring] = ACTIONS(512),
    [anon_sym_any] = ACTIONS(515),
    [anon_sym_sequence] = ACTIONS(518),
    [anon_sym_map] = ACTIONS(521),
    [anon_sym_exception] = ACTIONS(524),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_abstract] = ACTIONS(529),
    [anon_sym_void] = ACTIONS(532),
    [anon_sym_readonly] = ACTIONS(535),
    [anon_sym_attribute] = ACTIONS(538),
    [anon_sym_bitset] = ACTIONS(541),
    [anon_sym_bitmask] = ACTIONS(544),
    [anon_sym_AT] = ACTIONS(547),
    [anon_sym_oneway] = ACTIONS(550),
    [anon_sym_valuetype] = ACTIONS(553),
    [anon_sym_struct] = ACTIONS(556),
    [anon_sym_union] = ACTIONS(559),
    [anon_sym_enum] = ACTIONS(562),
    [anon_sym_const] = ACTIONS(565),
    [anon_sym_custom] = ACTIONS(568),
    [anon_sym_typedef] = ACTIONS(571),
    [anon_sym_ATignore_literal_names] = ACTIONS(574),
    [anon_sym_typeid] = ACTIONS(577),
    [anon_sym_import] = ACTIONS(580),
    [anon_sym_Object] = ACTIONS(583),
    [sym_value_base_type] = ACTIONS(476),
    [anon_sym_native] = ACTIONS(586),
    [sym_identifier] = ACTIONS(589),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [22] = {
    [sym_except_dcl] = STATE(782),
    [sym_interface_dcl] = STATE(782),
    [sym_interface_kind] = STATE(754),
    [sym_interface_forward_dcl] = STATE(752),
    [sym_interface_def] = STATE(752),
    [sym_interface_header] = STATE(751),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_dcl] = STATE(782),
    [sym_annotation_appl] = STATE(206),
    [sym_template_module_dcl] = STATE(782),
    [sym_tpl_definition] = STATE(107),
    [sym_template_module_inst] = STATE(782),
    [sym_template_module_ref] = STATE(623),
    [sym_value_dcl] = STATE(782),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(783),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(782),
    [sym_type_prefix_dcl] = STATE(782),
    [sym_import_dcl] = STATE(782),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_component_dcl] = STATE(782),
    [sym_component_forward_dcl] = STATE(719),
    [sym_component_def] = STATE(719),
    [sym_component_header] = STATE(704),
    [sym_home_dcl] = STATE(782),
    [sym_home_header] = STATE(692),
    [sym_event_dcl] = STATE(782),
    [sym_event_forward_dcl] = STATE(689),
    [sym_event_abs_def] = STATE(689),
    [sym_event_def] = STATE(689),
    [sym_event_header] = STATE(688),
    [sym_porttype_dcl] = STATE(782),
    [sym_porttype_forward_dcl] = STATE(686),
    [sym_porttype_def] = STATE(686),
    [sym_connector_dcl] = STATE(782),
    [sym_connector_header] = STATE(681),
    [sym_definition] = STATE(111),
    [sym_type_dcl] = STATE(782),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_module_dcl] = STATE(782),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_predefine] = STATE(103),
    [sym_const_dcl] = STATE(782),
    [sym_comment] = STATE(22),
    [aux_sym_interface_def_repeat1] = STATE(179),
    [aux_sym_template_module_dcl_repeat1] = STATE(22),
    [anon_sym_exception] = ACTIONS(592),
    [anon_sym_RBRACE] = ACTIONS(595),
    [anon_sym_local] = ACTIONS(597),
    [anon_sym_abstract] = ACTIONS(600),
    [anon_sym_interface] = ACTIONS(603),
    [anon_sym_bitset] = ACTIONS(606),
    [anon_sym_bitmask] = ACTIONS(609),
    [anon_sym_ATannotation] = ACTIONS(612),
    [anon_sym_AT] = ACTIONS(615),
    [anon_sym_module] = ACTIONS(618),
    [anon_sym_valuetype] = ACTIONS(621),
    [anon_sym_eventtype] = ACTIONS(624),
    [anon_sym_struct] = ACTIONS(627),
    [anon_sym_union] = ACTIONS(630),
    [anon_sym_enum] = ACTIONS(633),
    [anon_sym_const] = ACTIONS(636),
    [anon_sym_alias] = ACTIONS(639),
    [anon_sym_custom] = ACTIONS(642),
    [anon_sym_typedef] = ACTIONS(645),
    [anon_sym_ATignore_literal_names] = ACTIONS(648),
    [anon_sym_typeid] = ACTIONS(651),
    [anon_sym_typeprefix] = ACTIONS(654),
    [anon_sym_import] = ACTIONS(657),
    [anon_sym_component] = ACTIONS(660),
    [anon_sym_home] = ACTIONS(663),
    [anon_sym_porttype] = ACTIONS(666),
    [anon_sym_connector] = ACTIONS(669),
    [anon_sym_native] = ACTIONS(672),
    [anon_sym_POUNDdefine] = ACTIONS(675),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [23] = {
    [sym_except_dcl] = STATE(782),
    [sym_interface_dcl] = STATE(782),
    [sym_interface_kind] = STATE(754),
    [sym_interface_forward_dcl] = STATE(752),
    [sym_interface_def] = STATE(752),
    [sym_interface_header] = STATE(751),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_dcl] = STATE(782),
    [sym_annotation_appl] = STATE(206),
    [sym_template_module_dcl] = STATE(782),
    [sym_tpl_definition] = STATE(107),
    [sym_template_module_inst] = STATE(782),
    [sym_template_module_ref] = STATE(623),
    [sym_value_dcl] = STATE(782),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(783),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(782),
    [sym_type_prefix_dcl] = STATE(782),
    [sym_import_dcl] = STATE(782),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_component_dcl] = STATE(782),
    [sym_component_forward_dcl] = STATE(719),
    [sym_component_def] = STATE(719),
    [sym_component_header] = STATE(704),
    [sym_home_dcl] = STATE(782),
    [sym_home_header] = STATE(692),
    [sym_event_dcl] = STATE(782),
    [sym_event_forward_dcl] = STATE(689),
    [sym_event_abs_def] = STATE(689),
    [sym_event_def] = STATE(689),
    [sym_event_header] = STATE(688),
    [sym_porttype_dcl] = STATE(782),
    [sym_porttype_forward_dcl] = STATE(686),
    [sym_porttype_def] = STATE(686),
    [sym_connector_dcl] = STATE(782),
    [sym_connector_header] = STATE(681),
    [sym_definition] = STATE(111),
    [sym_type_dcl] = STATE(782),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_module_dcl] = STATE(782),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_predefine] = STATE(103),
    [sym_const_dcl] = STATE(782),
    [sym_comment] = STATE(23),
    [aux_sym_interface_def_repeat1] = STATE(179),
    [aux_sym_template_module_dcl_repeat1] = STATE(22),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(678),
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
    [anon_sym_alias] = ACTIONS(680),
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
    [anon_sym_POUNDdefine] = ACTIONS(682),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [24] = {
    [sym_except_dcl] = STATE(782),
    [sym_interface_dcl] = STATE(782),
    [sym_interface_kind] = STATE(754),
    [sym_interface_forward_dcl] = STATE(752),
    [sym_interface_def] = STATE(752),
    [sym_interface_header] = STATE(751),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_dcl] = STATE(782),
    [sym_annotation_appl] = STATE(206),
    [sym_template_module_dcl] = STATE(782),
    [sym_tpl_definition] = STATE(107),
    [sym_template_module_inst] = STATE(782),
    [sym_template_module_ref] = STATE(623),
    [sym_value_dcl] = STATE(782),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(783),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(782),
    [sym_type_prefix_dcl] = STATE(782),
    [sym_import_dcl] = STATE(782),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_component_dcl] = STATE(782),
    [sym_component_forward_dcl] = STATE(719),
    [sym_component_def] = STATE(719),
    [sym_component_header] = STATE(704),
    [sym_home_dcl] = STATE(782),
    [sym_home_header] = STATE(692),
    [sym_event_dcl] = STATE(782),
    [sym_event_forward_dcl] = STATE(689),
    [sym_event_abs_def] = STATE(689),
    [sym_event_def] = STATE(689),
    [sym_event_header] = STATE(688),
    [sym_porttype_dcl] = STATE(782),
    [sym_porttype_forward_dcl] = STATE(686),
    [sym_porttype_def] = STATE(686),
    [sym_connector_dcl] = STATE(782),
    [sym_connector_header] = STATE(681),
    [sym_definition] = STATE(111),
    [sym_type_dcl] = STATE(782),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_module_dcl] = STATE(782),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_predefine] = STATE(103),
    [sym_const_dcl] = STATE(782),
    [sym_comment] = STATE(24),
    [aux_sym_interface_def_repeat1] = STATE(179),
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
    [anon_sym_alias] = ACTIONS(680),
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
    [anon_sym_POUNDdefine] = ACTIONS(682),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [25] = {
    [sym_preproc_call] = STATE(108),
    [sym_except_dcl] = STATE(755),
    [sym_interface_dcl] = STATE(755),
    [sym_interface_kind] = STATE(754),
    [sym_interface_forward_dcl] = STATE(752),
    [sym_interface_def] = STATE(752),
    [sym_interface_header] = STATE(751),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_dcl] = STATE(755),
    [sym_annotation_appl] = STATE(206),
    [sym_template_module_dcl] = STATE(755),
    [sym_template_module_inst] = STATE(755),
    [sym_value_dcl] = STATE(755),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(725),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(755),
    [sym_type_prefix_dcl] = STATE(755),
    [sym_import_dcl] = STATE(755),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_component_dcl] = STATE(755),
    [sym_component_forward_dcl] = STATE(719),
    [sym_component_def] = STATE(719),
    [sym_component_header] = STATE(704),
    [sym_home_dcl] = STATE(755),
    [sym_home_header] = STATE(692),
    [sym_event_dcl] = STATE(755),
    [sym_event_forward_dcl] = STATE(689),
    [sym_event_abs_def] = STATE(689),
    [sym_event_def] = STATE(689),
    [sym_event_header] = STATE(688),
    [sym_porttype_dcl] = STATE(755),
    [sym_porttype_forward_dcl] = STATE(686),
    [sym_porttype_def] = STATE(686),
    [sym_connector_dcl] = STATE(755),
    [sym_connector_header] = STATE(681),
    [sym_definition] = STATE(108),
    [sym_type_dcl] = STATE(755),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_module_dcl] = STATE(755),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_predefine] = STATE(113),
    [sym_const_dcl] = STATE(755),
    [sym_comment] = STATE(25),
    [aux_sym_specification_repeat1] = STATE(26),
    [aux_sym_interface_def_repeat1] = STATE(179),
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
    [sym_preproc_call] = STATE(108),
    [sym_except_dcl] = STATE(755),
    [sym_interface_dcl] = STATE(755),
    [sym_interface_kind] = STATE(754),
    [sym_interface_forward_dcl] = STATE(752),
    [sym_interface_def] = STATE(752),
    [sym_interface_header] = STATE(751),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_dcl] = STATE(755),
    [sym_annotation_appl] = STATE(206),
    [sym_template_module_dcl] = STATE(755),
    [sym_template_module_inst] = STATE(755),
    [sym_value_dcl] = STATE(755),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(725),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(755),
    [sym_type_prefix_dcl] = STATE(755),
    [sym_import_dcl] = STATE(755),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_component_dcl] = STATE(755),
    [sym_component_forward_dcl] = STATE(719),
    [sym_component_def] = STATE(719),
    [sym_component_header] = STATE(704),
    [sym_home_dcl] = STATE(755),
    [sym_home_header] = STATE(692),
    [sym_event_dcl] = STATE(755),
    [sym_event_forward_dcl] = STATE(689),
    [sym_event_abs_def] = STATE(689),
    [sym_event_def] = STATE(689),
    [sym_event_header] = STATE(688),
    [sym_porttype_dcl] = STATE(755),
    [sym_porttype_forward_dcl] = STATE(686),
    [sym_porttype_def] = STATE(686),
    [sym_connector_dcl] = STATE(755),
    [sym_connector_header] = STATE(681),
    [sym_definition] = STATE(108),
    [sym_type_dcl] = STATE(755),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_module_dcl] = STATE(755),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_predefine] = STATE(113),
    [sym_const_dcl] = STATE(755),
    [sym_comment] = STATE(26),
    [aux_sym_specification_repeat1] = STATE(26),
    [aux_sym_interface_def_repeat1] = STATE(179),
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
    [sym_except_dcl] = STATE(782),
    [sym_interface_dcl] = STATE(782),
    [sym_interface_kind] = STATE(754),
    [sym_interface_forward_dcl] = STATE(752),
    [sym_interface_def] = STATE(752),
    [sym_interface_header] = STATE(751),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_dcl] = STATE(782),
    [sym_annotation_appl] = STATE(206),
    [sym_template_module_dcl] = STATE(782),
    [sym_template_module_inst] = STATE(782),
    [sym_value_dcl] = STATE(782),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(783),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(782),
    [sym_type_prefix_dcl] = STATE(782),
    [sym_import_dcl] = STATE(782),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_component_dcl] = STATE(782),
    [sym_component_forward_dcl] = STATE(719),
    [sym_component_def] = STATE(719),
    [sym_component_header] = STATE(704),
    [sym_home_dcl] = STATE(782),
    [sym_home_header] = STATE(692),
    [sym_event_dcl] = STATE(782),
    [sym_event_forward_dcl] = STATE(689),
    [sym_event_abs_def] = STATE(689),
    [sym_event_def] = STATE(689),
    [sym_event_header] = STATE(688),
    [sym_porttype_dcl] = STATE(782),
    [sym_porttype_forward_dcl] = STATE(686),
    [sym_porttype_def] = STATE(686),
    [sym_connector_dcl] = STATE(782),
    [sym_connector_header] = STATE(681),
    [sym_definition] = STATE(119),
    [sym_type_dcl] = STATE(782),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_module_dcl] = STATE(782),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_predefine] = STATE(103),
    [sym_const_dcl] = STATE(782),
    [sym_comment] = STATE(27),
    [aux_sym_interface_def_repeat1] = STATE(179),
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
    [sym_except_dcl] = STATE(782),
    [sym_interface_dcl] = STATE(782),
    [sym_interface_kind] = STATE(754),
    [sym_interface_forward_dcl] = STATE(752),
    [sym_interface_def] = STATE(752),
    [sym_interface_header] = STATE(751),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_dcl] = STATE(782),
    [sym_annotation_appl] = STATE(206),
    [sym_template_module_dcl] = STATE(782),
    [sym_template_module_inst] = STATE(782),
    [sym_value_dcl] = STATE(782),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(783),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(782),
    [sym_type_prefix_dcl] = STATE(782),
    [sym_import_dcl] = STATE(782),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_component_dcl] = STATE(782),
    [sym_component_forward_dcl] = STATE(719),
    [sym_component_def] = STATE(719),
    [sym_component_header] = STATE(704),
    [sym_home_dcl] = STATE(782),
    [sym_home_header] = STATE(692),
    [sym_event_dcl] = STATE(782),
    [sym_event_forward_dcl] = STATE(689),
    [sym_event_abs_def] = STATE(689),
    [sym_event_def] = STATE(689),
    [sym_event_header] = STATE(688),
    [sym_porttype_dcl] = STATE(782),
    [sym_porttype_forward_dcl] = STATE(686),
    [sym_porttype_def] = STATE(686),
    [sym_connector_dcl] = STATE(782),
    [sym_connector_header] = STATE(681),
    [sym_definition] = STATE(119),
    [sym_type_dcl] = STATE(782),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_module_dcl] = STATE(782),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_predefine] = STATE(103),
    [sym_const_dcl] = STATE(782),
    [sym_comment] = STATE(28),
    [aux_sym_interface_def_repeat1] = STATE(179),
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
    [anon_sym_POUNDdefine] = ACTIONS(682),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [29] = {
    [sym_except_dcl] = STATE(782),
    [sym_interface_dcl] = STATE(782),
    [sym_interface_kind] = STATE(754),
    [sym_interface_forward_dcl] = STATE(752),
    [sym_interface_def] = STATE(752),
    [sym_interface_header] = STATE(751),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_dcl] = STATE(782),
    [sym_annotation_appl] = STATE(206),
    [sym_template_module_dcl] = STATE(782),
    [sym_template_module_inst] = STATE(782),
    [sym_value_dcl] = STATE(782),
    [sym_value_def] = STATE(735),
    [sym_value_kind] = STATE(732),
    [sym_value_header] = STATE(726),
    [sym_value_forward_dcl] = STATE(735),
    [sym_typedef_dcl] = STATE(783),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_type_id_dcl] = STATE(782),
    [sym_type_prefix_dcl] = STATE(782),
    [sym_import_dcl] = STATE(782),
    [sym_value_box_def] = STATE(735),
    [sym_value_abs_def] = STATE(735),
    [sym_component_dcl] = STATE(782),
    [sym_component_forward_dcl] = STATE(719),
    [sym_component_def] = STATE(719),
    [sym_component_header] = STATE(704),
    [sym_home_dcl] = STATE(782),
    [sym_home_header] = STATE(692),
    [sym_event_dcl] = STATE(782),
    [sym_event_forward_dcl] = STATE(689),
    [sym_event_abs_def] = STATE(689),
    [sym_event_def] = STATE(689),
    [sym_event_header] = STATE(688),
    [sym_porttype_dcl] = STATE(782),
    [sym_porttype_forward_dcl] = STATE(686),
    [sym_porttype_def] = STATE(686),
    [sym_connector_dcl] = STATE(782),
    [sym_connector_header] = STATE(681),
    [sym_definition] = STATE(119),
    [sym_type_dcl] = STATE(782),
    [sym_constr_type_dcl] = STATE(679),
    [sym_native_dcl] = STATE(679),
    [sym_module_dcl] = STATE(782),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_predefine] = STATE(103),
    [sym_const_dcl] = STATE(782),
    [sym_comment] = STATE(29),
    [aux_sym_interface_def_repeat1] = STATE(179),
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
    [anon_sym_POUNDdefine] = ACTIONS(682),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [30] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(171),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(554),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_const_expr] = STATE(554),
    [sym_or_expr] = STATE(202),
    [sym_xor_expr] = STATE(183),
    [sym_and_expr] = STATE(182),
    [sym_shift_expr] = STATE(175),
    [sym_add_expr] = STATE(170),
    [sym_mult_expr] = STATE(155),
    [sym_unary_expr] = STATE(151),
    [sym_primary_expr] = STATE(161),
    [sym_unary_operator] = STATE(168),
    [sym_literal] = STATE(148),
    [sym_string_literal] = STATE(153),
    [sym_char_literal] = STATE(153),
    [sym_boolean_literal] = STATE(153),
    [sym_actual_parameters] = STATE(793),
    [sym_actual_parameter] = STATE(339),
    [sym_object_type] = STATE(257),
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
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(171),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(554),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_const_expr] = STATE(554),
    [sym_or_expr] = STATE(202),
    [sym_xor_expr] = STATE(183),
    [sym_and_expr] = STATE(182),
    [sym_shift_expr] = STATE(175),
    [sym_add_expr] = STATE(170),
    [sym_mult_expr] = STATE(155),
    [sym_unary_expr] = STATE(151),
    [sym_primary_expr] = STATE(161),
    [sym_unary_operator] = STATE(168),
    [sym_literal] = STATE(148),
    [sym_string_literal] = STATE(153),
    [sym_char_literal] = STATE(153),
    [sym_boolean_literal] = STATE(153),
    [sym_actual_parameter] = STATE(546),
    [sym_object_type] = STATE(257),
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
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_type_spec] = STATE(299),
    [sym_simple_type_spec] = STATE(298),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(298),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_element_spec] = STATE(722),
    [sym_object_type] = STATE(257),
    [sym_constr_type_dcl] = STATE(299),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_comment] = STATE(32),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_case] = ACTIONS(883),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [33] = {
    [sym_signed_short_int] = STATE(240),
    [sym_signed_long_int] = STATE(240),
    [sym_signed_longlong_int] = STATE(240),
    [sym_unsigned_int] = STATE(256),
    [sym_integer_type] = STATE(257),
    [sym_signed_int] = STATE(256),
    [sym_unsigned_short_int] = STATE(233),
    [sym_unsigned_long_int] = STATE(233),
    [sym_unsigned_longlong_int] = STATE(233),
    [sym_floating_pt_type] = STATE(257),
    [sym_char_type] = STATE(257),
    [sym_scoped_name] = STATE(263),
    [sym_string_type] = STATE(264),
    [sym_simple_type_spec] = STATE(250),
    [sym_base_type_spec] = STATE(266),
    [sym_any_type] = STATE(257),
    [sym_fixed_pt_type] = STATE(264),
    [sym_template_type_spec] = STATE(250),
    [sym_sequence_type] = STATE(264),
    [sym_map_type] = STATE(264),
    [sym_bitset_dcl] = STATE(533),
    [sym_bitmask_dcl] = STATE(533),
    [sym_annotation_appl] = STATE(206),
    [sym_type_declarator] = STATE(589),
    [sym_enum_dcl] = STATE(533),
    [sym_enum_anno] = STATE(724),
    [sym_union_dcl] = STATE(533),
    [sym_union_forward_dcl] = STATE(508),
    [sym_union_def] = STATE(508),
    [sym_object_type] = STATE(257),
    [sym_constr_type_dcl] = STATE(250),
    [sym_struct_dcl] = STATE(533),
    [sym_struct_forward_dcl] = STATE(452),
    [sym_struct_def] = STATE(452),
    [sym_comment] = STATE(33),
    [aux_sym_interface_def_repeat1] = STATE(247),
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
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 42,
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
    ACTIONS(885), 1,
      anon_sym_LBRACE,
    ACTIONS(887), 1,
      anon_sym_COLON,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    ACTIONS(891), 1,
      anon_sym_supports,
    STATE(34), 1,
      sym_comment,
    STATE(266), 1,
      sym_base_type_spec,
    STATE(333), 1,
      sym_scoped_name,
    STATE(354), 1,
      sym_value_inheritance,
    STATE(590), 1,
      sym_value_supports,
    STATE(663), 1,
      sym_type_spec,
    STATE(665), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [148] = 41,
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
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    ACTIONS(895), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(89), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [293] = 41,
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
    ACTIONS(895), 1,
      anon_sym_AT,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_except_dcl_repeat1,
    STATE(36), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(89), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [438] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(905), 1,
      anon_sym_longlong,
    ACTIONS(908), 1,
      anon_sym_int64,
    ACTIONS(911), 1,
      sym_unsigned_tiny_int,
    ACTIONS(917), 1,
      anon_sym_fixed,
    ACTIONS(920), 1,
      sym_signed_tiny_int,
    ACTIONS(923), 1,
      anon_sym_unsignedshort,
    ACTIONS(926), 1,
      anon_sym_uint16,
    ACTIONS(932), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(935), 1,
      anon_sym_uint64,
    ACTIONS(941), 1,
      anon_sym_longdouble,
    ACTIONS(947), 1,
      anon_sym_COLON_COLON,
    ACTIONS(953), 1,
      anon_sym_any,
    ACTIONS(956), 1,
      anon_sym_sequence,
    ACTIONS(959), 1,
      anon_sym_map,
    ACTIONS(962), 1,
      anon_sym_RBRACE,
    ACTIONS(964), 1,
      anon_sym_AT,
    ACTIONS(967), 1,
      anon_sym_Object,
    ACTIONS(970), 1,
      sym_identifier,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(89), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
      sym_base_type_spec,
    ACTIONS(899), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(902), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(929), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(938), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(944), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(950), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(37), 2,
      sym_comment,
      aux_sym_except_dcl_repeat1,
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(914), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [581] = 41,
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
    ACTIONS(895), 1,
      anon_sym_AT,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_except_dcl_repeat1,
    STATE(38), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(89), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [726] = 41,
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
    ACTIONS(895), 1,
      anon_sym_AT,
    ACTIONS(975), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_except_dcl_repeat1,
    STATE(39), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(89), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [871] = 41,
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
    ACTIONS(895), 1,
      anon_sym_AT,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_except_dcl_repeat1,
    STATE(40), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(89), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1016] = 41,
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
    ACTIONS(895), 1,
      anon_sym_AT,
    ACTIONS(979), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(89), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1161] = 41,
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
    ACTIONS(895), 1,
      anon_sym_AT,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(89), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1306] = 41,
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
    ACTIONS(895), 1,
      anon_sym_AT,
    ACTIONS(979), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_except_dcl_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(89), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1451] = 41,
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
    ACTIONS(895), 1,
      anon_sym_AT,
    ACTIONS(983), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_except_dcl_repeat1,
    STATE(44), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(89), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1596] = 41,
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
    ACTIONS(895), 1,
      anon_sym_AT,
    ACTIONS(985), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_except_dcl_repeat1,
    STATE(45), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(89), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1741] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(993), 1,
      anon_sym_longlong,
    ACTIONS(996), 1,
      anon_sym_int64,
    ACTIONS(999), 1,
      sym_unsigned_tiny_int,
    ACTIONS(1005), 1,
      anon_sym_fixed,
    ACTIONS(1008), 1,
      sym_signed_tiny_int,
    ACTIONS(1011), 1,
      anon_sym_unsignedshort,
    ACTIONS(1014), 1,
      anon_sym_uint16,
    ACTIONS(1020), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(1023), 1,
      anon_sym_uint64,
    ACTIONS(1029), 1,
      anon_sym_longdouble,
    ACTIONS(1035), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1041), 1,
      anon_sym_any,
    ACTIONS(1044), 1,
      anon_sym_sequence,
    ACTIONS(1047), 1,
      anon_sym_RBRACE,
    ACTIONS(1049), 1,
      anon_sym_enum,
    ACTIONS(1052), 1,
      anon_sym_const,
    ACTIONS(1055), 1,
      anon_sym_typedef,
    ACTIONS(1058), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(1061), 1,
      sym_identifier,
    STATE(83), 1,
      sym_annotation_member,
    STATE(84), 1,
      sym_annotation_body,
    STATE(498), 1,
      sym_scoped_name,
    STATE(500), 1,
      sym_annotation_member_type,
    STATE(724), 1,
      sym_enum_anno,
    ACTIONS(987), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(990), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(1002), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(1017), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(1026), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(1032), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(1038), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(46), 2,
      sym_comment,
      aux_sym_annotation_dcl_repeat1,
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(718), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(721), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(619), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [1883] = 41,
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
    ACTIONS(133), 1,
      anon_sym_enum,
    ACTIONS(135), 1,
      anon_sym_const,
    ACTIONS(141), 1,
      anon_sym_typedef,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1066), 1,
      anon_sym_fixed,
    ACTIONS(1068), 1,
      anon_sym_any,
    ACTIONS(1070), 1,
      anon_sym_RBRACE,
    ACTIONS(1072), 1,
      anon_sym_ATignore_literal_names,
    STATE(47), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_annotation_dcl_repeat1,
    STATE(83), 1,
      sym_annotation_member,
    STATE(84), 1,
      sym_annotation_body,
    STATE(498), 1,
      sym_scoped_name,
    STATE(500), 1,
      sym_annotation_member_type,
    STATE(724), 1,
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
    ACTIONS(1064), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(718), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(721), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(619), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [2027] = 41,
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
    ACTIONS(133), 1,
      anon_sym_enum,
    ACTIONS(135), 1,
      anon_sym_const,
    ACTIONS(141), 1,
      anon_sym_typedef,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1066), 1,
      anon_sym_fixed,
    ACTIONS(1068), 1,
      anon_sym_any,
    ACTIONS(1072), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(1074), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_annotation_dcl_repeat1,
    STATE(48), 1,
      sym_comment,
    STATE(83), 1,
      sym_annotation_member,
    STATE(84), 1,
      sym_annotation_body,
    STATE(498), 1,
      sym_scoped_name,
    STATE(500), 1,
      sym_annotation_member_type,
    STATE(724), 1,
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
    ACTIONS(1064), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(718), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(721), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(619), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [2171] = 35,
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
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
      sym_base_type_spec,
    STATE(334), 1,
      sym_formal_parameter,
    STATE(578), 1,
      sym_formal_parameters,
    STATE(798), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(677), 2,
      sym_simple_type_spec,
      sym_sequence_type,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(257), 5,
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
  [2301] = 38,
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
    ACTIONS(895), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_interface_def_repeat1,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(232), 1,
      sym_type_spec,
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [2437] = 5,
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
      anon_sym_oneway,
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
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [2506] = 5,
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
      anon_sym_oneway,
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
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [2575] = 34,
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
    STATE(53), 1,
      sym_comment,
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
      sym_base_type_spec,
    STATE(543), 1,
      sym_formal_parameter,
    STATE(798), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(677), 2,
      sym_simple_type_spec,
      sym_sequence_type,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(257), 5,
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
  [2702] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
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
      anon_sym_oneway,
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
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [2771] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(55), 1,
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
      anon_sym_oneway,
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
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [2840] = 5,
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
      anon_sym_oneway,
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
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [2909] = 5,
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
      anon_sym_oneway,
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
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [2978] = 5,
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
      anon_sym_oneway,
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
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [3047] = 5,
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
      anon_sym_oneway,
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
      sym_value_base_type,
      anon_sym_finder,
      anon_sym_native,
      sym_identifier,
  [3115] = 5,
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
      anon_sym_oneway,
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
      sym_value_base_type,
      anon_sym_finder,
      anon_sym_native,
      sym_identifier,
  [3183] = 5,
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
      anon_sym_oneway,
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
      sym_value_base_type,
      anon_sym_finder,
      anon_sym_native,
      sym_identifier,
  [3251] = 5,
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
      anon_sym_oneway,
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
      sym_value_base_type,
      anon_sym_finder,
      anon_sym_native,
      sym_identifier,
  [3319] = 35,
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
    STATE(63), 1,
      sym_comment,
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
      sym_base_type_spec,
    STATE(555), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
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
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
      sym_base_type_spec,
    STATE(477), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
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
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
      sym_base_type_spec,
    STATE(459), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
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
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
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
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
      sym_base_type_spec,
    STATE(478), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
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
    STATE(242), 1,
      sym_type_spec,
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
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
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
      sym_base_type_spec,
    STATE(414), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
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
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
      sym_base_type_spec,
    STATE(541), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
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
    STATE(263), 1,
      sym_scoped_name,
    STATE(266), 1,
      sym_base_type_spec,
    STATE(366), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
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
    STATE(266), 1,
      sym_base_type_spec,
    STATE(333), 1,
      sym_scoped_name,
    STATE(771), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(298), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(264), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(257), 5,
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
      anon_sym_oneway,
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
    ACTIONS(1124), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1122), 45,
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
      anon_sym_oneway,
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
    ACTIONS(1066), 1,
      anon_sym_fixed,
    STATE(75), 1,
      sym_comment,
    STATE(510), 1,
      sym_scoped_name,
    STATE(606), 1,
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
    ACTIONS(1064), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(619), 6,
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
    ACTIONS(1066), 1,
      anon_sym_fixed,
    STATE(76), 1,
      sym_comment,
    STATE(510), 1,
      sym_scoped_name,
    STATE(699), 1,
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
    ACTIONS(1064), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(619), 6,
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
    ACTIONS(1128), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1126), 34,
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
  [5041] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1138), 1,
      anon_sym_AT,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(79), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
    ACTIONS(1136), 5,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
    ACTIONS(1134), 26,
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
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_comment,
    ACTIONS(1143), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(1141), 26,
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
    ACTIONS(1149), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(1147), 26,
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
    ACTIONS(1153), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
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
  [5236] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 1,
      sym_comment,
    ACTIONS(1157), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
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
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      sym_identifier,
  [5283] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 1,
      sym_comment,
    ACTIONS(1161), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
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
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      sym_identifier,
  [5330] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
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
  [5377] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 1,
      sym_comment,
    ACTIONS(1169), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
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
  [5424] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 1,
      sym_comment,
    ACTIONS(1173), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
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
  [5518] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(89), 1,
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
  [5565] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(90), 1,
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
  [5612] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(91), 1,
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
  [5659] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(92), 1,
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
  [5706] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      sym_comment,
    ACTIONS(1197), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
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
    ACTIONS(1201), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
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
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5800] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_comment,
    ACTIONS(1143), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(1141), 26,
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
  [5849] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
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
  [5895] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
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
  [5941] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_comment,
    ACTIONS(1151), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1153), 27,
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
  [5986] = 5,
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
  [6031] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
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
  [6076] = 24,
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
    STATE(101), 1,
      sym_comment,
    STATE(453), 1,
      sym_scoped_name,
    STATE(672), 1,
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
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(678), 2,
      sym_integer_type,
      sym_char_type,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
  [6159] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
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
  [6204] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 1,
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
  [6247] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 1,
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
  [6290] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
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
  [6333] = 28,
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
    ACTIONS(1229), 1,
      sym_identifier,
    STATE(106), 1,
      sym_comment,
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(448), 1,
      sym_annotation_appl_param,
    STATE(728), 1,
      sym_const_expr,
    STATE(729), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6422] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(107), 1,
      sym_comment,
    ACTIONS(1233), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1231), 27,
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
  [6465] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_comment,
    ACTIONS(1237), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1235), 25,
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
  [6508] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 1,
      sym_comment,
    ACTIONS(1241), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1239), 25,
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
  [6551] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_comment,
    ACTIONS(1245), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1243), 27,
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
  [6594] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_comment,
    ACTIONS(1249), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1247), 27,
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
  [6637] = 28,
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
    ACTIONS(1229), 1,
      sym_identifier,
    STATE(112), 1,
      sym_comment,
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(448), 1,
      sym_annotation_appl_param,
    STATE(728), 1,
      sym_const_expr,
    STATE(797), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6726] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(113), 1,
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
  [6769] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(114), 1,
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
  [6812] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_comment,
    ACTIONS(1245), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1243), 25,
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
  [6855] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      sym_comment,
    ACTIONS(1253), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1251), 27,
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
  [6898] = 28,
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
    ACTIONS(1229), 1,
      sym_identifier,
    STATE(117), 1,
      sym_comment,
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(448), 1,
      sym_annotation_appl_param,
    STATE(728), 1,
      sym_const_expr,
    STATE(794), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6987] = 28,
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
    ACTIONS(1229), 1,
      sym_identifier,
    STATE(118), 1,
      sym_comment,
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(448), 1,
      sym_annotation_appl_param,
    STATE(728), 1,
      sym_const_expr,
    STATE(788), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7076] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(119), 1,
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
  [7118] = 27,
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
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(351), 1,
      sym_const_expr,
    STATE(516), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7204] = 27,
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
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(351), 1,
      sym_const_expr,
    STATE(772), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7290] = 27,
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
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(351), 1,
      sym_const_expr,
    STATE(573), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7376] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(123), 1,
      sym_comment,
    STATE(325), 1,
      sym_scoped_name,
    STATE(350), 1,
      sym_annotation_built_name,
    ACTIONS(1259), 24,
      anon_sym_default,
      anon_sym_id,
      anon_sym_autoid,
      anon_sym_optional,
      anon_sym_position,
      anon_sym_value,
      anon_sym_extensibility,
      anon_sym_final,
      anon_sym_appendable,
      anon_sym_mutable,
      anon_sym_key,
      anon_sym_must_understand,
      anon_sym_default_literal,
      anon_sym_range,
      anon_sym_min,
      anon_sym_max,
      anon_sym_unit,
      anon_sym_bit_bound,
      anon_sym_external,
      anon_sym_nested,
      anon_sym_verbatim,
      anon_sym_service,
      anon_sym_oneway,
      anon_sym_ami,
  [7424] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1261), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1265), 1,
      sym_identifier,
    STATE(80), 1,
      sym_scoped_name,
    STATE(95), 1,
      sym_annotation_built_name,
    STATE(124), 1,
      sym_comment,
    ACTIONS(1263), 24,
      anon_sym_default,
      anon_sym_id,
      anon_sym_autoid,
      anon_sym_optional,
      anon_sym_position,
      anon_sym_value,
      anon_sym_extensibility,
      anon_sym_final,
      anon_sym_appendable,
      anon_sym_mutable,
      anon_sym_key,
      anon_sym_must_understand,
      anon_sym_default_literal,
      anon_sym_range,
      anon_sym_min,
      anon_sym_max,
      anon_sym_unit,
      anon_sym_bit_bound,
      anon_sym_external,
      anon_sym_nested,
      anon_sym_verbatim,
      anon_sym_service,
      anon_sym_oneway,
      anon_sym_ami,
  [7472] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(125), 1,
      sym_comment,
    STATE(184), 1,
      sym_scoped_name,
    STATE(194), 1,
      sym_annotation_built_name,
    ACTIONS(1267), 24,
      anon_sym_default,
      anon_sym_id,
      anon_sym_autoid,
      anon_sym_optional,
      anon_sym_position,
      anon_sym_value,
      anon_sym_extensibility,
      anon_sym_final,
      anon_sym_appendable,
      anon_sym_mutable,
      anon_sym_key,
      anon_sym_must_understand,
      anon_sym_default_literal,
      anon_sym_range,
      anon_sym_min,
      anon_sym_max,
      anon_sym_unit,
      anon_sym_bit_bound,
      anon_sym_external,
      anon_sym_nested,
      anon_sym_verbatim,
      anon_sym_service,
      anon_sym_oneway,
      anon_sym_ami,
  [7520] = 27,
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
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(351), 1,
      sym_const_expr,
    STATE(571), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7606] = 27,
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
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(351), 1,
      sym_const_expr,
    STATE(690), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7692] = 27,
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
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(351), 1,
      sym_const_expr,
    STATE(667), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7778] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1269), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1273), 1,
      sym_identifier,
    STATE(129), 1,
      sym_comment,
    STATE(307), 1,
      sym_scoped_name,
    STATE(367), 1,
      sym_annotation_built_name,
    ACTIONS(1271), 24,
      anon_sym_default,
      anon_sym_id,
      anon_sym_autoid,
      anon_sym_optional,
      anon_sym_position,
      anon_sym_value,
      anon_sym_extensibility,
      anon_sym_final,
      anon_sym_appendable,
      anon_sym_mutable,
      anon_sym_key,
      anon_sym_must_understand,
      anon_sym_default_literal,
      anon_sym_range,
      anon_sym_min,
      anon_sym_max,
      anon_sym_unit,
      anon_sym_bit_bound,
      anon_sym_external,
      anon_sym_nested,
      anon_sym_verbatim,
      anon_sym_service,
      anon_sym_oneway,
      anon_sym_ami,
  [7826] = 27,
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
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(351), 1,
      sym_const_expr,
    STATE(776), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7912] = 26,
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
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(607), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7995] = 26,
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
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(618), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8078] = 26,
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
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(671), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8161] = 26,
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
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(709), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8244] = 26,
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
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(532), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8327] = 26,
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
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(183), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(720), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8410] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      anon_sym_long,
    ACTIONS(85), 1,
      anon_sym_unsignedlong,
    ACTIONS(1277), 1,
      anon_sym_int32,
    ACTIONS(1279), 1,
      sym_unsigned_tiny_int,
    ACTIONS(1283), 1,
      sym_signed_tiny_int,
    ACTIONS(1285), 1,
      anon_sym_uint32,
    STATE(137), 1,
      sym_comment,
    STATE(675), 1,
      sym_integer_type,
    STATE(676), 1,
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
    ACTIONS(1275), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(1281), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(256), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(233), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(240), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
  [8478] = 24,
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
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    STATE(186), 1,
      sym_xor_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8555] = 23,
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
    STATE(139), 1,
      sym_comment,
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(175), 1,
      sym_shift_expr,
    STATE(180), 1,
      sym_and_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8629] = 22,
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
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(170), 1,
      sym_add_expr,
    STATE(174), 1,
      sym_shift_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8700] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1287), 1,
      anon_sym_RBRACE,
    ACTIONS(1289), 1,
      anon_sym_readonly,
    ACTIONS(1291), 1,
      anon_sym_attribute,
    ACTIONS(1293), 1,
      anon_sym_provides,
    ACTIONS(1295), 1,
      anon_sym_uses,
    ACTIONS(1297), 1,
      anon_sym_emits,
    ACTIONS(1299), 1,
      anon_sym_publishes,
    ACTIONS(1301), 1,
      anon_sym_consumes,
    STATE(141), 1,
      sym_comment,
    STATE(144), 1,
      aux_sym_component_body_repeat1,
    STATE(177), 1,
      sym_component_export,
    STATE(565), 1,
      sym_component_body,
    ACTIONS(1303), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(661), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(682), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
  [8760] = 21,
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
    STATE(142), 1,
      sym_comment,
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(155), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8828] = 20,
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
    STATE(143), 1,
      sym_comment,
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(159), 1,
      sym_mult_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8893] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1289), 1,
      anon_sym_readonly,
    ACTIONS(1291), 1,
      anon_sym_attribute,
    ACTIONS(1293), 1,
      anon_sym_provides,
    ACTIONS(1295), 1,
      anon_sym_uses,
    ACTIONS(1297), 1,
      anon_sym_emits,
    ACTIONS(1299), 1,
      anon_sym_publishes,
    ACTIONS(1301), 1,
      anon_sym_consumes,
    ACTIONS(1305), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym_component_body_repeat1,
    STATE(177), 1,
      sym_component_export,
    ACTIONS(1303), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(661), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(682), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
  [8950] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1307), 1,
      anon_sym_RBRACE,
    ACTIONS(1309), 1,
      anon_sym_readonly,
    ACTIONS(1312), 1,
      anon_sym_attribute,
    ACTIONS(1315), 1,
      anon_sym_provides,
    ACTIONS(1318), 1,
      anon_sym_uses,
    ACTIONS(1321), 1,
      anon_sym_emits,
    ACTIONS(1324), 1,
      anon_sym_publishes,
    ACTIONS(1327), 1,
      anon_sym_consumes,
    STATE(177), 1,
      sym_component_export,
    ACTIONS(1330), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(145), 2,
      sym_comment,
      aux_sym_component_body_repeat1,
    STATE(661), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(682), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
  [9005] = 19,
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
    STATE(146), 1,
      sym_comment,
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(158), 1,
      sym_unary_expr,
    STATE(161), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_unary_operator,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [9067] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    STATE(147), 1,
      sym_comment,
    ACTIONS(1335), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1337), 13,
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
  [9100] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(148), 1,
      sym_comment,
    ACTIONS(1335), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1337), 14,
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
  [9130] = 14,
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
    STATE(197), 1,
      sym_port_ref,
    STATE(198), 1,
      sym_port_export,
    STATE(659), 1,
      sym_attr_dcl,
    ACTIONS(1353), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(149), 2,
      sym_comment,
      aux_sym_port_body_repeat1,
    STATE(661), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(701), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9178] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(150), 1,
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
  [9208] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(151), 1,
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
  [9238] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(152), 1,
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
  [9268] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(153), 1,
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
  [9298] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(154), 1,
      sym_comment,
    ACTIONS(1372), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1374), 14,
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
  [9328] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1376), 1,
      anon_sym_GT,
    ACTIONS(1382), 1,
      anon_sym_SLASH,
    STATE(155), 1,
      sym_comment,
    ACTIONS(1380), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(1378), 12,
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
  [9362] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1289), 1,
      anon_sym_readonly,
    ACTIONS(1291), 1,
      anon_sym_attribute,
    ACTIONS(1293), 1,
      anon_sym_provides,
    ACTIONS(1295), 1,
      anon_sym_uses,
    ACTIONS(1384), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_comment,
    STATE(164), 1,
      aux_sym_port_body_repeat1,
    STATE(197), 1,
      sym_port_ref,
    STATE(198), 1,
      sym_port_export,
    STATE(659), 1,
      sym_attr_dcl,
    ACTIONS(1303), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(661), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(701), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9412] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(157), 1,
      sym_comment,
    ACTIONS(1386), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1388), 14,
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
  [9442] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(158), 1,
      sym_comment,
    ACTIONS(1390), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1392), 14,
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
  [9472] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1382), 1,
      anon_sym_SLASH,
    ACTIONS(1394), 1,
      anon_sym_GT,
    STATE(159), 1,
      sym_comment,
    ACTIONS(1380), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(1396), 12,
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
  [9506] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(160), 1,
      sym_comment,
    ACTIONS(1398), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1400), 14,
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
  [9536] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(161), 1,
      sym_comment,
    ACTIONS(1402), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1404), 14,
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
  [9566] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(162), 1,
      sym_comment,
    ACTIONS(1406), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1408), 14,
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
  [9596] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(163), 1,
      sym_comment,
    ACTIONS(1410), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1412), 14,
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
  [9626] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1289), 1,
      anon_sym_readonly,
    ACTIONS(1291), 1,
      anon_sym_attribute,
    ACTIONS(1293), 1,
      anon_sym_provides,
    ACTIONS(1295), 1,
      anon_sym_uses,
    ACTIONS(1414), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      aux_sym_port_body_repeat1,
    STATE(164), 1,
      sym_comment,
    STATE(197), 1,
      sym_port_ref,
    STATE(198), 1,
      sym_port_export,
    STATE(659), 1,
      sym_attr_dcl,
    ACTIONS(1303), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(661), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(701), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9676] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1289), 1,
      anon_sym_readonly,
    ACTIONS(1291), 1,
      anon_sym_attribute,
    ACTIONS(1293), 1,
      anon_sym_provides,
    ACTIONS(1295), 1,
      anon_sym_uses,
    ACTIONS(1416), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_comment,
    STATE(167), 1,
      aux_sym_connector_dcl_repeat1,
    STATE(188), 1,
      sym_connector_export,
    STATE(189), 1,
      sym_port_ref,
    STATE(700), 1,
      sym_attr_dcl,
    ACTIONS(1303), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(661), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(701), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9726] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(166), 1,
      sym_comment,
    ACTIONS(1418), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1420), 14,
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
  [9756] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1422), 1,
      anon_sym_RBRACE,
    ACTIONS(1424), 1,
      anon_sym_readonly,
    ACTIONS(1427), 1,
      anon_sym_attribute,
    ACTIONS(1430), 1,
      anon_sym_provides,
    ACTIONS(1433), 1,
      anon_sym_uses,
    STATE(188), 1,
      sym_connector_export,
    STATE(189), 1,
      sym_port_ref,
    STATE(700), 1,
      sym_attr_dcl,
    ACTIONS(1436), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(167), 2,
      sym_comment,
      aux_sym_connector_dcl_repeat1,
    STATE(661), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(701), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9804] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
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
    STATE(147), 1,
      sym_scoped_name,
    STATE(148), 1,
      sym_literal,
    STATE(166), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_comment,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(153), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [9853] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1289), 1,
      anon_sym_readonly,
    ACTIONS(1291), 1,
      anon_sym_attribute,
    ACTIONS(1293), 1,
      anon_sym_provides,
    ACTIONS(1295), 1,
      anon_sym_uses,
    STATE(165), 1,
      aux_sym_connector_dcl_repeat1,
    STATE(169), 1,
      sym_comment,
    STATE(188), 1,
      sym_connector_export,
    STATE(189), 1,
      sym_port_ref,
    STATE(700), 1,
      sym_attr_dcl,
    ACTIONS(1303), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(661), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(701), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9900] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1439), 1,
      anon_sym_GT,
    STATE(170), 1,
      sym_comment,
    ACTIONS(1443), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1441), 10,
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
  [9929] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1335), 1,
      anon_sym_SLASH,
    ACTIONS(1445), 1,
      anon_sym_GT,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      sym_comment,
    ACTIONS(1337), 9,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [9962] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1449), 1,
      anon_sym_GT,
    STATE(172), 1,
      sym_comment,
    ACTIONS(1443), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1451), 10,
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
  [9991] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1191), 1,
      anon_sym_SLASH,
    ACTIONS(1453), 1,
      anon_sym_EQ,
    STATE(173), 1,
      sym_comment,
    ACTIONS(1193), 11,
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
  [10020] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1455), 1,
      anon_sym_GT,
    STATE(174), 1,
      sym_comment,
    ACTIONS(1459), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(1457), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10047] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1461), 1,
      anon_sym_GT,
    STATE(175), 1,
      sym_comment,
    ACTIONS(1459), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(1463), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10074] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1293), 1,
      anon_sym_provides,
    ACTIONS(1295), 1,
      anon_sym_uses,
    ACTIONS(1465), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_port_ref,
    STATE(176), 1,
      sym_comment,
    STATE(760), 1,
      sym_port_body,
    ACTIONS(1303), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(701), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [10108] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(177), 1,
      sym_comment,
    ACTIONS(1467), 10,
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
  [10130] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(178), 1,
      sym_comment,
    ACTIONS(1469), 10,
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
  [10152] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(1471), 1,
      anon_sym_bitmask,
    ACTIONS(1473), 1,
      anon_sym_struct,
    STATE(179), 1,
      sym_comment,
    STATE(185), 1,
      aux_sym_interface_def_repeat1,
    STATE(206), 1,
      sym_annotation_appl,
    STATE(570), 1,
      sym_interface_header,
    STATE(575), 1,
      sym_interface_kind,
    ACTIONS(13), 2,
      anon_sym_local,
      anon_sym_abstract,
  [10190] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1477), 1,
      anon_sym_DOLLAR,
    STATE(180), 1,
      sym_comment,
    ACTIONS(1475), 8,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10213] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(181), 1,
      sym_comment,
    ACTIONS(1479), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(1481), 5,
      anon_sym_L,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_number_literal,
      sym_identifier,
  [10236] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1477), 1,
      anon_sym_DOLLAR,
    STATE(182), 1,
      sym_comment,
    ACTIONS(1483), 8,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10259] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1487), 1,
      anon_sym_CARET,
    STATE(183), 1,
      sym_comment,
    ACTIONS(1485), 7,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10281] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1489), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_comment,
    ACTIONS(1143), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10305] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1491), 1,
      anon_sym_AT,
    STATE(206), 1,
      sym_annotation_appl,
    STATE(185), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
    ACTIONS(1136), 5,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_struct,
  [10329] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1487), 1,
      anon_sym_CARET,
    STATE(186), 1,
      sym_comment,
    ACTIONS(1494), 7,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10351] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    ACTIONS(1498), 1,
      anon_sym_SEMI,
    ACTIONS(1500), 1,
      anon_sym_getraises,
    ACTIONS(1502), 1,
      anon_sym_setraises,
    STATE(187), 1,
      sym_comment,
    STATE(346), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(447), 1,
      sym_get_excep_expr,
    STATE(577), 1,
      sym_attr_raises_expr,
    STATE(579), 1,
      sym_set_excep_expr,
  [10385] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(188), 1,
      sym_comment,
    ACTIONS(1504), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10404] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(189), 1,
      sym_comment,
    ACTIONS(1506), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10423] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(190), 1,
      sym_comment,
    ACTIONS(1508), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10442] = 10,
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
    ACTIONS(1510), 1,
      anon_sym_L,
    STATE(191), 1,
      sym_comment,
    STATE(539), 1,
      sym_scoped_name,
    STATE(581), 1,
      sym_imported_scope,
    STATE(584), 1,
      sym_string_literal,
  [10473] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(192), 1,
      sym_comment,
    ACTIONS(1512), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_raises,
      anon_sym_getraises,
      anon_sym_setraises,
      anon_sym_default,
  [10492] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1514), 1,
      anon_sym_LBRACE,
    ACTIONS(1516), 1,
      anon_sym_COLON,
    ACTIONS(1518), 1,
      anon_sym_SEMI,
    ACTIONS(1520), 1,
      anon_sym_supports,
    STATE(193), 1,
      sym_comment,
    STATE(354), 1,
      sym_value_inheritance,
    STATE(585), 1,
      sym_value_inheritance_spec,
    STATE(590), 1,
      sym_value_supports,
  [10523] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1489), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym_comment,
    ACTIONS(1143), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10544] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(195), 1,
      sym_comment,
    ACTIONS(1149), 7,
      anon_sym_LPAREN,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10563] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1516), 1,
      anon_sym_COLON,
    ACTIONS(1520), 1,
      anon_sym_supports,
    ACTIONS(1522), 1,
      anon_sym_LBRACE,
    ACTIONS(1524), 1,
      anon_sym_SEMI,
    STATE(196), 1,
      sym_comment,
    STATE(354), 1,
      sym_value_inheritance,
    STATE(590), 1,
      sym_value_supports,
    STATE(707), 1,
      sym_value_inheritance_spec,
  [10594] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(197), 1,
      sym_comment,
    ACTIONS(1526), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10613] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(198), 1,
      sym_comment,
    ACTIONS(1528), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10632] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1530), 1,
      anon_sym_RPAREN,
    ACTIONS(1532), 1,
      anon_sym_in,
    STATE(67), 1,
      sym_param_attribute,
    STATE(199), 1,
      sym_comment,
    STATE(355), 1,
      sym_param_dcl,
    STATE(586), 1,
      sym_parameter_dcls,
    ACTIONS(1534), 2,
      anon_sym_out,
      anon_sym_inout,
  [10661] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(200), 1,
      sym_comment,
    ACTIONS(1536), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10680] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(201), 1,
      sym_comment,
    ACTIONS(1538), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10699] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1542), 1,
      anon_sym_PIPE,
    STATE(202), 1,
      sym_comment,
    ACTIONS(1540), 6,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10720] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1544), 1,
      anon_sym_Object,
    ACTIONS(1546), 1,
      anon_sym_multiple,
    STATE(203), 1,
      sym_comment,
    STATE(527), 1,
      sym_scoped_name,
    STATE(740), 1,
      sym_interface_type,
  [10748] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1548), 1,
      anon_sym_RBRACE,
    ACTIONS(1550), 1,
      anon_sym_AT,
    ACTIONS(1552), 1,
      sym_identifier,
    STATE(204), 1,
      sym_comment,
    STATE(225), 1,
      aux_sym_interface_def_repeat1,
    STATE(416), 1,
      sym_bit_value,
    STATE(538), 1,
      sym_annotation_appl,
  [10776] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(205), 1,
      sym_comment,
    ACTIONS(1193), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [10794] = 4,
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
  [10812] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1556), 1,
      anon_sym_LBRACK,
    STATE(207), 1,
      sym_comment,
    STATE(214), 1,
      aux_sym_array_declarator_repeat1,
    STATE(303), 1,
      sym_fixed_array_size,
    ACTIONS(1554), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [10836] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1558), 1,
      anon_sym_RBRACE,
    ACTIONS(1560), 1,
      anon_sym_default,
    ACTIONS(1563), 1,
      anon_sym_case,
    STATE(32), 1,
      sym_case_label,
    STATE(444), 1,
      sym_case,
    STATE(208), 2,
      sym_comment,
      aux_sym_union_def_repeat1,
  [10862] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1556), 1,
      anon_sym_LBRACK,
    STATE(207), 1,
      aux_sym_array_declarator_repeat1,
    STATE(209), 1,
      sym_comment,
    STATE(303), 1,
      sym_fixed_array_size,
    ACTIONS(1512), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [10886] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1566), 1,
      anon_sym_RBRACE,
    ACTIONS(1568), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1570), 1,
      sym_identifier,
    STATE(210), 1,
      sym_comment,
    STATE(326), 1,
      aux_sym_enumerator_repeat1,
    STATE(348), 1,
      sym_enumerator,
    STATE(542), 1,
      sym_enum_modifier,
  [10914] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1572), 1,
      anon_sym_RBRACE,
    ACTIONS(1574), 1,
      anon_sym_default,
    ACTIONS(1576), 1,
      anon_sym_case,
    STATE(32), 1,
      sym_case_label,
    STATE(208), 1,
      aux_sym_union_def_repeat1,
    STATE(211), 1,
      sym_comment,
    STATE(444), 1,
      sym_case,
  [10942] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1578), 1,
      anon_sym_LBRACE,
    ACTIONS(1580), 1,
      anon_sym_COLON,
    ACTIONS(1582), 1,
      anon_sym_SEMI,
    ACTIONS(1584), 1,
      anon_sym_supports,
    STATE(212), 1,
      sym_comment,
    STATE(381), 1,
      sym_component_inheritance_spec,
    STATE(603), 1,
      sym_supported_interface_spec,
  [10970] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(213), 1,
      sym_comment,
    ACTIONS(1205), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10988] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1588), 1,
      anon_sym_LBRACK,
    STATE(303), 1,
      sym_fixed_array_size,
    STATE(214), 2,
      sym_comment,
      aux_sym_array_declarator_repeat1,
    ACTIONS(1586), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [11010] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1550), 1,
      anon_sym_AT,
    ACTIONS(1552), 1,
      sym_identifier,
    ACTIONS(1591), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      sym_comment,
    STATE(246), 1,
      aux_sym_interface_def_repeat1,
    STATE(406), 1,
      sym_bit_value,
    STATE(538), 1,
      sym_annotation_appl,
  [11038] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(216), 1,
      sym_comment,
    ACTIONS(1153), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [11056] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1516), 1,
      anon_sym_COLON,
    ACTIONS(1520), 1,
      anon_sym_supports,
    ACTIONS(1593), 1,
      anon_sym_LBRACE,
    STATE(217), 1,
      sym_comment,
    STATE(354), 1,
      sym_value_inheritance,
    STATE(590), 1,
      sym_value_supports,
    STATE(705), 1,
      sym_value_inheritance_spec,
  [11084] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1574), 1,
      anon_sym_default,
    ACTIONS(1576), 1,
      anon_sym_case,
    ACTIONS(1595), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_case_label,
    STATE(211), 1,
      aux_sym_union_def_repeat1,
    STATE(218), 1,
      sym_comment,
    STATE(444), 1,
      sym_case,
  [11112] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1568), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1570), 1,
      sym_identifier,
    ACTIONS(1597), 1,
      anon_sym_RBRACE,
    STATE(219), 1,
      sym_comment,
    STATE(326), 1,
      aux_sym_enumerator_repeat1,
    STATE(408), 1,
      sym_enumerator,
    STATE(542), 1,
      sym_enum_modifier,
  [11140] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(220), 1,
      sym_comment,
    ACTIONS(1165), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [11158] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1516), 1,
      anon_sym_COLON,
    ACTIONS(1520), 1,
      anon_sym_supports,
    ACTIONS(1599), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      sym_comment,
    STATE(354), 1,
      sym_value_inheritance,
    STATE(590), 1,
      sym_value_supports,
    STATE(775), 1,
      sym_value_inheritance_spec,
  [11186] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(222), 1,
      sym_comment,
    ACTIONS(1601), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11203] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    ACTIONS(1603), 1,
      anon_sym_SEMI,
    ACTIONS(1605), 1,
      anon_sym_raises,
    STATE(223), 1,
      sym_comment,
    STATE(407), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(637), 1,
      sym_raises_expr,
  [11228] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1607), 1,
      anon_sym_LT,
    STATE(224), 1,
      sym_comment,
    ACTIONS(1609), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11247] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1550), 1,
      anon_sym_AT,
    ACTIONS(1552), 1,
      sym_identifier,
    STATE(225), 1,
      sym_comment,
    STATE(328), 1,
      aux_sym_interface_def_repeat1,
    STATE(386), 1,
      sym_bit_value,
    STATE(538), 1,
      sym_annotation_appl,
  [11272] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1568), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1570), 1,
      sym_identifier,
    STATE(226), 1,
      sym_comment,
    STATE(326), 1,
      aux_sym_enumerator_repeat1,
    STATE(542), 1,
      sym_enum_modifier,
    STATE(552), 1,
      sym_enumerator,
  [11297] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1611), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_raises_expr_repeat1,
    ACTIONS(1613), 2,
      anon_sym_LBRACE,
      anon_sym_manages,
  [11320] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1615), 1,
      anon_sym_RBRACE,
    ACTIONS(1617), 1,
      anon_sym_bitfield,
    STATE(228), 1,
      sym_comment,
    STATE(251), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(387), 1,
      sym_bitfield_spec,
    STATE(482), 1,
      sym_bitfield,
  [11345] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    STATE(229), 1,
      sym_comment,
    ACTIONS(1619), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_manages,
  [11364] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(230), 1,
      sym_comment,
    ACTIONS(1621), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11381] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(231), 1,
      sym_comment,
    ACTIONS(1623), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11398] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1625), 1,
      sym_identifier,
    STATE(232), 1,
      sym_comment,
    STATE(274), 1,
      sym_declarator,
    STATE(393), 1,
      sym_declarators,
    STATE(394), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11421] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(233), 1,
      sym_comment,
    ACTIONS(1627), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11438] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1550), 1,
      anon_sym_AT,
    ACTIONS(1552), 1,
      sym_identifier,
    STATE(234), 1,
      sym_comment,
    STATE(328), 1,
      aux_sym_interface_def_repeat1,
    STATE(503), 1,
      sym_bit_value,
    STATE(538), 1,
      sym_annotation_appl,
  [11463] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1629), 1,
      anon_sym_COMMA,
    STATE(235), 2,
      sym_comment,
      aux_sym_raises_expr_repeat1,
    ACTIONS(1619), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_manages,
  [11482] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1584), 1,
      anon_sym_supports,
    ACTIONS(1632), 1,
      anon_sym_COLON,
    ACTIONS(1634), 1,
      anon_sym_manages,
    STATE(236), 1,
      sym_comment,
    STATE(397), 1,
      sym_home_inheritance_spec,
    STATE(615), 1,
      sym_supported_interface_spec,
  [11507] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1617), 1,
      anon_sym_bitfield,
    ACTIONS(1636), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_comment,
    STATE(253), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(387), 1,
      sym_bitfield_spec,
    STATE(482), 1,
      sym_bitfield,
  [11532] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(1638), 1,
      anon_sym_truncatable,
    STATE(238), 1,
      sym_comment,
    STATE(312), 1,
      sym_scoped_name,
    STATE(313), 1,
      sym_value_name,
  [11557] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1544), 1,
      anon_sym_Object,
    STATE(239), 1,
      sym_comment,
    STATE(527), 1,
      sym_scoped_name,
    STATE(742), 1,
      sym_interface_type,
  [11582] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(240), 1,
      sym_comment,
    ACTIONS(1640), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11599] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1544), 1,
      anon_sym_Object,
    STATE(241), 1,
      sym_comment,
    STATE(527), 1,
      sym_scoped_name,
    STATE(638), 1,
      sym_interface_type,
  [11624] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1625), 1,
      sym_identifier,
    STATE(242), 1,
      sym_comment,
    STATE(274), 1,
      sym_declarator,
    STATE(641), 1,
      sym_declarators,
    STATE(394), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11647] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(243), 1,
      sym_comment,
    ACTIONS(1642), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11664] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(244), 1,
      sym_comment,
    ACTIONS(1644), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11681] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(245), 1,
      sym_comment,
    ACTIONS(1646), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11698] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1550), 1,
      anon_sym_AT,
    ACTIONS(1552), 1,
      sym_identifier,
    STATE(246), 1,
      sym_comment,
    STATE(328), 1,
      aux_sym_interface_def_repeat1,
    STATE(416), 1,
      sym_bit_value,
    STATE(538), 1,
      sym_annotation_appl,
  [11723] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(1471), 1,
      anon_sym_bitmask,
    ACTIONS(1473), 1,
      anon_sym_struct,
    STATE(185), 1,
      aux_sym_interface_def_repeat1,
    STATE(206), 1,
      sym_annotation_appl,
    STATE(247), 1,
      sym_comment,
  [11748] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(248), 1,
      sym_comment,
    ACTIONS(1648), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11765] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1625), 1,
      sym_identifier,
    STATE(249), 1,
      sym_comment,
    STATE(274), 1,
      sym_declarator,
    STATE(396), 1,
      sym_declarators,
    STATE(394), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11788] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1625), 1,
      sym_identifier,
    STATE(250), 1,
      sym_comment,
    STATE(370), 1,
      sym_any_declarator,
    STATE(596), 1,
      sym_any_declarators,
    STATE(530), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11811] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1650), 1,
      anon_sym_RBRACE,
    ACTIONS(1652), 1,
      anon_sym_bitfield,
    STATE(387), 1,
      sym_bitfield_spec,
    STATE(482), 1,
      sym_bitfield,
    STATE(251), 2,
      sym_comment,
      aux_sym_bitset_dcl_repeat1,
  [11834] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1617), 1,
      anon_sym_bitfield,
    ACTIONS(1655), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(252), 1,
      sym_comment,
    STATE(387), 1,
      sym_bitfield_spec,
    STATE(482), 1,
      sym_bitfield,
  [11859] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1617), 1,
      anon_sym_bitfield,
    ACTIONS(1657), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(253), 1,
      sym_comment,
    STATE(387), 1,
      sym_bitfield_spec,
    STATE(482), 1,
      sym_bitfield,
  [11884] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1550), 1,
      anon_sym_AT,
    ACTIONS(1552), 1,
      sym_identifier,
    STATE(234), 1,
      aux_sym_interface_def_repeat1,
    STATE(254), 1,
      sym_comment,
    STATE(521), 1,
      sym_bit_value,
    STATE(538), 1,
      sym_annotation_appl,
  [11909] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1532), 1,
      anon_sym_in,
    STATE(67), 1,
      sym_param_attribute,
    STATE(255), 1,
      sym_comment,
    STATE(469), 1,
      sym_param_dcl,
    ACTIONS(1534), 2,
      anon_sym_out,
      anon_sym_inout,
  [11932] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(256), 1,
      sym_comment,
    ACTIONS(1659), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11949] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(257), 1,
      sym_comment,
    ACTIONS(1661), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11965] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1663), 1,
      anon_sym_COMMA,
    ACTIONS(1666), 2,
      anon_sym_SEMI,
      anon_sym_default,
    STATE(258), 2,
      sym_comment,
      aux_sym_declarators_repeat1,
  [11983] = 6,
    ACTIONS(1670), 1,
      anon_sym_SQUOTE,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    STATE(259), 1,
      sym_comment,
    STATE(260), 1,
      aux_sym_char_literal_repeat1,
    ACTIONS(1668), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
  [12003] = 5,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1679), 1,
      anon_sym_SQUOTE,
    ACTIONS(1676), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
    STATE(260), 2,
      sym_comment,
      aux_sym_char_literal_repeat1,
  [12021] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(261), 1,
      sym_comment,
    ACTIONS(1681), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12037] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(262), 1,
      sym_comment,
    ACTIONS(1683), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12053] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1685), 1,
      anon_sym_COLON_COLON,
    STATE(263), 1,
      sym_comment,
    ACTIONS(1447), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [12071] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(264), 1,
      sym_comment,
    ACTIONS(1687), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12087] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(265), 1,
      sym_comment,
    ACTIONS(1689), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12103] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(266), 1,
      sym_comment,
    ACTIONS(1447), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12119] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1691), 1,
      anon_sym_L,
    STATE(267), 1,
      sym_comment,
    STATE(599), 1,
      sym_string_literal,
  [12141] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1691), 1,
      anon_sym_L,
    STATE(268), 1,
      sym_comment,
    STATE(602), 1,
      sym_string_literal,
  [12163] = 7,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1693), 1,
      sym_escape_sequence,
    ACTIONS(1695), 1,
      anon_sym_DQUOTE,
    ACTIONS(1697), 1,
      aux_sym_string_literal_token1,
    STATE(269), 1,
      sym_comment,
    STATE(319), 1,
      aux_sym_string_literal_repeat1,
  [12185] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1605), 1,
      anon_sym_raises,
    STATE(270), 1,
      sym_comment,
    STATE(481), 1,
      sym_raises_expr,
    ACTIONS(1699), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [12205] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1701), 1,
      anon_sym_RPAREN,
    ACTIONS(1703), 1,
      anon_sym_in,
    STATE(271), 1,
      sym_comment,
    STATE(412), 1,
      sym_in_param_dcl,
    STATE(647), 1,
      sym_in_parameter_dcls,
  [12227] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1705), 1,
      anon_sym_LBRACE,
    ACTIONS(1707), 1,
      anon_sym_primarykey,
    STATE(272), 1,
      sym_comment,
    STATE(635), 1,
      sym_primary_key_spec,
  [12249] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1709), 1,
      anon_sym_LBRACE,
    ACTIONS(1711), 1,
      anon_sym_COLON,
    ACTIONS(1713), 1,
      anon_sym_SEMI,
    STATE(273), 1,
      sym_comment,
    STATE(621), 1,
      sym_interface_inheritance_spec,
  [12271] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1715), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      sym_comment,
    STATE(318), 1,
      aux_sym_declarators_repeat1,
    ACTIONS(1717), 2,
      anon_sym_SEMI,
      anon_sym_default,
  [12291] = 7,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1719), 1,
      anon_sym_AT,
    ACTIONS(1721), 1,
      aux_sym_comment_token2,
    STATE(275), 1,
      sym_comment,
    STATE(294), 1,
      aux_sym_interface_def_repeat1,
    STATE(531), 1,
      sym_annotation_appl,
  [12313] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1723), 1,
      anon_sym_COMMA,
    ACTIONS(1725), 1,
      anon_sym_LBRACE,
    ACTIONS(1727), 1,
      anon_sym_supports,
    STATE(276), 1,
      sym_comment,
    STATE(287), 1,
      aux_sym_value_inheritance_spec_repeat1,
  [12335] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(277), 1,
      sym_comment,
    STATE(312), 1,
      sym_scoped_name,
    STATE(343), 1,
      sym_value_name,
  [12357] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1731), 1,
      anon_sym_LBRACE,
    ACTIONS(1733), 1,
      anon_sym_COLON,
    STATE(278), 1,
      sym_comment,
    ACTIONS(1735), 2,
      anon_sym_SEMI,
      sym_identifier,
  [12377] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(279), 1,
      sym_comment,
    ACTIONS(1737), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
      anon_sym_LBRACK,
  [12393] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(280), 1,
      sym_comment,
    STATE(340), 1,
      sym_scoped_name,
    STATE(341), 1,
      sym_interface_name,
  [12415] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1723), 1,
      anon_sym_COMMA,
    ACTIONS(1725), 1,
      anon_sym_LBRACE,
    ACTIONS(1727), 1,
      anon_sym_supports,
    STATE(281), 1,
      sym_comment,
    STATE(282), 1,
      aux_sym_value_inheritance_spec_repeat1,
  [12437] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1739), 1,
      anon_sym_COMMA,
    ACTIONS(1742), 2,
      anon_sym_LBRACE,
      anon_sym_supports,
    STATE(282), 2,
      sym_comment,
      aux_sym_value_inheritance_spec_repeat1,
  [12455] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1744), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1747), 1,
      sym_identifier,
    STATE(542), 1,
      sym_enum_modifier,
    STATE(283), 2,
      sym_comment,
      aux_sym_enumerator_repeat1,
  [12475] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(284), 1,
      sym_comment,
    STATE(330), 1,
      sym_interface_name,
    STATE(340), 1,
      sym_scoped_name,
  [12497] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(285), 1,
      sym_comment,
    ACTIONS(1749), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12513] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(286), 1,
      sym_comment,
    ACTIONS(1751), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12529] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1723), 1,
      anon_sym_COMMA,
    ACTIONS(1753), 1,
      anon_sym_LBRACE,
    ACTIONS(1755), 1,
      anon_sym_supports,
    STATE(282), 1,
      aux_sym_value_inheritance_spec_repeat1,
    STATE(287), 1,
      sym_comment,
  [12551] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(288), 1,
      sym_comment,
    STATE(340), 1,
      sym_scoped_name,
    STATE(402), 1,
      sym_interface_name,
  [12573] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(289), 1,
      sym_comment,
    ACTIONS(1757), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12589] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(290), 1,
      sym_comment,
    ACTIONS(1759), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12605] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(291), 1,
      sym_comment,
    ACTIONS(1761), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12621] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1605), 1,
      anon_sym_raises,
    STATE(292), 1,
      sym_comment,
    STATE(466), 1,
      sym_raises_expr,
    ACTIONS(1763), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [12641] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(293), 1,
      sym_comment,
    STATE(340), 1,
      sym_scoped_name,
    STATE(787), 1,
      sym_interface_name,
  [12663] = 7,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1719), 1,
      anon_sym_AT,
    ACTIONS(1765), 1,
      aux_sym_comment_token1,
    STATE(294), 1,
      sym_comment,
    STATE(310), 1,
      aux_sym_interface_def_repeat1,
    STATE(531), 1,
      sym_annotation_appl,
  [12685] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1611), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_raises_expr_repeat1,
    STATE(295), 1,
      sym_comment,
    ACTIONS(1767), 2,
      anon_sym_LBRACE,
      anon_sym_manages,
  [12705] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1707), 1,
      anon_sym_primarykey,
    ACTIONS(1769), 1,
      anon_sym_LBRACE,
    STATE(296), 1,
      sym_comment,
    STATE(566), 1,
      sym_primary_key_spec,
  [12727] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1611), 1,
      anon_sym_COMMA,
    ACTIONS(1771), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      sym_comment,
    STATE(389), 1,
      aux_sym_raises_expr_repeat1,
  [12749] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(298), 1,
      sym_comment,
    ACTIONS(1773), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12765] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1625), 1,
      sym_identifier,
    STATE(299), 1,
      sym_comment,
    STATE(736), 1,
      sym_declarator,
    STATE(394), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [12785] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(300), 1,
      sym_comment,
    STATE(340), 1,
      sym_scoped_name,
    STATE(558), 1,
      sym_interface_name,
  [12807] = 4,
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
  [12823] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1611), 1,
      anon_sym_COMMA,
    ACTIONS(1777), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      sym_comment,
    STATE(377), 1,
      aux_sym_raises_expr_repeat1,
  [12845] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(303), 1,
      sym_comment,
    ACTIONS(1779), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
      anon_sym_LBRACK,
  [12861] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1691), 1,
      anon_sym_L,
    ACTIONS(1781), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      sym_comment,
    STATE(349), 1,
      sym_string_literal,
  [12883] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1783), 1,
      anon_sym_RPAREN,
    ACTIONS(1785), 1,
      anon_sym_in,
    STATE(305), 1,
      sym_comment,
    STATE(364), 1,
      sym_init_param_dcl,
    STATE(592), 1,
      sym_init_param_dcls,
  [12905] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1787), 1,
      anon_sym_RPAREN,
    ACTIONS(1789), 1,
      anon_sym_in,
    STATE(306), 1,
      sym_comment,
    STATE(373), 1,
      sym_factory_param_dcl,
    STATE(598), 1,
      sym_factory_param_dcls,
  [12927] = 6,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1791), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1793), 1,
      anon_sym_LPAREN,
    STATE(307), 1,
      sym_comment,
    ACTIONS(1141), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12947] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1625), 1,
      sym_identifier,
    STATE(308), 1,
      sym_comment,
    STATE(468), 1,
      sym_any_declarator,
    STATE(530), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [12967] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1785), 1,
      anon_sym_in,
    ACTIONS(1795), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      sym_comment,
    STATE(364), 1,
      sym_init_param_dcl,
    STATE(601), 1,
      sym_init_param_dcls,
  [12989] = 6,
    ACTIONS(1134), 1,
      aux_sym_comment_token1,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1797), 1,
      anon_sym_AT,
    STATE(531), 1,
      sym_annotation_appl,
    STATE(310), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
  [13009] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(276), 1,
      sym_value_name,
    STATE(311), 1,
      sym_comment,
    STATE(312), 1,
      sym_scoped_name,
  [13031] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    STATE(312), 1,
      sym_comment,
    ACTIONS(1800), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_supports,
  [13049] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1723), 1,
      anon_sym_COMMA,
    ACTIONS(1802), 1,
      anon_sym_LBRACE,
    ACTIONS(1804), 1,
      anon_sym_supports,
    STATE(281), 1,
      aux_sym_value_inheritance_spec_repeat1,
    STATE(313), 1,
      sym_comment,
  [13071] = 7,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1693), 1,
      sym_escape_sequence,
    ACTIONS(1697), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1806), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      sym_comment,
    STATE(315), 1,
      aux_sym_string_literal_repeat1,
  [13093] = 6,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1808), 1,
      sym_escape_sequence,
    ACTIONS(1811), 1,
      anon_sym_DQUOTE,
    ACTIONS(1813), 1,
      aux_sym_string_literal_token1,
    STATE(315), 2,
      sym_comment,
      aux_sym_string_literal_repeat1,
  [13113] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(316), 1,
      sym_comment,
    STATE(340), 1,
      sym_scoped_name,
    STATE(365), 1,
      sym_interface_name,
  [13135] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1625), 1,
      sym_identifier,
    STATE(317), 1,
      sym_comment,
    STATE(390), 1,
      sym_declarator,
    STATE(394), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [13155] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1715), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_declarators_repeat1,
    STATE(318), 1,
      sym_comment,
    ACTIONS(1816), 2,
      anon_sym_SEMI,
      anon_sym_default,
  [13175] = 7,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1693), 1,
      sym_escape_sequence,
    ACTIONS(1697), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1818), 1,
      anon_sym_DQUOTE,
    STATE(315), 1,
      aux_sym_string_literal_repeat1,
    STATE(319), 1,
      sym_comment,
  [13197] = 4,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    STATE(320), 1,
      sym_comment,
    ACTIONS(1191), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [13213] = 4,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    STATE(321), 1,
      sym_comment,
    ACTIONS(1163), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [13229] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1707), 1,
      anon_sym_primarykey,
    ACTIONS(1820), 1,
      anon_sym_LBRACE,
    STATE(322), 1,
      sym_comment,
    STATE(662), 1,
      sym_primary_key_spec,
  [13251] = 4,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    STATE(323), 1,
      sym_comment,
    ACTIONS(1151), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [13267] = 7,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1693), 1,
      sym_escape_sequence,
    ACTIONS(1697), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1818), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      aux_sym_string_literal_repeat1,
    STATE(324), 1,
      sym_comment,
  [13289] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1685), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1822), 1,
      anon_sym_LPAREN,
    STATE(325), 1,
      sym_comment,
    ACTIONS(1143), 2,
      anon_sym_AT,
      sym_identifier,
  [13309] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1568), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1824), 1,
      sym_identifier,
    STATE(283), 1,
      aux_sym_enumerator_repeat1,
    STATE(326), 1,
      sym_comment,
    STATE(542), 1,
      sym_enum_modifier,
  [13331] = 6,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1826), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      aux_sym_char_literal_repeat1,
    STATE(327), 1,
      sym_comment,
    ACTIONS(1668), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
  [13351] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1136), 1,
      sym_identifier,
    ACTIONS(1828), 1,
      anon_sym_AT,
    STATE(538), 1,
      sym_annotation_appl,
    STATE(328), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
  [13371] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1605), 1,
      anon_sym_raises,
    ACTIONS(1831), 1,
      anon_sym_SEMI,
    STATE(329), 1,
      sym_comment,
    STATE(669), 1,
      sym_raises_expr,
  [13390] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1833), 1,
      anon_sym_COMMA,
    ACTIONS(1835), 1,
      anon_sym_LBRACE,
    STATE(330), 1,
      sym_comment,
    STATE(398), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [13409] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1837), 1,
      anon_sym_COMMA,
    ACTIONS(1840), 1,
      anon_sym_LBRACE,
    STATE(331), 2,
      sym_comment,
      aux_sym_interface_inheritance_spec_repeat1,
  [13426] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1842), 1,
      anon_sym_LBRACE,
    ACTIONS(1844), 1,
      anon_sym_COLON,
    STATE(332), 1,
      sym_comment,
    STATE(617), 1,
      sym_connector_inherit_spec,
  [13445] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    STATE(333), 1,
      sym_comment,
    ACTIONS(1447), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13462] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1846), 1,
      anon_sym_GT,
    ACTIONS(1848), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      sym_comment,
    STATE(439), 1,
      aux_sym_formal_parameters_repeat1,
  [13481] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1850), 1,
      anon_sym_interface,
    ACTIONS(1852), 1,
      anon_sym_valuetype,
    ACTIONS(1854), 1,
      anon_sym_eventtype,
    STATE(335), 1,
      sym_comment,
  [13500] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1856), 1,
      anon_sym_SEMI,
    ACTIONS(1858), 1,
      anon_sym_context,
    STATE(336), 1,
      sym_comment,
    STATE(749), 1,
      sym_context_expr,
  [13519] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1860), 1,
      anon_sym_COMMA,
    ACTIONS(1863), 1,
      anon_sym_RBRACE,
    STATE(337), 2,
      sym_comment,
      aux_sym_enum_dcl_repeat1,
  [13536] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1858), 1,
      anon_sym_context,
    ACTIONS(1865), 1,
      anon_sym_SEMI,
    STATE(338), 1,
      sym_comment,
    STATE(749), 1,
      sym_context_expr,
  [13555] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1867), 1,
      anon_sym_GT,
    ACTIONS(1869), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      sym_comment,
    STATE(445), 1,
      aux_sym_actual_parameters_repeat1,
  [13574] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    STATE(340), 1,
      sym_comment,
    ACTIONS(1871), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [13591] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1753), 1,
      anon_sym_LBRACE,
    ACTIONS(1833), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [13610] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1873), 1,
      sym_identifier,
    STATE(342), 1,
      sym_comment,
    STATE(499), 1,
      sym_scoped_name,
  [13629] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(343), 1,
      sym_comment,
    ACTIONS(1742), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_supports,
  [13644] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(344), 1,
      sym_comment,
    STATE(485), 1,
      sym_scoped_name,
  [13663] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1875), 1,
      anon_sym_GT,
    ACTIONS(1877), 1,
      anon_sym_COMMA,
    STATE(345), 2,
      sym_comment,
      aux_sym_actual_parameters_repeat1,
  [13680] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    ACTIONS(1880), 1,
      anon_sym_SEMI,
    STATE(346), 1,
      sym_comment,
    STATE(411), 1,
      aux_sym_readonly_attr_declarator_repeat1,
  [13699] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1882), 1,
      anon_sym_GT,
    ACTIONS(1884), 1,
      anon_sym_COMMA,
    STATE(347), 2,
      sym_comment,
      aux_sym_formal_parameters_repeat1,
  [13716] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1597), 1,
      anon_sym_RBRACE,
    ACTIONS(1887), 1,
      anon_sym_COMMA,
    STATE(348), 1,
      sym_comment,
    STATE(446), 1,
      aux_sym_enum_dcl_repeat1,
  [13735] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1889), 1,
      anon_sym_COMMA,
    ACTIONS(1891), 1,
      anon_sym_RPAREN,
    STATE(349), 1,
      sym_comment,
    STATE(418), 1,
      aux_sym_context_expr_repeat1,
  [13754] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1822), 1,
      anon_sym_LPAREN,
    STATE(350), 1,
      sym_comment,
    ACTIONS(1143), 2,
      anon_sym_AT,
      sym_identifier,
  [13771] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(351), 1,
      sym_comment,
    ACTIONS(1893), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13786] = 5,
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
  [13803] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(353), 1,
      sym_comment,
    ACTIONS(1149), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [13818] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1520), 1,
      anon_sym_supports,
    ACTIONS(1900), 1,
      anon_sym_LBRACE,
    STATE(354), 1,
      sym_comment,
    STATE(779), 1,
      sym_value_supports,
  [13837] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1902), 1,
      anon_sym_COMMA,
    ACTIONS(1904), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      sym_comment,
    STATE(420), 1,
      aux_sym_parameter_dcls_repeat1,
  [13856] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1906), 1,
      anon_sym_COMMA,
    ACTIONS(1908), 1,
      anon_sym_SEMI,
    STATE(356), 1,
      sym_comment,
    STATE(431), 1,
      aux_sym_any_declarators_repeat1,
  [13875] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    STATE(357), 1,
      sym_comment,
    ACTIONS(1910), 2,
      anon_sym_LBRACE,
      anon_sym_supports,
  [13892] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(267), 1,
      sym_scoped_name,
    STATE(358), 1,
      sym_comment,
  [13911] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    STATE(359), 1,
      sym_comment,
    ACTIONS(1912), 2,
      anon_sym_supports,
      anon_sym_manages,
  [13928] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(296), 1,
      sym_scoped_name,
    STATE(360), 1,
      sym_comment,
  [13947] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(268), 1,
      sym_scoped_name,
    STATE(361), 1,
      sym_comment,
  [13966] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(362), 1,
      sym_comment,
    STATE(548), 1,
      sym_scoped_name,
  [13985] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1605), 1,
      anon_sym_raises,
    ACTIONS(1914), 1,
      anon_sym_SEMI,
    STATE(363), 1,
      sym_comment,
    STATE(658), 1,
      sym_raises_expr,
  [14004] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1916), 1,
      anon_sym_COMMA,
    ACTIONS(1918), 1,
      anon_sym_RPAREN,
    STATE(364), 1,
      sym_comment,
    STATE(427), 1,
      aux_sym_init_param_dcls_repeat1,
  [14023] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1833), 1,
      anon_sym_COMMA,
    ACTIONS(1920), 1,
      anon_sym_LBRACE,
    STATE(365), 1,
      sym_comment,
    STATE(417), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [14042] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1922), 1,
      sym_identifier,
    STATE(187), 1,
      sym_simple_declarator,
    STATE(366), 1,
      sym_comment,
    STATE(651), 1,
      sym_attr_declarator,
  [14061] = 5,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1793), 1,
      anon_sym_LPAREN,
    STATE(367), 1,
      sym_comment,
    ACTIONS(1141), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [14078] = 4,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    STATE(368), 1,
      sym_comment,
    ACTIONS(1147), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [14093] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1887), 1,
      anon_sym_COMMA,
    ACTIONS(1924), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(369), 1,
      sym_comment,
  [14112] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1906), 1,
      anon_sym_COMMA,
    ACTIONS(1926), 1,
      anon_sym_SEMI,
    STATE(356), 1,
      aux_sym_any_declarators_repeat1,
    STATE(370), 1,
      sym_comment,
  [14131] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1928), 1,
      anon_sym_GT,
    ACTIONS(1930), 1,
      anon_sym_COMMA,
    STATE(371), 2,
      sym_comment,
      aux_sym_formal_parameter_names_repeat1,
  [14148] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1605), 1,
      anon_sym_raises,
    ACTIONS(1933), 1,
      anon_sym_SEMI,
    STATE(372), 1,
      sym_comment,
    STATE(664), 1,
      sym_raises_expr,
  [14167] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1935), 1,
      anon_sym_COMMA,
    ACTIONS(1937), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      sym_comment,
    STATE(434), 1,
      aux_sym_factory_param_dcls_repeat1,
  [14186] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1939), 1,
      anon_sym_GT,
    ACTIONS(1941), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_formal_parameter_names_repeat1,
    STATE(374), 1,
      sym_comment,
  [14205] = 5,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1945), 1,
      aux_sym_string_literal_token1,
    STATE(375), 1,
      sym_comment,
    ACTIONS(1943), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE,
  [14222] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(357), 1,
      sym_scoped_name,
    STATE(376), 1,
      sym_comment,
  [14241] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1611), 1,
      anon_sym_COMMA,
    ACTIONS(1947), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      aux_sym_raises_expr_repeat1,
    STATE(377), 1,
      sym_comment,
  [14260] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1949), 1,
      anon_sym_COMMA,
    ACTIONS(1951), 1,
      anon_sym_RBRACE,
    STATE(378), 1,
      sym_comment,
    STATE(379), 1,
      aux_sym_bitmask_dcl_repeat1,
  [14279] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1953), 1,
      anon_sym_COMMA,
    ACTIONS(1956), 1,
      anon_sym_RBRACE,
    STATE(379), 2,
      sym_comment,
      aux_sym_bitmask_dcl_repeat1,
  [14296] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(227), 1,
      sym_scoped_name,
    STATE(380), 1,
      sym_comment,
  [14315] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1584), 1,
      anon_sym_supports,
    ACTIONS(1958), 1,
      anon_sym_LBRACE,
    STATE(381), 1,
      sym_comment,
    STATE(767), 1,
      sym_supported_interface_spec,
  [14334] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1960), 1,
      anon_sym_SEMI,
    ACTIONS(1962), 1,
      sym_identifier,
    STATE(382), 2,
      sym_comment,
      aux_sym_bitfield_repeat1,
  [14351] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(383), 1,
      sym_comment,
    ACTIONS(1965), 3,
      anon_sym_RBRACE,
      anon_sym_default,
      anon_sym_case,
  [14366] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1941), 1,
      anon_sym_COMMA,
    ACTIONS(1967), 1,
      anon_sym_GT,
    STATE(374), 1,
      aux_sym_formal_parameter_names_repeat1,
    STATE(384), 1,
      sym_comment,
  [14385] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1969), 1,
      anon_sym_COMMA,
    ACTIONS(1972), 1,
      anon_sym_RPAREN,
    STATE(385), 2,
      sym_comment,
      aux_sym_in_parameter_dcls_repeat1,
  [14402] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1949), 1,
      anon_sym_COMMA,
    ACTIONS(1951), 1,
      anon_sym_RBRACE,
    STATE(386), 1,
      sym_comment,
    STATE(438), 1,
      aux_sym_bitmask_dcl_repeat1,
  [14421] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1974), 1,
      anon_sym_SEMI,
    ACTIONS(1976), 1,
      sym_identifier,
    STATE(387), 1,
      sym_comment,
    STATE(409), 1,
      aux_sym_bitfield_repeat1,
  [14440] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(359), 1,
      sym_scoped_name,
    STATE(388), 1,
      sym_comment,
  [14459] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1611), 1,
      anon_sym_COMMA,
    ACTIONS(1978), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      aux_sym_raises_expr_repeat1,
    STATE(389), 1,
      sym_comment,
  [14478] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(390), 1,
      sym_comment,
    ACTIONS(1666), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [14493] = 5,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    STATE(259), 1,
      aux_sym_char_literal_repeat1,
    STATE(391), 1,
      sym_comment,
    ACTIONS(1668), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
  [14510] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(392), 1,
      sym_comment,
    STATE(504), 1,
      sym_scoped_name,
  [14529] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1980), 1,
      anon_sym_SEMI,
    ACTIONS(1982), 1,
      anon_sym_default,
    STATE(393), 1,
      sym_comment,
    STATE(610), 1,
      sym_default,
  [14548] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(394), 1,
      sym_comment,
    ACTIONS(1984), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [14563] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(322), 1,
      sym_scoped_name,
    STATE(395), 1,
      sym_comment,
  [14582] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1982), 1,
      anon_sym_default,
    ACTIONS(1986), 1,
      anon_sym_SEMI,
    STATE(396), 1,
      sym_comment,
    STATE(613), 1,
      sym_default,
  [14601] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1584), 1,
      anon_sym_supports,
    ACTIONS(1988), 1,
      anon_sym_manages,
    STATE(397), 1,
      sym_comment,
    STATE(765), 1,
      sym_supported_interface_spec,
  [14620] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1833), 1,
      anon_sym_COMMA,
    ACTIONS(1990), 1,
      anon_sym_LBRACE,
    STATE(331), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(398), 1,
      sym_comment,
  [14639] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(399), 1,
      sym_comment,
    STATE(534), 1,
      sym_scoped_name,
  [14658] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(400), 1,
      sym_comment,
    STATE(451), 1,
      sym_scoped_name,
  [14677] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1992), 1,
      anon_sym_SEMI,
    ACTIONS(1994), 1,
      anon_sym_switch,
    ACTIONS(1996), 1,
      sym_identifier,
    STATE(401), 1,
      sym_comment,
  [14696] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1833), 1,
      anon_sym_COMMA,
    ACTIONS(1998), 1,
      anon_sym_LBRACE,
    STATE(402), 1,
      sym_comment,
    STATE(449), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [14715] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2000), 1,
      anon_sym_LT,
    ACTIONS(2002), 1,
      anon_sym_LBRACE,
    STATE(403), 1,
      sym_comment,
  [14734] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1833), 1,
      anon_sym_COMMA,
    ACTIONS(1998), 1,
      anon_sym_LBRACE,
    STATE(331), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(404), 1,
      sym_comment,
  [14753] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2004), 1,
      anon_sym_COMMA,
    ACTIONS(2007), 1,
      anon_sym_RPAREN,
    STATE(405), 2,
      sym_comment,
      aux_sym_factory_param_dcls_repeat1,
  [14770] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1548), 1,
      anon_sym_RBRACE,
    ACTIONS(1949), 1,
      anon_sym_COMMA,
    STATE(406), 1,
      sym_comment,
    STATE(415), 1,
      aux_sym_bitmask_dcl_repeat1,
  [14789] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    ACTIONS(2009), 1,
      anon_sym_SEMI,
    STATE(407), 1,
      sym_comment,
    STATE(411), 1,
      aux_sym_readonly_attr_declarator_repeat1,
  [14808] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1887), 1,
      anon_sym_COMMA,
    ACTIONS(2011), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(408), 1,
      sym_comment,
  [14827] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1976), 1,
      sym_identifier,
    ACTIONS(2013), 1,
      anon_sym_SEMI,
    STATE(382), 1,
      aux_sym_bitfield_repeat1,
    STATE(409), 1,
      sym_comment,
  [14846] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(297), 1,
      sym_scoped_name,
    STATE(410), 1,
      sym_comment,
  [14865] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2015), 1,
      anon_sym_COMMA,
    ACTIONS(2018), 1,
      anon_sym_SEMI,
    STATE(411), 2,
      sym_comment,
      aux_sym_readonly_attr_declarator_repeat1,
  [14882] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2020), 1,
      anon_sym_COMMA,
    ACTIONS(2022), 1,
      anon_sym_RPAREN,
    STATE(412), 1,
      sym_comment,
    STATE(437), 1,
      aux_sym_in_parameter_dcls_repeat1,
  [14901] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1691), 1,
      anon_sym_L,
    STATE(413), 1,
      sym_comment,
    STATE(463), 1,
      sym_string_literal,
  [14920] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1922), 1,
      sym_identifier,
    STATE(223), 1,
      sym_simple_declarator,
    STATE(414), 1,
      sym_comment,
    STATE(572), 1,
      sym_readonly_attr_declarator,
  [14939] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1949), 1,
      anon_sym_COMMA,
    ACTIONS(2024), 1,
      anon_sym_RBRACE,
    STATE(379), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(415), 1,
      sym_comment,
  [14958] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1949), 1,
      anon_sym_COMMA,
    ACTIONS(2024), 1,
      anon_sym_RBRACE,
    STATE(378), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(416), 1,
      sym_comment,
  [14977] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1833), 1,
      anon_sym_COMMA,
    ACTIONS(2026), 1,
      anon_sym_LBRACE,
    STATE(331), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(417), 1,
      sym_comment,
  [14996] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1889), 1,
      anon_sym_COMMA,
    ACTIONS(2028), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      sym_comment,
    STATE(433), 1,
      aux_sym_context_expr_repeat1,
  [15015] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1858), 1,
      anon_sym_context,
    ACTIONS(2030), 1,
      anon_sym_SEMI,
    STATE(419), 1,
      sym_comment,
    STATE(749), 1,
      sym_context_expr,
  [15034] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1902), 1,
      anon_sym_COMMA,
    ACTIONS(2032), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      sym_comment,
    STATE(428), 1,
      aux_sym_parameter_dcls_repeat1,
  [15053] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2034), 1,
      anon_sym_COMMA,
    ACTIONS(2037), 1,
      anon_sym_RPAREN,
    STATE(421), 2,
      sym_comment,
      aux_sym_init_param_dcls_repeat1,
  [15070] = 5,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    STATE(327), 1,
      aux_sym_char_literal_repeat1,
    STATE(422), 1,
      sym_comment,
    ACTIONS(1668), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
  [15087] = 4,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    STATE(423), 1,
      sym_comment,
    ACTIONS(2039), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      aux_sym_char_literal_token1,
  [15102] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(272), 1,
      sym_scoped_name,
    STATE(424), 1,
      sym_comment,
  [15121] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1605), 1,
      anon_sym_raises,
    ACTIONS(2041), 1,
      anon_sym_SEMI,
    STATE(425), 1,
      sym_comment,
    STATE(706), 1,
      sym_raises_expr,
  [15140] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(426), 1,
      sym_comment,
    STATE(556), 1,
      sym_scoped_name,
  [15159] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1916), 1,
      anon_sym_COMMA,
    ACTIONS(2043), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      aux_sym_init_param_dcls_repeat1,
    STATE(427), 1,
      sym_comment,
  [15178] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2045), 1,
      anon_sym_COMMA,
    ACTIONS(2048), 1,
      anon_sym_RPAREN,
    STATE(428), 2,
      sym_comment,
      aux_sym_parameter_dcls_repeat1,
  [15195] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1709), 1,
      anon_sym_LBRACE,
    ACTIONS(1711), 1,
      anon_sym_COLON,
    STATE(429), 1,
      sym_comment,
    STATE(621), 1,
      sym_interface_inheritance_spec,
  [15214] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(229), 1,
      sym_scoped_name,
    STATE(430), 1,
      sym_comment,
  [15233] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2050), 1,
      anon_sym_COMMA,
    ACTIONS(2053), 1,
      anon_sym_SEMI,
    STATE(431), 2,
      sym_comment,
      aux_sym_any_declarators_repeat1,
  [15250] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1605), 1,
      anon_sym_raises,
    ACTIONS(2055), 1,
      anon_sym_SEMI,
    STATE(432), 1,
      sym_comment,
    STATE(710), 1,
      sym_raises_expr,
  [15269] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2057), 1,
      anon_sym_COMMA,
    ACTIONS(2060), 1,
      anon_sym_RPAREN,
    STATE(433), 2,
      sym_comment,
      aux_sym_context_expr_repeat1,
  [15286] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1935), 1,
      anon_sym_COMMA,
    ACTIONS(2062), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_factory_param_dcls_repeat1,
    STATE(434), 1,
      sym_comment,
  [15305] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2064), 1,
      anon_sym_COMMA,
    ACTIONS(2066), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_annotation_appl_params_repeat1,
    STATE(435), 1,
      sym_comment,
  [15324] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1605), 1,
      anon_sym_raises,
    ACTIONS(2068), 1,
      anon_sym_SEMI,
    STATE(436), 1,
      sym_comment,
    STATE(713), 1,
      sym_raises_expr,
  [15343] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2020), 1,
      anon_sym_COMMA,
    ACTIONS(2070), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      aux_sym_in_parameter_dcls_repeat1,
    STATE(437), 1,
      sym_comment,
  [15362] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1949), 1,
      anon_sym_COMMA,
    ACTIONS(2072), 1,
      anon_sym_RBRACE,
    STATE(379), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(438), 1,
      sym_comment,
  [15381] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1848), 1,
      anon_sym_COMMA,
    ACTIONS(2074), 1,
      anon_sym_GT,
    STATE(347), 1,
      aux_sym_formal_parameters_repeat1,
    STATE(439), 1,
      sym_comment,
  [15400] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2076), 1,
      sym_identifier,
    STATE(440), 1,
      sym_comment,
    STATE(525), 1,
      sym_scoped_name,
  [15419] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2076), 1,
      sym_identifier,
    STATE(441), 1,
      sym_comment,
    STATE(524), 1,
      sym_scoped_name,
  [15438] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2076), 1,
      sym_identifier,
    STATE(442), 1,
      sym_comment,
    STATE(522), 1,
      sym_scoped_name,
  [15457] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(302), 1,
      sym_scoped_name,
    STATE(443), 1,
      sym_comment,
  [15476] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(444), 1,
      sym_comment,
    ACTIONS(2078), 3,
      anon_sym_RBRACE,
      anon_sym_default,
      anon_sym_case,
  [15491] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1869), 1,
      anon_sym_COMMA,
    ACTIONS(2080), 1,
      anon_sym_GT,
    STATE(345), 1,
      aux_sym_actual_parameters_repeat1,
    STATE(445), 1,
      sym_comment,
  [15510] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1887), 1,
      anon_sym_COMMA,
    ACTIONS(2011), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(446), 1,
      sym_comment,
  [15529] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1502), 1,
      anon_sym_setraises,
    ACTIONS(2082), 1,
      anon_sym_SEMI,
    STATE(447), 1,
      sym_comment,
    STATE(643), 1,
      sym_set_excep_expr,
  [15548] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2064), 1,
      anon_sym_COMMA,
    ACTIONS(2084), 1,
      anon_sym_RPAREN,
    STATE(435), 1,
      aux_sym_annotation_appl_params_repeat1,
    STATE(448), 1,
      sym_comment,
  [15567] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1833), 1,
      anon_sym_COMMA,
    ACTIONS(1835), 1,
      anon_sym_LBRACE,
    STATE(331), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(449), 1,
      sym_comment,
  [15586] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2076), 1,
      sym_identifier,
    STATE(450), 1,
      sym_comment,
    STATE(520), 1,
      sym_scoped_name,
  [15605] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2086), 1,
      anon_sym_LT,
    STATE(451), 1,
      sym_comment,
  [15621] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(452), 1,
      sym_comment,
    ACTIONS(2088), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15635] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2090), 1,
      anon_sym_RPAREN,
    STATE(453), 1,
      sym_comment,
  [15651] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(454), 1,
      sym_comment,
    ACTIONS(2092), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15665] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(455), 1,
      sym_comment,
    ACTIONS(2094), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15679] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(456), 1,
      sym_comment,
    ACTIONS(2096), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15693] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(457), 1,
      sym_comment,
    ACTIONS(2098), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15707] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(458), 1,
      sym_comment,
    ACTIONS(2100), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15721] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1922), 1,
      sym_identifier,
    STATE(459), 1,
      sym_comment,
    STATE(513), 1,
      sym_simple_declarator,
  [15737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(460), 1,
      sym_comment,
    ACTIONS(2102), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15751] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(461), 1,
      sym_comment,
    ACTIONS(2104), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15765] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1703), 1,
      anon_sym_in,
    STATE(462), 1,
      sym_comment,
    STATE(515), 1,
      sym_in_param_dcl,
  [15781] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(463), 1,
      sym_comment,
    ACTIONS(2060), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15795] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2106), 1,
      sym_identifier,
    STATE(464), 1,
      sym_comment,
    STATE(540), 1,
      sym_annotation_appl_param,
  [15811] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1789), 1,
      anon_sym_in,
    STATE(465), 1,
      sym_comment,
    STATE(480), 1,
      sym_factory_param_dcl,
  [15827] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(466), 1,
      sym_comment,
    ACTIONS(2108), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15841] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1922), 1,
      sym_identifier,
    STATE(467), 1,
      sym_comment,
    STATE(479), 1,
      sym_simple_declarator,
  [15857] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(468), 1,
      sym_comment,
    ACTIONS(2053), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15871] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(469), 1,
      sym_comment,
    ACTIONS(2048), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15885] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(470), 1,
      sym_comment,
    ACTIONS(2110), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15899] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2112), 1,
      anon_sym_LBRACE,
    ACTIONS(2114), 1,
      anon_sym_COLON,
    STATE(471), 1,
      sym_comment,
  [15915] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(472), 1,
      sym_comment,
    ACTIONS(2116), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15929] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(473), 1,
      sym_comment,
    ACTIONS(2118), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15943] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1785), 1,
      anon_sym_in,
    STATE(474), 1,
      sym_comment,
    STATE(476), 1,
      sym_init_param_dcl,
  [15959] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(475), 1,
      sym_comment,
    ACTIONS(2120), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15973] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(476), 1,
      sym_comment,
    ACTIONS(2037), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15987] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1922), 1,
      sym_identifier,
    STATE(473), 1,
      sym_simple_declarator,
    STATE(477), 1,
      sym_comment,
  [16003] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1922), 1,
      sym_identifier,
    STATE(472), 1,
      sym_simple_declarator,
    STATE(478), 1,
      sym_comment,
  [16019] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(479), 1,
      sym_comment,
    ACTIONS(2122), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16033] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(480), 1,
      sym_comment,
    ACTIONS(2007), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16047] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(481), 1,
      sym_comment,
    ACTIONS(1763), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16061] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(482), 1,
      sym_comment,
    ACTIONS(2124), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [16075] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2126), 1,
      anon_sym_SEMI,
    ACTIONS(2128), 1,
      anon_sym_default,
    STATE(483), 1,
      sym_comment,
  [16091] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(484), 1,
      sym_comment,
    ACTIONS(2130), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16105] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2132), 1,
      anon_sym_LBRACE,
    STATE(485), 1,
      sym_comment,
  [16121] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(486), 1,
      sym_comment,
    ACTIONS(2134), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16135] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(487), 1,
      sym_comment,
    ACTIONS(2136), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16149] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(488), 1,
      sym_comment,
    ACTIONS(2138), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16163] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(489), 1,
      sym_comment,
    ACTIONS(2140), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [16177] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(490), 1,
      sym_comment,
    ACTIONS(2142), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16191] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(491), 1,
      sym_comment,
    ACTIONS(2018), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16205] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(492), 1,
      sym_comment,
    ACTIONS(2144), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16219] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(493), 1,
      sym_comment,
    ACTIONS(2146), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [16233] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2148), 1,
      anon_sym_LBRACE,
    ACTIONS(2150), 1,
      anon_sym_COLON,
    STATE(494), 1,
      sym_comment,
  [16249] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(495), 1,
      sym_comment,
    ACTIONS(2152), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16263] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(496), 1,
      sym_comment,
    ACTIONS(2154), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16277] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(497), 1,
      sym_comment,
    ACTIONS(2156), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16291] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1685), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2158), 1,
      sym_identifier,
    STATE(498), 1,
      sym_comment,
  [16307] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2160), 1,
      anon_sym_LT,
    STATE(499), 1,
      sym_comment,
  [16323] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1922), 1,
      sym_identifier,
    STATE(483), 1,
      sym_simple_declarator,
    STATE(500), 1,
      sym_comment,
  [16339] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(501), 1,
      sym_comment,
    ACTIONS(2162), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16353] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(502), 1,
      sym_comment,
    ACTIONS(2164), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16367] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(503), 1,
      sym_comment,
    ACTIONS(2166), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16381] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2168), 1,
      anon_sym_LBRACE,
    STATE(504), 1,
      sym_comment,
  [16397] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(505), 1,
      sym_comment,
    ACTIONS(2170), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16411] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2172), 1,
      sym_identifier,
    STATE(506), 1,
      sym_comment,
    STATE(734), 1,
      sym_formal_parameter_names,
  [16427] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(507), 1,
      sym_comment,
    ACTIONS(2174), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16441] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(508), 1,
      sym_comment,
    ACTIONS(2176), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16455] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2178), 1,
      anon_sym_DQUOTE,
    ACTIONS(2180), 1,
      anon_sym_SQUOTE,
    STATE(509), 1,
      sym_comment,
  [16471] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1685), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2182), 1,
      sym_identifier,
    STATE(510), 1,
      sym_comment,
  [16487] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(511), 1,
      sym_comment,
    ACTIONS(2184), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16501] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(512), 1,
      sym_comment,
    ACTIONS(2186), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [16515] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(513), 1,
      sym_comment,
    ACTIONS(2188), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16529] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(514), 1,
      sym_comment,
    ACTIONS(2190), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16543] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(515), 1,
      sym_comment,
    ACTIONS(1972), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16557] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2192), 1,
      anon_sym_GT,
    ACTIONS(2194), 1,
      anon_sym_COMMA,
    STATE(516), 1,
      sym_comment,
  [16573] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(517), 1,
      sym_comment,
    ACTIONS(2196), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [16587] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(518), 1,
      sym_comment,
    ACTIONS(2198), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16601] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(519), 1,
      sym_comment,
    ACTIONS(2200), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16615] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1685), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2202), 1,
      sym_identifier,
    STATE(520), 1,
      sym_comment,
  [16631] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(521), 1,
      sym_comment,
    ACTIONS(1956), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16645] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1685), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2204), 1,
      sym_identifier,
    STATE(522), 1,
      sym_comment,
  [16661] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(523), 1,
      sym_comment,
    ACTIONS(2206), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16675] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1685), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2208), 1,
      sym_identifier,
    STATE(524), 1,
      sym_comment,
  [16691] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1685), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2210), 1,
      sym_identifier,
    STATE(525), 1,
      sym_comment,
  [16707] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(526), 1,
      sym_comment,
    ACTIONS(2212), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [16721] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1685), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2214), 1,
      sym_identifier,
    STATE(527), 1,
      sym_comment,
  [16737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(528), 1,
      sym_comment,
    ACTIONS(2216), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16751] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(529), 1,
      sym_comment,
    ACTIONS(1928), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16765] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(530), 1,
      sym_comment,
    ACTIONS(2218), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16779] = 4,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    STATE(531), 1,
      sym_comment,
    ACTIONS(1207), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [16793] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(532), 1,
      sym_comment,
    ACTIONS(2220), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16807] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(533), 1,
      sym_comment,
    ACTIONS(2222), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16821] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2224), 1,
      anon_sym_LBRACE,
    STATE(534), 1,
      sym_comment,
  [16837] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1922), 1,
      sym_identifier,
    STATE(535), 1,
      sym_comment,
    STATE(568), 1,
      sym_simple_declarator,
  [16853] = 4,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    STATE(536), 1,
      sym_comment,
    ACTIONS(1203), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [16867] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2226), 1,
      anon_sym_valuetype,
    ACTIONS(2228), 1,
      anon_sym_eventtype,
    STATE(537), 1,
      sym_comment,
  [16883] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(538), 1,
      sym_comment,
    ACTIONS(1209), 2,
      anon_sym_AT,
      sym_identifier,
  [16897] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2230), 1,
      anon_sym_SEMI,
    STATE(539), 1,
      sym_comment,
  [16913] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(540), 1,
      sym_comment,
    ACTIONS(1898), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16927] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2232), 1,
      anon_sym_GT,
    ACTIONS(2234), 1,
      anon_sym_COMMA,
    STATE(541), 1,
      sym_comment,
  [16943] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(542), 1,
      sym_comment,
    ACTIONS(2236), 2,
      anon_sym_ATdefault_literal,
      sym_identifier,
  [16957] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(543), 1,
      sym_comment,
    ACTIONS(1882), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16971] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(544), 1,
      sym_comment,
    ACTIONS(2238), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16985] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(545), 1,
      sym_comment,
    ACTIONS(2240), 2,
      anon_sym_ATdefault_literal,
      sym_identifier,
  [16999] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(546), 1,
      sym_comment,
    ACTIONS(1875), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [17013] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(547), 1,
      sym_comment,
    ACTIONS(2242), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17027] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2244), 1,
      anon_sym_LBRACE,
    STATE(548), 1,
      sym_comment,
  [17043] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(549), 1,
      sym_comment,
    ACTIONS(2246), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17057] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(550), 1,
      sym_comment,
    ACTIONS(1205), 2,
      anon_sym_AT,
      sym_identifier,
  [17071] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(551), 1,
      sym_comment,
    ACTIONS(2248), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17085] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(552), 1,
      sym_comment,
    ACTIONS(1863), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [17099] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(553), 1,
      sym_comment,
    ACTIONS(2250), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17113] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(554), 1,
      sym_comment,
    ACTIONS(2252), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [17127] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2254), 1,
      anon_sym_GT,
    ACTIONS(2256), 1,
      anon_sym_COMMA,
    STATE(555), 1,
      sym_comment,
  [17143] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2258), 1,
      anon_sym_LBRACE,
    STATE(556), 1,
      sym_comment,
  [17159] = 5,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2260), 1,
      aux_sym_preproc_call_token1,
    ACTIONS(2262), 1,
      sym_preproc_arg,
    STATE(557), 1,
      sym_comment,
  [17175] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(558), 1,
      sym_comment,
    ACTIONS(1840), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [17189] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2264), 1,
      anon_sym_LT,
    ACTIONS(2266), 1,
      sym_identifier,
    STATE(559), 1,
      sym_comment,
  [17205] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2268), 1,
      anon_sym_LBRACE,
    ACTIONS(2270), 1,
      anon_sym_SEMI,
    STATE(560), 1,
      sym_comment,
  [17221] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1922), 1,
      sym_identifier,
    STATE(491), 1,
      sym_simple_declarator,
    STATE(561), 1,
      sym_comment,
  [17237] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2272), 1,
      anon_sym_LPAREN,
    STATE(489), 1,
      sym_exception_list,
    STATE(562), 1,
      sym_comment,
  [17253] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2272), 1,
      anon_sym_LPAREN,
    STATE(563), 1,
      sym_comment,
    STATE(642), 1,
      sym_exception_list,
  [17269] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2274), 1,
      anon_sym_SEMI,
    STATE(564), 1,
      sym_comment,
  [17282] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2276), 1,
      anon_sym_RBRACE,
    STATE(565), 1,
      sym_comment,
  [17295] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1705), 1,
      anon_sym_LBRACE,
    STATE(566), 1,
      sym_comment,
  [17308] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2278), 1,
      sym_identifier,
    STATE(567), 1,
      sym_comment,
  [17321] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2280), 1,
      anon_sym_SEMI,
    STATE(568), 1,
      sym_comment,
  [17334] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2282), 1,
      sym_identifier,
    STATE(569), 1,
      sym_comment,
  [17347] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2284), 1,
      anon_sym_LBRACE,
    STATE(570), 1,
      sym_comment,
  [17360] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2286), 1,
      anon_sym_GT,
    STATE(571), 1,
      sym_comment,
  [17373] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2288), 1,
      anon_sym_SEMI,
    STATE(572), 1,
      sym_comment,
  [17386] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2290), 1,
      anon_sym_GT,
    STATE(573), 1,
      sym_comment,
  [17399] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2292), 1,
      anon_sym_LBRACE,
    STATE(574), 1,
      sym_comment,
  [17412] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2294), 1,
      sym_identifier,
    STATE(575), 1,
      sym_comment,
  [17425] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2296), 1,
      sym_identifier,
    STATE(576), 1,
      sym_comment,
  [17438] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1880), 1,
      anon_sym_SEMI,
    STATE(577), 1,
      sym_comment,
  [17451] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2298), 1,
      anon_sym_GT,
    STATE(578), 1,
      sym_comment,
  [17464] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2082), 1,
      anon_sym_SEMI,
    STATE(579), 1,
      sym_comment,
  [17477] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2300), 1,
      anon_sym_SEMI,
    STATE(580), 1,
      sym_comment,
  [17490] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2302), 1,
      anon_sym_SEMI,
    STATE(581), 1,
      sym_comment,
  [17503] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2304), 1,
      anon_sym_SEMI,
    STATE(582), 1,
      sym_comment,
  [17516] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2306), 1,
      anon_sym_SEMI,
    STATE(583), 1,
      sym_comment,
  [17529] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2230), 1,
      anon_sym_SEMI,
    STATE(584), 1,
      sym_comment,
  [17542] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1599), 1,
      anon_sym_LBRACE,
    STATE(585), 1,
      sym_comment,
  [17555] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2308), 1,
      anon_sym_RPAREN,
    STATE(586), 1,
      sym_comment,
  [17568] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1453), 1,
      anon_sym_EQ,
    STATE(587), 1,
      sym_comment,
  [17581] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2178), 1,
      anon_sym_DQUOTE,
    STATE(588), 1,
      sym_comment,
  [17594] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2310), 1,
      anon_sym_SEMI,
    STATE(589), 1,
      sym_comment,
  [17607] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1900), 1,
      anon_sym_LBRACE,
    STATE(590), 1,
      sym_comment,
  [17620] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2312), 1,
      anon_sym_LT,
    STATE(591), 1,
      sym_comment,
  [17633] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2314), 1,
      anon_sym_RPAREN,
    STATE(592), 1,
      sym_comment,
  [17646] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2316), 1,
      anon_sym_LPAREN,
    STATE(593), 1,
      sym_comment,
  [17659] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2318), 1,
      anon_sym_EQ,
    STATE(594), 1,
      sym_comment,
  [17672] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2320), 1,
      anon_sym_SEMI,
    STATE(595), 1,
      sym_comment,
  [17685] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2322), 1,
      anon_sym_SEMI,
    STATE(596), 1,
      sym_comment,
  [17698] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2324), 1,
      anon_sym_LT,
    STATE(597), 1,
      sym_comment,
  [17711] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2326), 1,
      anon_sym_RPAREN,
    STATE(598), 1,
      sym_comment,
  [17724] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2328), 1,
      anon_sym_SEMI,
    STATE(599), 1,
      sym_comment,
  [17737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2330), 1,
      sym_identifier,
    STATE(600), 1,
      sym_comment,
  [17750] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2332), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      sym_comment,
  [17763] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2334), 1,
      anon_sym_SEMI,
    STATE(602), 1,
      sym_comment,
  [17776] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1958), 1,
      anon_sym_LBRACE,
    STATE(603), 1,
      sym_comment,
  [17789] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2336), 1,
      sym_identifier,
    STATE(604), 1,
      sym_comment,
  [17802] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2338), 1,
      anon_sym_SEMI,
    STATE(605), 1,
      sym_comment,
  [17815] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2340), 1,
      sym_identifier,
    STATE(606), 1,
      sym_comment,
  [17828] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2342), 1,
      anon_sym_SEMI,
    STATE(607), 1,
      sym_comment,
  [17841] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2344), 1,
      anon_sym_SEMI,
    STATE(608), 1,
      sym_comment,
  [17854] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2264), 1,
      anon_sym_LT,
    STATE(609), 1,
      sym_comment,
  [17867] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2346), 1,
      anon_sym_SEMI,
    STATE(610), 1,
      sym_comment,
  [17880] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2348), 1,
      anon_sym_SEMI,
    STATE(611), 1,
      sym_comment,
  [17893] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2350), 1,
      anon_sym_SEMI,
    STATE(612), 1,
      sym_comment,
  [17906] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2352), 1,
      anon_sym_SEMI,
    STATE(613), 1,
      sym_comment,
  [17919] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2354), 1,
      sym_identifier,
    STATE(614), 1,
      sym_comment,
  [17932] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1988), 1,
      anon_sym_manages,
    STATE(615), 1,
      sym_comment,
  [17945] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2356), 1,
      anon_sym_SEMI,
    STATE(616), 1,
      sym_comment,
  [17958] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2358), 1,
      anon_sym_LBRACE,
    STATE(617), 1,
      sym_comment,
  [17971] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2360), 1,
      anon_sym_SEMI,
    STATE(618), 1,
      sym_comment,
  [17984] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2182), 1,
      sym_identifier,
    STATE(619), 1,
      sym_comment,
  [17997] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2362), 1,
      anon_sym_SEMI,
    STATE(620), 1,
      sym_comment,
  [18010] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2364), 1,
      anon_sym_LBRACE,
    STATE(621), 1,
      sym_comment,
  [18023] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2366), 1,
      anon_sym_LBRACE,
    STATE(622), 1,
      sym_comment,
  [18036] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2368), 1,
      anon_sym_SEMI,
    STATE(623), 1,
      sym_comment,
  [18049] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2370), 1,
      anon_sym_SEMI,
    STATE(624), 1,
      sym_comment,
  [18062] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1852), 1,
      anon_sym_valuetype,
    STATE(625), 1,
      sym_comment,
  [18075] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2372), 1,
      anon_sym_SEMI,
    STATE(626), 1,
      sym_comment,
  [18088] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2374), 1,
      anon_sym_SEMI,
    STATE(627), 1,
      sym_comment,
  [18101] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2376), 1,
      anon_sym_SEMI,
    STATE(628), 1,
      sym_comment,
  [18114] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2378), 1,
      anon_sym_SEMI,
    STATE(629), 1,
      sym_comment,
  [18127] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2380), 1,
      sym_identifier,
    STATE(630), 1,
      sym_comment,
  [18140] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2382), 1,
      anon_sym_LBRACE,
    STATE(631), 1,
      sym_comment,
  [18153] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2384), 1,
      anon_sym_LBRACE,
    STATE(632), 1,
      sym_comment,
  [18166] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2386), 1,
      anon_sym_SEMI,
    STATE(633), 1,
      sym_comment,
  [18179] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2388), 1,
      sym_identifier,
    STATE(634), 1,
      sym_comment,
  [18192] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2390), 1,
      anon_sym_LBRACE,
    STATE(635), 1,
      sym_comment,
  [18205] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2392), 1,
      anon_sym_LPAREN,
    STATE(636), 1,
      sym_comment,
  [18218] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2009), 1,
      anon_sym_SEMI,
    STATE(637), 1,
      sym_comment,
  [18231] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2394), 1,
      sym_identifier,
    STATE(638), 1,
      sym_comment,
  [18244] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2396), 1,
      anon_sym_SEMI,
    STATE(639), 1,
      sym_comment,
  [18257] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2398), 1,
      sym_identifier,
    STATE(640), 1,
      sym_comment,
  [18270] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2400), 1,
      anon_sym_SEMI,
    STATE(641), 1,
      sym_comment,
  [18283] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2402), 1,
      anon_sym_SEMI,
    STATE(642), 1,
      sym_comment,
  [18296] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2404), 1,
      anon_sym_SEMI,
    STATE(643), 1,
      sym_comment,
  [18309] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2406), 1,
      anon_sym_attribute,
    STATE(644), 1,
      sym_comment,
  [18322] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2408), 1,
      anon_sym_void,
    STATE(645), 1,
      sym_comment,
  [18335] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2410), 1,
      sym_identifier,
    STATE(646), 1,
      sym_comment,
  [18348] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2412), 1,
      anon_sym_RPAREN,
    STATE(647), 1,
      sym_comment,
  [18361] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2414), 1,
      anon_sym_LPAREN,
    STATE(648), 1,
      sym_comment,
  [18374] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2226), 1,
      anon_sym_valuetype,
    STATE(649), 1,
      sym_comment,
  [18387] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2416), 1,
      anon_sym_SEMI,
    STATE(650), 1,
      sym_comment,
  [18400] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2418), 1,
      anon_sym_SEMI,
    STATE(651), 1,
      sym_comment,
  [18413] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2030), 1,
      anon_sym_SEMI,
    STATE(652), 1,
      sym_comment,
  [18426] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2420), 1,
      sym_identifier,
    STATE(653), 1,
      sym_comment,
  [18439] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2422), 1,
      anon_sym_LBRACE,
    STATE(654), 1,
      sym_comment,
  [18452] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    STATE(655), 1,
      sym_comment,
  [18465] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2424), 1,
      sym_identifier,
    STATE(656), 1,
      sym_comment,
  [18478] = 4,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2426), 1,
      aux_sym_preproc_call_token1,
    STATE(657), 1,
      sym_comment,
  [18491] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2041), 1,
      anon_sym_SEMI,
    STATE(658), 1,
      sym_comment,
  [18504] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2428), 1,
      anon_sym_SEMI,
    STATE(659), 1,
      sym_comment,
  [18517] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2430), 1,
      anon_sym_SEMI,
    STATE(660), 1,
      sym_comment,
  [18530] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2432), 1,
      anon_sym_SEMI,
    STATE(661), 1,
      sym_comment,
  [18543] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1769), 1,
      anon_sym_LBRACE,
    STATE(662), 1,
      sym_comment,
  [18556] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2434), 1,
      anon_sym_SEMI,
    STATE(663), 1,
      sym_comment,
  [18569] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2055), 1,
      anon_sym_SEMI,
    STATE(664), 1,
      sym_comment,
  [18582] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2436), 1,
      anon_sym_LBRACE,
    STATE(665), 1,
      sym_comment,
  [18595] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2438), 1,
      anon_sym_SEMI,
    STATE(666), 1,
      sym_comment,
  [18608] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2440), 1,
      anon_sym_RBRACK,
    STATE(667), 1,
      sym_comment,
  [18621] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2442), 1,
      sym_identifier,
    STATE(668), 1,
      sym_comment,
  [18634] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2068), 1,
      anon_sym_SEMI,
    STATE(669), 1,
      sym_comment,
  [18647] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2444), 1,
      anon_sym_LBRACE,
    STATE(670), 1,
      sym_comment,
  [18660] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2446), 1,
      anon_sym_SEMI,
    STATE(671), 1,
      sym_comment,
  [18673] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2448), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      sym_comment,
  [18686] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1765), 1,
      anon_sym_SLASH,
    STATE(673), 1,
      sym_comment,
  [18699] = 4,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2450), 1,
      aux_sym_comment_token3,
    STATE(674), 1,
      sym_comment,
  [18712] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2452), 1,
      anon_sym_GT,
    STATE(675), 1,
      sym_comment,
  [18725] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2454), 1,
      anon_sym_GT,
    STATE(676), 1,
      sym_comment,
  [18738] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2266), 1,
      sym_identifier,
    STATE(677), 1,
      sym_comment,
  [18751] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2090), 1,
      anon_sym_RPAREN,
    STATE(678), 1,
      sym_comment,
  [18764] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2456), 1,
      anon_sym_SEMI,
    STATE(679), 1,
      sym_comment,
  [18777] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2458), 1,
      anon_sym_SEMI,
    STATE(680), 1,
      sym_comment,
  [18790] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2460), 1,
      anon_sym_LBRACE,
    STATE(681), 1,
      sym_comment,
  [18803] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2462), 1,
      anon_sym_SEMI,
    STATE(682), 1,
      sym_comment,
  [18816] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2464), 1,
      sym_identifier,
    STATE(683), 1,
      sym_comment,
  [18829] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2466), 1,
      sym_identifier,
    STATE(684), 1,
      sym_comment,
  [18842] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2468), 1,
      anon_sym_COLON,
    STATE(685), 1,
      sym_comment,
  [18855] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2470), 1,
      anon_sym_SEMI,
    STATE(686), 1,
      sym_comment,
  [18868] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2472), 1,
      sym_identifier,
    STATE(687), 1,
      sym_comment,
  [18881] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2474), 1,
      anon_sym_LBRACE,
    STATE(688), 1,
      sym_comment,
  [18894] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2476), 1,
      anon_sym_SEMI,
    STATE(689), 1,
      sym_comment,
  [18907] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2478), 1,
      anon_sym_GT,
    STATE(690), 1,
      sym_comment,
  [18920] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2480), 1,
      anon_sym_RBRACE,
    STATE(691), 1,
      sym_comment,
  [18933] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2482), 1,
      anon_sym_LBRACE,
    STATE(692), 1,
      sym_comment,
  [18946] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2484), 1,
      sym_identifier,
    STATE(693), 1,
      sym_comment,
  [18959] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2486), 1,
      anon_sym_SEMI,
    STATE(694), 1,
      sym_comment,
  [18972] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2488), 1,
      anon_sym_SEMI,
    STATE(695), 1,
      sym_comment,
  [18985] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2490), 1,
      anon_sym_SEMI,
    STATE(696), 1,
      sym_comment,
  [18998] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2492), 1,
      anon_sym_LBRACE,
    STATE(697), 1,
      sym_comment,
  [19011] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2494), 1,
      anon_sym_SEMI,
    STATE(698), 1,
      sym_comment,
  [19024] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2496), 1,
      sym_identifier,
    STATE(699), 1,
      sym_comment,
  [19037] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2498), 1,
      anon_sym_SEMI,
    STATE(700), 1,
      sym_comment,
  [19050] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2500), 1,
      anon_sym_SEMI,
    STATE(701), 1,
      sym_comment,
  [19063] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2502), 1,
      anon_sym_LBRACE,
    STATE(702), 1,
      sym_comment,
  [19076] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2504), 1,
      anon_sym_SEMI,
    STATE(703), 1,
      sym_comment,
  [19089] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2506), 1,
      anon_sym_LBRACE,
    STATE(704), 1,
      sym_comment,
  [19102] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2508), 1,
      anon_sym_LBRACE,
    STATE(705), 1,
      sym_comment,
  [19115] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2510), 1,
      anon_sym_SEMI,
    STATE(706), 1,
      sym_comment,
  [19128] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2512), 1,
      anon_sym_LBRACE,
    STATE(707), 1,
      sym_comment,
  [19141] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2514), 1,
      anon_sym_LT,
    STATE(708), 1,
      sym_comment,
  [19154] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2516), 1,
      anon_sym_RPAREN,
    STATE(709), 1,
      sym_comment,
  [19167] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2518), 1,
      anon_sym_SEMI,
    STATE(710), 1,
      sym_comment,
  [19180] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2520), 1,
      sym_identifier,
    STATE(711), 1,
      sym_comment,
  [19193] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2522), 1,
      anon_sym_SEMI,
    STATE(712), 1,
      sym_comment,
  [19206] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2524), 1,
      anon_sym_SEMI,
    STATE(713), 1,
      sym_comment,
  [19219] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2526), 1,
      sym_identifier,
    STATE(714), 1,
      sym_comment,
  [19232] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2528), 1,
      anon_sym_SEMI,
    STATE(715), 1,
      sym_comment,
  [19245] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2530), 1,
      anon_sym_SEMI,
    STATE(716), 1,
      sym_comment,
  [19258] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2532), 1,
      anon_sym_SEMI,
    STATE(717), 1,
      sym_comment,
  [19271] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2158), 1,
      sym_identifier,
    STATE(718), 1,
      sym_comment,
  [19284] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2534), 1,
      anon_sym_SEMI,
    STATE(719), 1,
      sym_comment,
  [19297] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2536), 1,
      anon_sym_COLON,
    STATE(720), 1,
      sym_comment,
  [19310] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2538), 1,
      anon_sym_SEMI,
    STATE(721), 1,
      sym_comment,
  [19323] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2540), 1,
      anon_sym_SEMI,
    STATE(722), 1,
      sym_comment,
  [19336] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2542), 1,
      anon_sym_SEMI,
    STATE(723), 1,
      sym_comment,
  [19349] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2544), 1,
      anon_sym_enum,
    STATE(724), 1,
      sym_comment,
  [19362] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2546), 1,
      anon_sym_SEMI,
    STATE(725), 1,
      sym_comment,
  [19375] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2548), 1,
      anon_sym_LBRACE,
    STATE(726), 1,
      sym_comment,
  [19388] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2550), 1,
      anon_sym_RBRACE,
    STATE(727), 1,
      sym_comment,
  [19401] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2084), 1,
      anon_sym_RPAREN,
    STATE(728), 1,
      sym_comment,
  [19414] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2552), 1,
      anon_sym_RPAREN,
    STATE(729), 1,
      sym_comment,
  [19427] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2554), 1,
      anon_sym_SEMI,
    STATE(730), 1,
      sym_comment,
  [19440] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2556), 1,
      anon_sym_SEMI,
    STATE(731), 1,
      sym_comment,
  [19453] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2558), 1,
      sym_identifier,
    STATE(732), 1,
      sym_comment,
  [19466] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2560), 1,
      anon_sym_SEMI,
    STATE(733), 1,
      sym_comment,
  [19479] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2562), 1,
      anon_sym_GT,
    STATE(734), 1,
      sym_comment,
  [19492] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2564), 1,
      anon_sym_SEMI,
    STATE(735), 1,
      sym_comment,
  [19505] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2566), 1,
      anon_sym_SEMI,
    STATE(736), 1,
      sym_comment,
  [19518] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2568), 1,
      anon_sym_LPAREN,
    STATE(737), 1,
      sym_comment,
  [19531] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2570), 1,
      anon_sym_LPAREN,
    STATE(738), 1,
      sym_comment,
  [19544] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2572), 1,
      anon_sym_SEMI,
    STATE(739), 1,
      sym_comment,
  [19557] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2574), 1,
      sym_identifier,
    STATE(740), 1,
      sym_comment,
  [19570] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2576), 1,
      sym_identifier,
    STATE(741), 1,
      sym_comment,
  [19583] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2578), 1,
      sym_identifier,
    STATE(742), 1,
      sym_comment,
  [19596] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2580), 1,
      sym_identifier,
    STATE(743), 1,
      sym_comment,
  [19609] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2214), 1,
      sym_identifier,
    STATE(744), 1,
      sym_comment,
  [19622] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2582), 1,
      anon_sym_SEMI,
    STATE(745), 1,
      sym_comment,
  [19635] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2584), 1,
      anon_sym_LPAREN,
    STATE(746), 1,
      sym_comment,
  [19648] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2586), 1,
      anon_sym_SEMI,
    STATE(747), 1,
      sym_comment,
  [19661] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2588), 1,
      anon_sym_LPAREN,
    STATE(748), 1,
      sym_comment,
  [19674] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2590), 1,
      anon_sym_SEMI,
    STATE(749), 1,
      sym_comment,
  [19687] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2592), 1,
      anon_sym_LPAREN,
    STATE(750), 1,
      sym_comment,
  [19700] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2594), 1,
      anon_sym_LBRACE,
    STATE(751), 1,
      sym_comment,
  [19713] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2596), 1,
      anon_sym_SEMI,
    STATE(752), 1,
      sym_comment,
  [19726] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2598), 1,
      anon_sym_SEMI,
    STATE(753), 1,
      sym_comment,
  [19739] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2600), 1,
      sym_identifier,
    STATE(754), 1,
      sym_comment,
  [19752] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2546), 1,
      anon_sym_SEMI,
    STATE(755), 1,
      sym_comment,
  [19765] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2602), 1,
      ts_builtin_sym_end,
    STATE(756), 1,
      sym_comment,
  [19778] = 4,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2604), 1,
      aux_sym_predefine_token1,
    STATE(757), 1,
      sym_comment,
  [19791] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2606), 1,
      sym_identifier,
    STATE(758), 1,
      sym_comment,
  [19804] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2608), 1,
      sym_identifier,
    STATE(759), 1,
      sym_comment,
  [19817] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2610), 1,
      anon_sym_RBRACE,
    STATE(760), 1,
      sym_comment,
  [19830] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2612), 1,
      sym_identifier,
    STATE(761), 1,
      sym_comment,
  [19843] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2614), 1,
      sym_identifier,
    STATE(762), 1,
      sym_comment,
  [19856] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2616), 1,
      sym_identifier,
    STATE(763), 1,
      sym_comment,
  [19869] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2618), 1,
      anon_sym_SEMI,
    STATE(764), 1,
      sym_comment,
  [19882] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2620), 1,
      anon_sym_manages,
    STATE(765), 1,
      sym_comment,
  [19895] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2622), 1,
      anon_sym_enum,
    STATE(766), 1,
      sym_comment,
  [19908] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2624), 1,
      anon_sym_LBRACE,
    STATE(767), 1,
      sym_comment,
  [19921] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2626), 1,
      sym_identifier,
    STATE(768), 1,
      sym_comment,
  [19934] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2628), 1,
      sym_identifier,
    STATE(769), 1,
      sym_comment,
  [19947] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2630), 1,
      sym_identifier,
    STATE(770), 1,
      sym_comment,
  [19960] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2632), 1,
      anon_sym_COMMA,
    STATE(771), 1,
      sym_comment,
  [19973] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2634), 1,
      anon_sym_COMMA,
    STATE(772), 1,
      sym_comment,
  [19986] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2636), 1,
      sym_identifier,
    STATE(773), 1,
      sym_comment,
  [19999] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2638), 1,
      sym_identifier,
    STATE(774), 1,
      sym_comment,
  [20012] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2640), 1,
      anon_sym_LBRACE,
    STATE(775), 1,
      sym_comment,
  [20025] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2642), 1,
      anon_sym_GT,
    STATE(776), 1,
      sym_comment,
  [20038] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2644), 1,
      sym_identifier,
    STATE(777), 1,
      sym_comment,
  [20051] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2646), 1,
      sym_identifier,
    STATE(778), 1,
      sym_comment,
  [20064] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1802), 1,
      anon_sym_LBRACE,
    STATE(779), 1,
      sym_comment,
  [20077] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2648), 1,
      sym_identifier,
    STATE(780), 1,
      sym_comment,
  [20090] = 4,
    ACTIONS(1672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2650), 1,
      aux_sym_predefine_token1,
    STATE(781), 1,
      sym_comment,
  [20103] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2652), 1,
      anon_sym_SEMI,
    STATE(782), 1,
      sym_comment,
  [20116] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2652), 1,
      anon_sym_SEMI,
    STATE(783), 1,
      sym_comment,
  [20129] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2654), 1,
      sym_identifier,
    STATE(784), 1,
      sym_comment,
  [20142] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2656), 1,
      sym_identifier,
    STATE(785), 1,
      sym_comment,
  [20155] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1865), 1,
      anon_sym_SEMI,
    STATE(786), 1,
      sym_comment,
  [20168] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2658), 1,
      anon_sym_LBRACE,
    STATE(787), 1,
      sym_comment,
  [20181] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2660), 1,
      anon_sym_RPAREN,
    STATE(788), 1,
      sym_comment,
  [20194] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2662), 1,
      sym_identifier,
    STATE(789), 1,
      sym_comment,
  [20207] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2664), 1,
      sym_identifier,
    STATE(790), 1,
      sym_comment,
  [20220] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2666), 1,
      sym_identifier,
    STATE(791), 1,
      sym_comment,
  [20233] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1856), 1,
      anon_sym_SEMI,
    STATE(792), 1,
      sym_comment,
  [20246] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2668), 1,
      anon_sym_GT,
    STATE(793), 1,
      sym_comment,
  [20259] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2670), 1,
      anon_sym_RPAREN,
    STATE(794), 1,
      sym_comment,
  [20272] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2672), 1,
      anon_sym_SEMI,
    STATE(795), 1,
      sym_comment,
  [20285] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2674), 1,
      sym_identifier,
    STATE(796), 1,
      sym_comment,
  [20298] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2676), 1,
      anon_sym_RPAREN,
    STATE(797), 1,
      sym_comment,
  [20311] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2678), 1,
      sym_identifier,
    STATE(798), 1,
      sym_comment,
  [20324] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1850), 1,
      anon_sym_interface,
    STATE(799), 1,
      sym_comment,
  [20337] = 1,
    ACTIONS(2680), 1,
      ts_builtin_sym_end,
  [20341] = 1,
    ACTIONS(2682), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(34)] = 0,
  [SMALL_STATE(35)] = 148,
  [SMALL_STATE(36)] = 293,
  [SMALL_STATE(37)] = 438,
  [SMALL_STATE(38)] = 581,
  [SMALL_STATE(39)] = 726,
  [SMALL_STATE(40)] = 871,
  [SMALL_STATE(41)] = 1016,
  [SMALL_STATE(42)] = 1161,
  [SMALL_STATE(43)] = 1306,
  [SMALL_STATE(44)] = 1451,
  [SMALL_STATE(45)] = 1596,
  [SMALL_STATE(46)] = 1741,
  [SMALL_STATE(47)] = 1883,
  [SMALL_STATE(48)] = 2027,
  [SMALL_STATE(49)] = 2171,
  [SMALL_STATE(50)] = 2301,
  [SMALL_STATE(51)] = 2437,
  [SMALL_STATE(52)] = 2506,
  [SMALL_STATE(53)] = 2575,
  [SMALL_STATE(54)] = 2702,
  [SMALL_STATE(55)] = 2771,
  [SMALL_STATE(56)] = 2840,
  [SMALL_STATE(57)] = 2909,
  [SMALL_STATE(58)] = 2978,
  [SMALL_STATE(59)] = 3047,
  [SMALL_STATE(60)] = 3115,
  [SMALL_STATE(61)] = 3183,
  [SMALL_STATE(62)] = 3251,
  [SMALL_STATE(63)] = 3319,
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
  [SMALL_STATE(95)] = 5800,
  [SMALL_STATE(96)] = 5849,
  [SMALL_STATE(97)] = 5895,
  [SMALL_STATE(98)] = 5941,
  [SMALL_STATE(99)] = 5986,
  [SMALL_STATE(100)] = 6031,
  [SMALL_STATE(101)] = 6076,
  [SMALL_STATE(102)] = 6159,
  [SMALL_STATE(103)] = 6204,
  [SMALL_STATE(104)] = 6247,
  [SMALL_STATE(105)] = 6290,
  [SMALL_STATE(106)] = 6333,
  [SMALL_STATE(107)] = 6422,
  [SMALL_STATE(108)] = 6465,
  [SMALL_STATE(109)] = 6508,
  [SMALL_STATE(110)] = 6551,
  [SMALL_STATE(111)] = 6594,
  [SMALL_STATE(112)] = 6637,
  [SMALL_STATE(113)] = 6726,
  [SMALL_STATE(114)] = 6769,
  [SMALL_STATE(115)] = 6812,
  [SMALL_STATE(116)] = 6855,
  [SMALL_STATE(117)] = 6898,
  [SMALL_STATE(118)] = 6987,
  [SMALL_STATE(119)] = 7076,
  [SMALL_STATE(120)] = 7118,
  [SMALL_STATE(121)] = 7204,
  [SMALL_STATE(122)] = 7290,
  [SMALL_STATE(123)] = 7376,
  [SMALL_STATE(124)] = 7424,
  [SMALL_STATE(125)] = 7472,
  [SMALL_STATE(126)] = 7520,
  [SMALL_STATE(127)] = 7606,
  [SMALL_STATE(128)] = 7692,
  [SMALL_STATE(129)] = 7778,
  [SMALL_STATE(130)] = 7826,
  [SMALL_STATE(131)] = 7912,
  [SMALL_STATE(132)] = 7995,
  [SMALL_STATE(133)] = 8078,
  [SMALL_STATE(134)] = 8161,
  [SMALL_STATE(135)] = 8244,
  [SMALL_STATE(136)] = 8327,
  [SMALL_STATE(137)] = 8410,
  [SMALL_STATE(138)] = 8478,
  [SMALL_STATE(139)] = 8555,
  [SMALL_STATE(140)] = 8629,
  [SMALL_STATE(141)] = 8700,
  [SMALL_STATE(142)] = 8760,
  [SMALL_STATE(143)] = 8828,
  [SMALL_STATE(144)] = 8893,
  [SMALL_STATE(145)] = 8950,
  [SMALL_STATE(146)] = 9005,
  [SMALL_STATE(147)] = 9067,
  [SMALL_STATE(148)] = 9100,
  [SMALL_STATE(149)] = 9130,
  [SMALL_STATE(150)] = 9178,
  [SMALL_STATE(151)] = 9208,
  [SMALL_STATE(152)] = 9238,
  [SMALL_STATE(153)] = 9268,
  [SMALL_STATE(154)] = 9298,
  [SMALL_STATE(155)] = 9328,
  [SMALL_STATE(156)] = 9362,
  [SMALL_STATE(157)] = 9412,
  [SMALL_STATE(158)] = 9442,
  [SMALL_STATE(159)] = 9472,
  [SMALL_STATE(160)] = 9506,
  [SMALL_STATE(161)] = 9536,
  [SMALL_STATE(162)] = 9566,
  [SMALL_STATE(163)] = 9596,
  [SMALL_STATE(164)] = 9626,
  [SMALL_STATE(165)] = 9676,
  [SMALL_STATE(166)] = 9726,
  [SMALL_STATE(167)] = 9756,
  [SMALL_STATE(168)] = 9804,
  [SMALL_STATE(169)] = 9853,
  [SMALL_STATE(170)] = 9900,
  [SMALL_STATE(171)] = 9929,
  [SMALL_STATE(172)] = 9962,
  [SMALL_STATE(173)] = 9991,
  [SMALL_STATE(174)] = 10020,
  [SMALL_STATE(175)] = 10047,
  [SMALL_STATE(176)] = 10074,
  [SMALL_STATE(177)] = 10108,
  [SMALL_STATE(178)] = 10130,
  [SMALL_STATE(179)] = 10152,
  [SMALL_STATE(180)] = 10190,
  [SMALL_STATE(181)] = 10213,
  [SMALL_STATE(182)] = 10236,
  [SMALL_STATE(183)] = 10259,
  [SMALL_STATE(184)] = 10281,
  [SMALL_STATE(185)] = 10305,
  [SMALL_STATE(186)] = 10329,
  [SMALL_STATE(187)] = 10351,
  [SMALL_STATE(188)] = 10385,
  [SMALL_STATE(189)] = 10404,
  [SMALL_STATE(190)] = 10423,
  [SMALL_STATE(191)] = 10442,
  [SMALL_STATE(192)] = 10473,
  [SMALL_STATE(193)] = 10492,
  [SMALL_STATE(194)] = 10523,
  [SMALL_STATE(195)] = 10544,
  [SMALL_STATE(196)] = 10563,
  [SMALL_STATE(197)] = 10594,
  [SMALL_STATE(198)] = 10613,
  [SMALL_STATE(199)] = 10632,
  [SMALL_STATE(200)] = 10661,
  [SMALL_STATE(201)] = 10680,
  [SMALL_STATE(202)] = 10699,
  [SMALL_STATE(203)] = 10720,
  [SMALL_STATE(204)] = 10748,
  [SMALL_STATE(205)] = 10776,
  [SMALL_STATE(206)] = 10794,
  [SMALL_STATE(207)] = 10812,
  [SMALL_STATE(208)] = 10836,
  [SMALL_STATE(209)] = 10862,
  [SMALL_STATE(210)] = 10886,
  [SMALL_STATE(211)] = 10914,
  [SMALL_STATE(212)] = 10942,
  [SMALL_STATE(213)] = 10970,
  [SMALL_STATE(214)] = 10988,
  [SMALL_STATE(215)] = 11010,
  [SMALL_STATE(216)] = 11038,
  [SMALL_STATE(217)] = 11056,
  [SMALL_STATE(218)] = 11084,
  [SMALL_STATE(219)] = 11112,
  [SMALL_STATE(220)] = 11140,
  [SMALL_STATE(221)] = 11158,
  [SMALL_STATE(222)] = 11186,
  [SMALL_STATE(223)] = 11203,
  [SMALL_STATE(224)] = 11228,
  [SMALL_STATE(225)] = 11247,
  [SMALL_STATE(226)] = 11272,
  [SMALL_STATE(227)] = 11297,
  [SMALL_STATE(228)] = 11320,
  [SMALL_STATE(229)] = 11345,
  [SMALL_STATE(230)] = 11364,
  [SMALL_STATE(231)] = 11381,
  [SMALL_STATE(232)] = 11398,
  [SMALL_STATE(233)] = 11421,
  [SMALL_STATE(234)] = 11438,
  [SMALL_STATE(235)] = 11463,
  [SMALL_STATE(236)] = 11482,
  [SMALL_STATE(237)] = 11507,
  [SMALL_STATE(238)] = 11532,
  [SMALL_STATE(239)] = 11557,
  [SMALL_STATE(240)] = 11582,
  [SMALL_STATE(241)] = 11599,
  [SMALL_STATE(242)] = 11624,
  [SMALL_STATE(243)] = 11647,
  [SMALL_STATE(244)] = 11664,
  [SMALL_STATE(245)] = 11681,
  [SMALL_STATE(246)] = 11698,
  [SMALL_STATE(247)] = 11723,
  [SMALL_STATE(248)] = 11748,
  [SMALL_STATE(249)] = 11765,
  [SMALL_STATE(250)] = 11788,
  [SMALL_STATE(251)] = 11811,
  [SMALL_STATE(252)] = 11834,
  [SMALL_STATE(253)] = 11859,
  [SMALL_STATE(254)] = 11884,
  [SMALL_STATE(255)] = 11909,
  [SMALL_STATE(256)] = 11932,
  [SMALL_STATE(257)] = 11949,
  [SMALL_STATE(258)] = 11965,
  [SMALL_STATE(259)] = 11983,
  [SMALL_STATE(260)] = 12003,
  [SMALL_STATE(261)] = 12021,
  [SMALL_STATE(262)] = 12037,
  [SMALL_STATE(263)] = 12053,
  [SMALL_STATE(264)] = 12071,
  [SMALL_STATE(265)] = 12087,
  [SMALL_STATE(266)] = 12103,
  [SMALL_STATE(267)] = 12119,
  [SMALL_STATE(268)] = 12141,
  [SMALL_STATE(269)] = 12163,
  [SMALL_STATE(270)] = 12185,
  [SMALL_STATE(271)] = 12205,
  [SMALL_STATE(272)] = 12227,
  [SMALL_STATE(273)] = 12249,
  [SMALL_STATE(274)] = 12271,
  [SMALL_STATE(275)] = 12291,
  [SMALL_STATE(276)] = 12313,
  [SMALL_STATE(277)] = 12335,
  [SMALL_STATE(278)] = 12357,
  [SMALL_STATE(279)] = 12377,
  [SMALL_STATE(280)] = 12393,
  [SMALL_STATE(281)] = 12415,
  [SMALL_STATE(282)] = 12437,
  [SMALL_STATE(283)] = 12455,
  [SMALL_STATE(284)] = 12475,
  [SMALL_STATE(285)] = 12497,
  [SMALL_STATE(286)] = 12513,
  [SMALL_STATE(287)] = 12529,
  [SMALL_STATE(288)] = 12551,
  [SMALL_STATE(289)] = 12573,
  [SMALL_STATE(290)] = 12589,
  [SMALL_STATE(291)] = 12605,
  [SMALL_STATE(292)] = 12621,
  [SMALL_STATE(293)] = 12641,
  [SMALL_STATE(294)] = 12663,
  [SMALL_STATE(295)] = 12685,
  [SMALL_STATE(296)] = 12705,
  [SMALL_STATE(297)] = 12727,
  [SMALL_STATE(298)] = 12749,
  [SMALL_STATE(299)] = 12765,
  [SMALL_STATE(300)] = 12785,
  [SMALL_STATE(301)] = 12807,
  [SMALL_STATE(302)] = 12823,
  [SMALL_STATE(303)] = 12845,
  [SMALL_STATE(304)] = 12861,
  [SMALL_STATE(305)] = 12883,
  [SMALL_STATE(306)] = 12905,
  [SMALL_STATE(307)] = 12927,
  [SMALL_STATE(308)] = 12947,
  [SMALL_STATE(309)] = 12967,
  [SMALL_STATE(310)] = 12989,
  [SMALL_STATE(311)] = 13009,
  [SMALL_STATE(312)] = 13031,
  [SMALL_STATE(313)] = 13049,
  [SMALL_STATE(314)] = 13071,
  [SMALL_STATE(315)] = 13093,
  [SMALL_STATE(316)] = 13113,
  [SMALL_STATE(317)] = 13135,
  [SMALL_STATE(318)] = 13155,
  [SMALL_STATE(319)] = 13175,
  [SMALL_STATE(320)] = 13197,
  [SMALL_STATE(321)] = 13213,
  [SMALL_STATE(322)] = 13229,
  [SMALL_STATE(323)] = 13251,
  [SMALL_STATE(324)] = 13267,
  [SMALL_STATE(325)] = 13289,
  [SMALL_STATE(326)] = 13309,
  [SMALL_STATE(327)] = 13331,
  [SMALL_STATE(328)] = 13351,
  [SMALL_STATE(329)] = 13371,
  [SMALL_STATE(330)] = 13390,
  [SMALL_STATE(331)] = 13409,
  [SMALL_STATE(332)] = 13426,
  [SMALL_STATE(333)] = 13445,
  [SMALL_STATE(334)] = 13462,
  [SMALL_STATE(335)] = 13481,
  [SMALL_STATE(336)] = 13500,
  [SMALL_STATE(337)] = 13519,
  [SMALL_STATE(338)] = 13536,
  [SMALL_STATE(339)] = 13555,
  [SMALL_STATE(340)] = 13574,
  [SMALL_STATE(341)] = 13591,
  [SMALL_STATE(342)] = 13610,
  [SMALL_STATE(343)] = 13629,
  [SMALL_STATE(344)] = 13644,
  [SMALL_STATE(345)] = 13663,
  [SMALL_STATE(346)] = 13680,
  [SMALL_STATE(347)] = 13699,
  [SMALL_STATE(348)] = 13716,
  [SMALL_STATE(349)] = 13735,
  [SMALL_STATE(350)] = 13754,
  [SMALL_STATE(351)] = 13771,
  [SMALL_STATE(352)] = 13786,
  [SMALL_STATE(353)] = 13803,
  [SMALL_STATE(354)] = 13818,
  [SMALL_STATE(355)] = 13837,
  [SMALL_STATE(356)] = 13856,
  [SMALL_STATE(357)] = 13875,
  [SMALL_STATE(358)] = 13892,
  [SMALL_STATE(359)] = 13911,
  [SMALL_STATE(360)] = 13928,
  [SMALL_STATE(361)] = 13947,
  [SMALL_STATE(362)] = 13966,
  [SMALL_STATE(363)] = 13985,
  [SMALL_STATE(364)] = 14004,
  [SMALL_STATE(365)] = 14023,
  [SMALL_STATE(366)] = 14042,
  [SMALL_STATE(367)] = 14061,
  [SMALL_STATE(368)] = 14078,
  [SMALL_STATE(369)] = 14093,
  [SMALL_STATE(370)] = 14112,
  [SMALL_STATE(371)] = 14131,
  [SMALL_STATE(372)] = 14148,
  [SMALL_STATE(373)] = 14167,
  [SMALL_STATE(374)] = 14186,
  [SMALL_STATE(375)] = 14205,
  [SMALL_STATE(376)] = 14222,
  [SMALL_STATE(377)] = 14241,
  [SMALL_STATE(378)] = 14260,
  [SMALL_STATE(379)] = 14279,
  [SMALL_STATE(380)] = 14296,
  [SMALL_STATE(381)] = 14315,
  [SMALL_STATE(382)] = 14334,
  [SMALL_STATE(383)] = 14351,
  [SMALL_STATE(384)] = 14366,
  [SMALL_STATE(385)] = 14385,
  [SMALL_STATE(386)] = 14402,
  [SMALL_STATE(387)] = 14421,
  [SMALL_STATE(388)] = 14440,
  [SMALL_STATE(389)] = 14459,
  [SMALL_STATE(390)] = 14478,
  [SMALL_STATE(391)] = 14493,
  [SMALL_STATE(392)] = 14510,
  [SMALL_STATE(393)] = 14529,
  [SMALL_STATE(394)] = 14548,
  [SMALL_STATE(395)] = 14563,
  [SMALL_STATE(396)] = 14582,
  [SMALL_STATE(397)] = 14601,
  [SMALL_STATE(398)] = 14620,
  [SMALL_STATE(399)] = 14639,
  [SMALL_STATE(400)] = 14658,
  [SMALL_STATE(401)] = 14677,
  [SMALL_STATE(402)] = 14696,
  [SMALL_STATE(403)] = 14715,
  [SMALL_STATE(404)] = 14734,
  [SMALL_STATE(405)] = 14753,
  [SMALL_STATE(406)] = 14770,
  [SMALL_STATE(407)] = 14789,
  [SMALL_STATE(408)] = 14808,
  [SMALL_STATE(409)] = 14827,
  [SMALL_STATE(410)] = 14846,
  [SMALL_STATE(411)] = 14865,
  [SMALL_STATE(412)] = 14882,
  [SMALL_STATE(413)] = 14901,
  [SMALL_STATE(414)] = 14920,
  [SMALL_STATE(415)] = 14939,
  [SMALL_STATE(416)] = 14958,
  [SMALL_STATE(417)] = 14977,
  [SMALL_STATE(418)] = 14996,
  [SMALL_STATE(419)] = 15015,
  [SMALL_STATE(420)] = 15034,
  [SMALL_STATE(421)] = 15053,
  [SMALL_STATE(422)] = 15070,
  [SMALL_STATE(423)] = 15087,
  [SMALL_STATE(424)] = 15102,
  [SMALL_STATE(425)] = 15121,
  [SMALL_STATE(426)] = 15140,
  [SMALL_STATE(427)] = 15159,
  [SMALL_STATE(428)] = 15178,
  [SMALL_STATE(429)] = 15195,
  [SMALL_STATE(430)] = 15214,
  [SMALL_STATE(431)] = 15233,
  [SMALL_STATE(432)] = 15250,
  [SMALL_STATE(433)] = 15269,
  [SMALL_STATE(434)] = 15286,
  [SMALL_STATE(435)] = 15305,
  [SMALL_STATE(436)] = 15324,
  [SMALL_STATE(437)] = 15343,
  [SMALL_STATE(438)] = 15362,
  [SMALL_STATE(439)] = 15381,
  [SMALL_STATE(440)] = 15400,
  [SMALL_STATE(441)] = 15419,
  [SMALL_STATE(442)] = 15438,
  [SMALL_STATE(443)] = 15457,
  [SMALL_STATE(444)] = 15476,
  [SMALL_STATE(445)] = 15491,
  [SMALL_STATE(446)] = 15510,
  [SMALL_STATE(447)] = 15529,
  [SMALL_STATE(448)] = 15548,
  [SMALL_STATE(449)] = 15567,
  [SMALL_STATE(450)] = 15586,
  [SMALL_STATE(451)] = 15605,
  [SMALL_STATE(452)] = 15621,
  [SMALL_STATE(453)] = 15635,
  [SMALL_STATE(454)] = 15651,
  [SMALL_STATE(455)] = 15665,
  [SMALL_STATE(456)] = 15679,
  [SMALL_STATE(457)] = 15693,
  [SMALL_STATE(458)] = 15707,
  [SMALL_STATE(459)] = 15721,
  [SMALL_STATE(460)] = 15737,
  [SMALL_STATE(461)] = 15751,
  [SMALL_STATE(462)] = 15765,
  [SMALL_STATE(463)] = 15781,
  [SMALL_STATE(464)] = 15795,
  [SMALL_STATE(465)] = 15811,
  [SMALL_STATE(466)] = 15827,
  [SMALL_STATE(467)] = 15841,
  [SMALL_STATE(468)] = 15857,
  [SMALL_STATE(469)] = 15871,
  [SMALL_STATE(470)] = 15885,
  [SMALL_STATE(471)] = 15899,
  [SMALL_STATE(472)] = 15915,
  [SMALL_STATE(473)] = 15929,
  [SMALL_STATE(474)] = 15943,
  [SMALL_STATE(475)] = 15959,
  [SMALL_STATE(476)] = 15973,
  [SMALL_STATE(477)] = 15987,
  [SMALL_STATE(478)] = 16003,
  [SMALL_STATE(479)] = 16019,
  [SMALL_STATE(480)] = 16033,
  [SMALL_STATE(481)] = 16047,
  [SMALL_STATE(482)] = 16061,
  [SMALL_STATE(483)] = 16075,
  [SMALL_STATE(484)] = 16091,
  [SMALL_STATE(485)] = 16105,
  [SMALL_STATE(486)] = 16121,
  [SMALL_STATE(487)] = 16135,
  [SMALL_STATE(488)] = 16149,
  [SMALL_STATE(489)] = 16163,
  [SMALL_STATE(490)] = 16177,
  [SMALL_STATE(491)] = 16191,
  [SMALL_STATE(492)] = 16205,
  [SMALL_STATE(493)] = 16219,
  [SMALL_STATE(494)] = 16233,
  [SMALL_STATE(495)] = 16249,
  [SMALL_STATE(496)] = 16263,
  [SMALL_STATE(497)] = 16277,
  [SMALL_STATE(498)] = 16291,
  [SMALL_STATE(499)] = 16307,
  [SMALL_STATE(500)] = 16323,
  [SMALL_STATE(501)] = 16339,
  [SMALL_STATE(502)] = 16353,
  [SMALL_STATE(503)] = 16367,
  [SMALL_STATE(504)] = 16381,
  [SMALL_STATE(505)] = 16397,
  [SMALL_STATE(506)] = 16411,
  [SMALL_STATE(507)] = 16427,
  [SMALL_STATE(508)] = 16441,
  [SMALL_STATE(509)] = 16455,
  [SMALL_STATE(510)] = 16471,
  [SMALL_STATE(511)] = 16487,
  [SMALL_STATE(512)] = 16501,
  [SMALL_STATE(513)] = 16515,
  [SMALL_STATE(514)] = 16529,
  [SMALL_STATE(515)] = 16543,
  [SMALL_STATE(516)] = 16557,
  [SMALL_STATE(517)] = 16573,
  [SMALL_STATE(518)] = 16587,
  [SMALL_STATE(519)] = 16601,
  [SMALL_STATE(520)] = 16615,
  [SMALL_STATE(521)] = 16631,
  [SMALL_STATE(522)] = 16645,
  [SMALL_STATE(523)] = 16661,
  [SMALL_STATE(524)] = 16675,
  [SMALL_STATE(525)] = 16691,
  [SMALL_STATE(526)] = 16707,
  [SMALL_STATE(527)] = 16721,
  [SMALL_STATE(528)] = 16737,
  [SMALL_STATE(529)] = 16751,
  [SMALL_STATE(530)] = 16765,
  [SMALL_STATE(531)] = 16779,
  [SMALL_STATE(532)] = 16793,
  [SMALL_STATE(533)] = 16807,
  [SMALL_STATE(534)] = 16821,
  [SMALL_STATE(535)] = 16837,
  [SMALL_STATE(536)] = 16853,
  [SMALL_STATE(537)] = 16867,
  [SMALL_STATE(538)] = 16883,
  [SMALL_STATE(539)] = 16897,
  [SMALL_STATE(540)] = 16913,
  [SMALL_STATE(541)] = 16927,
  [SMALL_STATE(542)] = 16943,
  [SMALL_STATE(543)] = 16957,
  [SMALL_STATE(544)] = 16971,
  [SMALL_STATE(545)] = 16985,
  [SMALL_STATE(546)] = 16999,
  [SMALL_STATE(547)] = 17013,
  [SMALL_STATE(548)] = 17027,
  [SMALL_STATE(549)] = 17043,
  [SMALL_STATE(550)] = 17057,
  [SMALL_STATE(551)] = 17071,
  [SMALL_STATE(552)] = 17085,
  [SMALL_STATE(553)] = 17099,
  [SMALL_STATE(554)] = 17113,
  [SMALL_STATE(555)] = 17127,
  [SMALL_STATE(556)] = 17143,
  [SMALL_STATE(557)] = 17159,
  [SMALL_STATE(558)] = 17175,
  [SMALL_STATE(559)] = 17189,
  [SMALL_STATE(560)] = 17205,
  [SMALL_STATE(561)] = 17221,
  [SMALL_STATE(562)] = 17237,
  [SMALL_STATE(563)] = 17253,
  [SMALL_STATE(564)] = 17269,
  [SMALL_STATE(565)] = 17282,
  [SMALL_STATE(566)] = 17295,
  [SMALL_STATE(567)] = 17308,
  [SMALL_STATE(568)] = 17321,
  [SMALL_STATE(569)] = 17334,
  [SMALL_STATE(570)] = 17347,
  [SMALL_STATE(571)] = 17360,
  [SMALL_STATE(572)] = 17373,
  [SMALL_STATE(573)] = 17386,
  [SMALL_STATE(574)] = 17399,
  [SMALL_STATE(575)] = 17412,
  [SMALL_STATE(576)] = 17425,
  [SMALL_STATE(577)] = 17438,
  [SMALL_STATE(578)] = 17451,
  [SMALL_STATE(579)] = 17464,
  [SMALL_STATE(580)] = 17477,
  [SMALL_STATE(581)] = 17490,
  [SMALL_STATE(582)] = 17503,
  [SMALL_STATE(583)] = 17516,
  [SMALL_STATE(584)] = 17529,
  [SMALL_STATE(585)] = 17542,
  [SMALL_STATE(586)] = 17555,
  [SMALL_STATE(587)] = 17568,
  [SMALL_STATE(588)] = 17581,
  [SMALL_STATE(589)] = 17594,
  [SMALL_STATE(590)] = 17607,
  [SMALL_STATE(591)] = 17620,
  [SMALL_STATE(592)] = 17633,
  [SMALL_STATE(593)] = 17646,
  [SMALL_STATE(594)] = 17659,
  [SMALL_STATE(595)] = 17672,
  [SMALL_STATE(596)] = 17685,
  [SMALL_STATE(597)] = 17698,
  [SMALL_STATE(598)] = 17711,
  [SMALL_STATE(599)] = 17724,
  [SMALL_STATE(600)] = 17737,
  [SMALL_STATE(601)] = 17750,
  [SMALL_STATE(602)] = 17763,
  [SMALL_STATE(603)] = 17776,
  [SMALL_STATE(604)] = 17789,
  [SMALL_STATE(605)] = 17802,
  [SMALL_STATE(606)] = 17815,
  [SMALL_STATE(607)] = 17828,
  [SMALL_STATE(608)] = 17841,
  [SMALL_STATE(609)] = 17854,
  [SMALL_STATE(610)] = 17867,
  [SMALL_STATE(611)] = 17880,
  [SMALL_STATE(612)] = 17893,
  [SMALL_STATE(613)] = 17906,
  [SMALL_STATE(614)] = 17919,
  [SMALL_STATE(615)] = 17932,
  [SMALL_STATE(616)] = 17945,
  [SMALL_STATE(617)] = 17958,
  [SMALL_STATE(618)] = 17971,
  [SMALL_STATE(619)] = 17984,
  [SMALL_STATE(620)] = 17997,
  [SMALL_STATE(621)] = 18010,
  [SMALL_STATE(622)] = 18023,
  [SMALL_STATE(623)] = 18036,
  [SMALL_STATE(624)] = 18049,
  [SMALL_STATE(625)] = 18062,
  [SMALL_STATE(626)] = 18075,
  [SMALL_STATE(627)] = 18088,
  [SMALL_STATE(628)] = 18101,
  [SMALL_STATE(629)] = 18114,
  [SMALL_STATE(630)] = 18127,
  [SMALL_STATE(631)] = 18140,
  [SMALL_STATE(632)] = 18153,
  [SMALL_STATE(633)] = 18166,
  [SMALL_STATE(634)] = 18179,
  [SMALL_STATE(635)] = 18192,
  [SMALL_STATE(636)] = 18205,
  [SMALL_STATE(637)] = 18218,
  [SMALL_STATE(638)] = 18231,
  [SMALL_STATE(639)] = 18244,
  [SMALL_STATE(640)] = 18257,
  [SMALL_STATE(641)] = 18270,
  [SMALL_STATE(642)] = 18283,
  [SMALL_STATE(643)] = 18296,
  [SMALL_STATE(644)] = 18309,
  [SMALL_STATE(645)] = 18322,
  [SMALL_STATE(646)] = 18335,
  [SMALL_STATE(647)] = 18348,
  [SMALL_STATE(648)] = 18361,
  [SMALL_STATE(649)] = 18374,
  [SMALL_STATE(650)] = 18387,
  [SMALL_STATE(651)] = 18400,
  [SMALL_STATE(652)] = 18413,
  [SMALL_STATE(653)] = 18426,
  [SMALL_STATE(654)] = 18439,
  [SMALL_STATE(655)] = 18452,
  [SMALL_STATE(656)] = 18465,
  [SMALL_STATE(657)] = 18478,
  [SMALL_STATE(658)] = 18491,
  [SMALL_STATE(659)] = 18504,
  [SMALL_STATE(660)] = 18517,
  [SMALL_STATE(661)] = 18530,
  [SMALL_STATE(662)] = 18543,
  [SMALL_STATE(663)] = 18556,
  [SMALL_STATE(664)] = 18569,
  [SMALL_STATE(665)] = 18582,
  [SMALL_STATE(666)] = 18595,
  [SMALL_STATE(667)] = 18608,
  [SMALL_STATE(668)] = 18621,
  [SMALL_STATE(669)] = 18634,
  [SMALL_STATE(670)] = 18647,
  [SMALL_STATE(671)] = 18660,
  [SMALL_STATE(672)] = 18673,
  [SMALL_STATE(673)] = 18686,
  [SMALL_STATE(674)] = 18699,
  [SMALL_STATE(675)] = 18712,
  [SMALL_STATE(676)] = 18725,
  [SMALL_STATE(677)] = 18738,
  [SMALL_STATE(678)] = 18751,
  [SMALL_STATE(679)] = 18764,
  [SMALL_STATE(680)] = 18777,
  [SMALL_STATE(681)] = 18790,
  [SMALL_STATE(682)] = 18803,
  [SMALL_STATE(683)] = 18816,
  [SMALL_STATE(684)] = 18829,
  [SMALL_STATE(685)] = 18842,
  [SMALL_STATE(686)] = 18855,
  [SMALL_STATE(687)] = 18868,
  [SMALL_STATE(688)] = 18881,
  [SMALL_STATE(689)] = 18894,
  [SMALL_STATE(690)] = 18907,
  [SMALL_STATE(691)] = 18920,
  [SMALL_STATE(692)] = 18933,
  [SMALL_STATE(693)] = 18946,
  [SMALL_STATE(694)] = 18959,
  [SMALL_STATE(695)] = 18972,
  [SMALL_STATE(696)] = 18985,
  [SMALL_STATE(697)] = 18998,
  [SMALL_STATE(698)] = 19011,
  [SMALL_STATE(699)] = 19024,
  [SMALL_STATE(700)] = 19037,
  [SMALL_STATE(701)] = 19050,
  [SMALL_STATE(702)] = 19063,
  [SMALL_STATE(703)] = 19076,
  [SMALL_STATE(704)] = 19089,
  [SMALL_STATE(705)] = 19102,
  [SMALL_STATE(706)] = 19115,
  [SMALL_STATE(707)] = 19128,
  [SMALL_STATE(708)] = 19141,
  [SMALL_STATE(709)] = 19154,
  [SMALL_STATE(710)] = 19167,
  [SMALL_STATE(711)] = 19180,
  [SMALL_STATE(712)] = 19193,
  [SMALL_STATE(713)] = 19206,
  [SMALL_STATE(714)] = 19219,
  [SMALL_STATE(715)] = 19232,
  [SMALL_STATE(716)] = 19245,
  [SMALL_STATE(717)] = 19258,
  [SMALL_STATE(718)] = 19271,
  [SMALL_STATE(719)] = 19284,
  [SMALL_STATE(720)] = 19297,
  [SMALL_STATE(721)] = 19310,
  [SMALL_STATE(722)] = 19323,
  [SMALL_STATE(723)] = 19336,
  [SMALL_STATE(724)] = 19349,
  [SMALL_STATE(725)] = 19362,
  [SMALL_STATE(726)] = 19375,
  [SMALL_STATE(727)] = 19388,
  [SMALL_STATE(728)] = 19401,
  [SMALL_STATE(729)] = 19414,
  [SMALL_STATE(730)] = 19427,
  [SMALL_STATE(731)] = 19440,
  [SMALL_STATE(732)] = 19453,
  [SMALL_STATE(733)] = 19466,
  [SMALL_STATE(734)] = 19479,
  [SMALL_STATE(735)] = 19492,
  [SMALL_STATE(736)] = 19505,
  [SMALL_STATE(737)] = 19518,
  [SMALL_STATE(738)] = 19531,
  [SMALL_STATE(739)] = 19544,
  [SMALL_STATE(740)] = 19557,
  [SMALL_STATE(741)] = 19570,
  [SMALL_STATE(742)] = 19583,
  [SMALL_STATE(743)] = 19596,
  [SMALL_STATE(744)] = 19609,
  [SMALL_STATE(745)] = 19622,
  [SMALL_STATE(746)] = 19635,
  [SMALL_STATE(747)] = 19648,
  [SMALL_STATE(748)] = 19661,
  [SMALL_STATE(749)] = 19674,
  [SMALL_STATE(750)] = 19687,
  [SMALL_STATE(751)] = 19700,
  [SMALL_STATE(752)] = 19713,
  [SMALL_STATE(753)] = 19726,
  [SMALL_STATE(754)] = 19739,
  [SMALL_STATE(755)] = 19752,
  [SMALL_STATE(756)] = 19765,
  [SMALL_STATE(757)] = 19778,
  [SMALL_STATE(758)] = 19791,
  [SMALL_STATE(759)] = 19804,
  [SMALL_STATE(760)] = 19817,
  [SMALL_STATE(761)] = 19830,
  [SMALL_STATE(762)] = 19843,
  [SMALL_STATE(763)] = 19856,
  [SMALL_STATE(764)] = 19869,
  [SMALL_STATE(765)] = 19882,
  [SMALL_STATE(766)] = 19895,
  [SMALL_STATE(767)] = 19908,
  [SMALL_STATE(768)] = 19921,
  [SMALL_STATE(769)] = 19934,
  [SMALL_STATE(770)] = 19947,
  [SMALL_STATE(771)] = 19960,
  [SMALL_STATE(772)] = 19973,
  [SMALL_STATE(773)] = 19986,
  [SMALL_STATE(774)] = 19999,
  [SMALL_STATE(775)] = 20012,
  [SMALL_STATE(776)] = 20025,
  [SMALL_STATE(777)] = 20038,
  [SMALL_STATE(778)] = 20051,
  [SMALL_STATE(779)] = 20064,
  [SMALL_STATE(780)] = 20077,
  [SMALL_STATE(781)] = 20090,
  [SMALL_STATE(782)] = 20103,
  [SMALL_STATE(783)] = 20116,
  [SMALL_STATE(784)] = 20129,
  [SMALL_STATE(785)] = 20142,
  [SMALL_STATE(786)] = 20155,
  [SMALL_STATE(787)] = 20168,
  [SMALL_STATE(788)] = 20181,
  [SMALL_STATE(789)] = 20194,
  [SMALL_STATE(790)] = 20207,
  [SMALL_STATE(791)] = 20220,
  [SMALL_STATE(792)] = 20233,
  [SMALL_STATE(793)] = 20246,
  [SMALL_STATE(794)] = 20259,
  [SMALL_STATE(795)] = 20272,
  [SMALL_STATE(796)] = 20285,
  [SMALL_STATE(797)] = 20298,
  [SMALL_STATE(798)] = 20311,
  [SMALL_STATE(799)] = 20324,
  [SMALL_STATE(800)] = 20337,
  [SMALL_STATE(801)] = 20341,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(230),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(222),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(231),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(231),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(233),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(257),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(597),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(240),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(243),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(243),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(244),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(245),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(245),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(265),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(265),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(248),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(784),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(224),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(261),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(609),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(591),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(683),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(625),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(640),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(644),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(71),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(780),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(778),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(125),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(645),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(774),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(770),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(769),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(768),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(75),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(649),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(68),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(668),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(33),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(766),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(358),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(191),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(262),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(535),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(205),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_body, 1),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(230),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(222),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(231),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(231),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(233),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(257),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(597),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(240),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(243),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(243),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(244),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(245),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(245),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(265),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(265),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(248),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(784),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(224),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(261),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(609),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(591),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(683),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(625),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(640),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(644),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(71),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(780),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(778),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(125),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(645),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(774),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(770),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(769),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(768),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(75),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(649),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(684),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(33),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(766),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(358),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(191),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(262),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(687),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(535),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(205),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(230),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(222),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(231),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(231),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(233),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(257),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(597),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(240),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(243),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(243),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(244),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(245),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(245),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(265),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(265),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(248),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(784),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(224),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(261),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(609),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(591),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(683),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(625),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(640),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(644),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(71),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(780),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(778),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(125),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(645),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(774),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(770),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(769),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(768),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(75),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(649),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(33),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(766),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(358),
  [580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(191),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(262),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(535),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(205),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(683),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(799),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(335),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(789),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(780),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(778),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(777),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(125),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(342),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(774),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(773),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(770),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(769),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(768),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(75),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(400),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(537),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(33),
  [648] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(766),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(358),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(361),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(191),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(763),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(762),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(761),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(759),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(535),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(781),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2),
  [690] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(557),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(683),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(799),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(335),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(789),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(780),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(778),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(777),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(125),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(342),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(774),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(773),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(770),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(769),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(768),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(75),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(537),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(33),
  [744] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(766),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(358),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(361),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(191),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(763),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(762),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(761),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(759),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(535),
  [771] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(757),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(683),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(799),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(335),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(789),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(780),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(778),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(777),
  [797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(125),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(342),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(774),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(773),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(770),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(769),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(768),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(75),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(537),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(33),
  [827] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(766),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(358),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(361),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(191),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(763),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(762),
  [845] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(761),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(759),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(535),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(781),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 1),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_header, 2),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_forward_dcl, 2),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [899] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(230),
  [902] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(222),
  [905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(231),
  [908] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(231),
  [911] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(233),
  [914] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(257),
  [917] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(597),
  [920] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(240),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(243),
  [926] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(243),
  [929] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(244),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(245),
  [935] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(245),
  [938] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(265),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(265),
  [944] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(248),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(784),
  [950] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(224),
  [953] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(261),
  [956] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(609),
  [959] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(591),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2),
  [964] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(124),
  [967] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(262),
  [970] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(205),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [987] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(230),
  [990] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(222),
  [993] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(231),
  [996] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(231),
  [999] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(233),
  [1002] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(619),
  [1005] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(614),
  [1008] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(240),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(243),
  [1014] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(243),
  [1017] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(244),
  [1020] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(245),
  [1023] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(245),
  [1026] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(265),
  [1029] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(265),
  [1032] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(248),
  [1035] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(784),
  [1038] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(224),
  [1041] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(714),
  [1044] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(609),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2),
  [1049] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(768),
  [1052] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(75),
  [1055] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(33),
  [1058] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(766),
  [1061] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(205),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 6),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 6),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 1),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 1),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_element, 1),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_element, 1),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_member, 4),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_member, 4),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 5),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 5),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 7),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 7),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_home_export, 2),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_export, 2),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 1),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 1),
  [1118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_home_export, 1),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_export, 1),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_label, 2),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_label, 2),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_label, 3),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_label, 3),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 2),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2),
  [1138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(124),
  [1141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_appl, 2),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl, 2),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_built_name, 1),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_built_name, 1),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 3),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 3),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_body, 1),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_body, 1),
  [1159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 1),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 1),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 2),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 2),
  [1167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 4, .production_id = 5),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 5),
  [1171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_body, 2),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_body, 2),
  [1175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_member, 5),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member, 5),
  [1179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 1),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 1),
  [1183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 3, .production_id = 3),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3, .production_id = 3),
  [1187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 5, .production_id = 5),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 5, .production_id = 5),
  [1191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 1),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 1),
  [1195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_member, 3),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member, 3),
  [1199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 4, .production_id = 3),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 3),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_appl, 5),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl, 5),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 1),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 1),
  [1211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_attribute, 1),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_attribute, 1),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [1219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 1),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2),
  [1223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 2),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_call, 3, .production_id = 2),
  [1227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_call, 3, .production_id = 2),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 1),
  [1233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 1),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 1),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 1),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_call, 2, .production_id = 1),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_call, 2, .production_id = 1),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefine, 2),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefine, 2),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_definition, 1),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_definition, 1),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_definition, 2),
  [1253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_definition, 2),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 1),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_dcl_repeat1, 1),
  [1259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [1267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 1),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2),
  [1309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(644),
  [1312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(71),
  [1315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(239),
  [1318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(203),
  [1321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(440),
  [1324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(441),
  [1327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(442),
  [1330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(450),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expr, 1),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expr, 1),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2),
  [1341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(644),
  [1344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(71),
  [1347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(239),
  [1350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(203),
  [1353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(450),
  [1356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [1360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_expr, 1),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_expr, 1),
  [1364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 4),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 4),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [1372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [1376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_expr, 1),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 1),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_body, 1),
  [1386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [1390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_expr, 3),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_expr, 3),
  [1394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_expr, 3),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 3),
  [1398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 4),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 4),
  [1402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 1),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 1),
  [1406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expr, 3),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expr, 3),
  [1410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_body, 2),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2),
  [1424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(644),
  [1427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(71),
  [1430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(239),
  [1433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(203),
  [1436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(450),
  [1439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_expr, 1),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_expr, 1),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_type_spec, 1),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type_spec, 1),
  [1449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_expr, 3),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_expr, 3),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 3),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 3),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 1),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 1),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 1),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_export, 2),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xor_expr, 3),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1),
  [1481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xor_expr, 1),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 1),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(125),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 3),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_declarator, 1),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 1),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_export, 1),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_export, 2),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_declarator, 1),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 2),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_forward_dcl, 2),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_forward_dcl, 3),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_export, 1),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 1),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_export, 2),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_ref, 2),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expr, 1),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declarator, 2),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2),
  [1560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2), SHIFT_REPEAT(685),
  [1563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2), SHIFT_REPEAT(136),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 2),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_forward_dcl, 2),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 2),
  [1588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 2), SHIFT_REPEAT(128),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 3),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_long_int, 1),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_declarator, 1),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 1),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supported_interface_spec, 2),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raises_expr_repeat1, 2),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_short_int, 1),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_longlong_int, 1),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_int, 1),
  [1629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raises_expr_repeat1, 2), SHIFT_REPEAT(430),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_int, 1),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_short_int, 1),
  [1644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_long_int, 1),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_longlong_int, 1),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_type, 1),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 2),
  [1652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 2), SHIFT_REPEAT(708),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 1),
  [1663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarators_repeat1, 2), SHIFT_REPEAT(317),
  [1666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarators_repeat1, 2),
  [1668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [1676] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_char_literal_repeat1, 2), SHIFT_REPEAT(423),
  [1679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_char_literal_repeat1, 2),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_type, 1),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_type_spec, 1),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_pt_type, 1),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 4),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 6),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_header, 2),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_forward_dcl, 2),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarators, 1),
  [1719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 3),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_forward_dcl, 2),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_array_size, 3),
  [1739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_inheritance_spec_repeat1, 2), SHIFT_REPEAT(277),
  [1742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_inheritance_spec_repeat1, 2),
  [1744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 2), SHIFT_REPEAT(545),
  [1747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 2),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 4),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 4),
  [1753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 4),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 6),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_pt_type, 6),
  [1761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 6),
  [1763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 5),
  [1765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supported_interface_spec, 3),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 5),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 1),
  [1775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 8),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 1),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [1793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(129),
  [1800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_name, 1),
  [1802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 2),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1808] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(375),
  [1811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(375),
  [1816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarators, 2),
  [1818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 4),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [1828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(123),
  [1831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 4),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 6),
  [1837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2), SHIFT_REPEAT(300),
  [1840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
  [1842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_header, 2),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 1),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_dcl_repeat1, 2), SHIFT_REPEAT(226),
  [1863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_dcl_repeat1, 2),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameters, 1),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actual_parameters_repeat1, 2),
  [1877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_actual_parameters_repeat1, 2), SHIFT_REPEAT(31),
  [1880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_declarator, 2),
  [1882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [1884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(53),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_int_const, 1),
  [1895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_appl_params_repeat1, 2), SHIFT_REPEAT(464),
  [1898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_appl_params_repeat1, 2),
  [1900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 1),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_dcls, 1),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarators, 2),
  [1910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_inheritance_spec, 2),
  [1912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_inheritance_spec, 2),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcls, 1),
  [1920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_inheritance_spec, 2),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarators, 1),
  [1928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameter_names_repeat1, 2),
  [1930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameter_names_repeat1, 2), SHIFT_REPEAT(741),
  [1933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 4),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcls, 1),
  [1939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_names, 2),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [1945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1953] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 2), SHIFT_REPEAT(254),
  [1956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
  [1958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 3),
  [1960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 2),
  [1962] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 2), SHIFT_REPEAT(492),
  [1965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [1967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_names, 1),
  [1969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_parameter_dcls_repeat1, 2), SHIFT_REPEAT(462),
  [1972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_in_parameter_dcls_repeat1, 2),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 7),
  [1992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_forward_dcl, 2),
  [1994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_forward_dcl, 2),
  [1998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 5),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2004] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_factory_param_dcls_repeat1, 2), SHIFT_REPEAT(465),
  [2007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_factory_param_dcls_repeat1, 2),
  [2009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_declarator, 2),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [2015] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2), SHIFT_REPEAT(561),
  [2018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [2022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_parameter_dcls, 1),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [2026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_inheritance_spec, 3),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [2032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_dcls, 2),
  [2034] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_param_dcls_repeat1, 2), SHIFT_REPEAT(474),
  [2037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_param_dcls_repeat1, 2),
  [2039] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_char_literal_repeat1, 1),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcls, 2),
  [2045] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_dcls_repeat1, 2), SHIFT_REPEAT(255),
  [2048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_dcls_repeat1, 2),
  [2050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_any_declarators_repeat1, 2), SHIFT_REPEAT(308),
  [2053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_any_declarators_repeat1, 2),
  [2055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 5),
  [2057] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_expr_repeat1, 2), SHIFT_REPEAT(413),
  [2060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_expr_repeat1, 2),
  [2062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcls, 2),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [2066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_params, 2),
  [2068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 5),
  [2070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_parameter_dcls, 2),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [2074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [2078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 1),
  [2080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameters, 2),
  [2082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_raises_expr, 1),
  [2084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_params, 1),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [2088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_dcl, 1),
  [2090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_type_spec, 1),
  [2092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 7, .production_id = 6),
  [2094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 5),
  [2096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 5),
  [2098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 8),
  [2100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 2),
  [2102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_oneway_dcl, 6),
  [2104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 2),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [2108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 6),
  [2110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 7),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [2116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_dcl, 3),
  [2118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcl, 3),
  [2120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 4),
  [2122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcl, 3),
  [2124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 1),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [2130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 5),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [2134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 4),
  [2136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_oneway_dcl, 5),
  [2138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_value, 1),
  [2140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_excep_expr, 2),
  [2142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 5),
  [2144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 1),
  [2146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield, 2),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 7, .production_id = 4),
  [2154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 8),
  [2156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 8, .production_id = 6),
  [2158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member_type, 1),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_spec, 6),
  [2164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 7),
  [2166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 3),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 7),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [2174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_spec, 4),
  [2176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_dcl, 1),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [2182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_type, 1),
  [2184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 9),
  [2186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_list, 3),
  [2188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_param_dcl, 3),
  [2190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 6),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [2196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield, 3),
  [2198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raises_expr, 4),
  [2200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 6),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [2206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 6),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [2212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_list, 4),
  [2214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type, 1),
  [2216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raises_expr, 5),
  [2218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarator, 1),
  [2220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_param, 3),
  [2222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constr_type_dcl, 1),
  [2224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_inherit_spec, 2),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [2230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imported_scope, 1),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [2236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 1),
  [2238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 1),
  [2240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_modifier, 1),
  [2242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 4),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 4),
  [2248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 6, .production_id = 4),
  [2250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 6),
  [2252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameter, 1),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [2258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_spec, 2),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [2262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [2266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_type, 1),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [2270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_forward_dcl, 2),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [2274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_dcl, 3),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [2280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_dcl, 2),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [2288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_spec, 4),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [2300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_def, 3),
  [2302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_dcl, 2),
  [2304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 3),
  [2306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_inst, 6),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [2310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_dcl, 2),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [2320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_dcl, 4),
  [2322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declarator, 2),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_id_dcl, 3),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [2334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_prefix_dcl, 3),
  [2336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_kind, 2),
  [2338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 6),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [2342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 2),
  [2344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 6),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [2348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 7),
  [2350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 7),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [2354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_pt_const_type, 1),
  [2356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 5),
  [2358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_header, 3),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [2362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_dcl, 7),
  [2364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_header, 3),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [2370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 3),
  [2372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_dcl, 3),
  [2374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_consumes_dcl, 3),
  [2376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_publishes_dcl, 3),
  [2378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emits_dcl, 3),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [2386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_dcl, 3),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 7),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [2396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_provides_dcl, 3),
  [2398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_type_spec, 1),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_excep_expr, 2),
  [2404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_raises_expr, 2),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [2416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 4),
  [2418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_spec, 3),
  [2420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_kind, 2),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_def, 5),
  [2432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_dcl, 1),
  [2434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_box_def, 3),
  [2436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_header, 3),
  [2438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_def, 3),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [2446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_dcl, 5),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [2450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [2452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destination_type, 1),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [2456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_dcl, 1),
  [2458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_dcl, 8),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [2470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_dcl, 1),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [2476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_dcl, 1),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [2488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_dcl, 5),
  [2490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 3),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 5),
  [2496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_type, 2),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except_dcl, 4),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [2518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 6),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [2522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_dcl, 5),
  [2524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 6),
  [2526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_const_type, 1),
  [2528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_dcl, 4),
  [2530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 5),
  [2532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 5),
  [2534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_dcl, 1),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except_dcl, 5),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [2552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [2554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_dcl, 4),
  [2556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_dcl, 4),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [2564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_dcl, 1),
  [2566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_spec, 2),
  [2568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [2570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [2572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_def, 4),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [2580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [2582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_def, 4),
  [2584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [2586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_ref, 6),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_with_context, 2),
  [2592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_dcl, 1),
  [2598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 4),
  [2600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [2602] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [2618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_def, 4),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [2622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_anno, 1),
  [2624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 4),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [2638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_kind, 1),
  [2640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 4),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [2650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [2658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_supports, 2),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [2662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_kind, 1),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [2672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_dcl, 4),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [2678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [2680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [2682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
