#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 216
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_syntax = 1,
  anon_sym_EQ = 2,
  anon_sym_import = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_info = 6,
  anon_sym_type = 7,
  anon_sym_bool = 8,
  anon_sym_uint8 = 9,
  anon_sym_uint16 = 10,
  anon_sym_uint32 = 11,
  anon_sym_uint64 = 12,
  anon_sym_int8 = 13,
  anon_sym_int16 = 14,
  anon_sym_int32 = 15,
  anon_sym_int64 = 16,
  anon_sym_float32 = 17,
  anon_sym_float64 = 18,
  anon_sym_complex64 = 19,
  anon_sym_complex128 = 20,
  anon_sym_string = 21,
  anon_sym_int = 22,
  anon_sym_uint = 23,
  anon_sym_uintptr = 24,
  anon_sym_byte = 25,
  anon_sym_rune = 26,
  anon_sym_time_DOTTime = 27,
  anon_sym_STAR = 28,
  anon_sym_interface = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_map = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_struct = 35,
  anon_sym_DOT = 36,
  anon_sym_ATserver = 37,
  anon_sym_service = 38,
  anon_sym_ATdoc = 39,
  anon_sym_AThandler = 40,
  anon_sym_returns = 41,
  anon_sym_SEMI = 42,
  anon_sym_COLON = 43,
  anon_sym_COMMA = 44,
  anon_sym_as = 45,
  sym_VALUE = 46,
  sym_RAW_STRING = 47,
  sym_comment = 48,
  sym_IDENT = 49,
  sym_NUMBER = 50,
  anon_sym_ns = 51,
  anon_sym_us = 52,
  anon_sym_u00b5s = 53,
  anon_sym_ms = 54,
  anon_sym_s = 55,
  anon_sym_m = 56,
  anon_sym_h = 57,
  sym_HTTPMETHOD = 58,
  anon_sym_SLASH_COLON = 59,
  anon_sym_SLASH = 60,
  sym_api = 61,
  sym_syntaxLit = 62,
  sym_apiBody = 63,
  sym_importStatement = 64,
  sym_importSpec = 65,
  sym_importLit = 66,
  sym_importGroup = 67,
  sym_infoStatement = 68,
  sym_typeStatement = 69,
  sym_typeGroupSpec = 70,
  sym_typeGroupAlias = 71,
  sym_typeSingleSpec = 72,
  sym_typeAlias = 73,
  sym_typeStruct = 74,
  sym_typeFiled = 75,
  sym_normalField = 76,
  sym_fieldType = 77,
  sym_GOTYPE = 78,
  sym_anonymousField = 79,
  sym_normalFieldType = 80,
  sym_starFieldType = 81,
  sym_mapFieldType = 82,
  sym_arrayOrSliceType = 83,
  sym_structType = 84,
  sym_structNameId = 85,
  sym_fieldName = 86,
  sym_referenceId = 87,
  sym_tag = 88,
  sym_body = 89,
  sym_serviceStatement = 90,
  sym_serviceServerSpec = 91,
  sym_serviceSpec = 92,
  sym_serviceName = 93,
  sym_serviceBody = 94,
  sym_serviceDoc = 95,
  sym_serviceDocNew = 96,
  sym_serviceHandler = 97,
  sym_serviceHandlerNew = 98,
  sym_serviceRoute = 99,
  sym_httpRoute = 100,
  sym_identPair = 101,
  sym_handlerPair = 102,
  sym_identValue = 103,
  sym_handlerValue = 104,
  sym_importValue = 105,
  sym_docValue = 106,
  sym_pair = 107,
  sym_key = 108,
  sym_DURATION = 109,
  sym_DYNAMIC_PATH = 110,
  sym_COMMON_PATH = 111,
  sym_PATH = 112,
  aux_sym_api_repeat1 = 113,
  aux_sym_importStatement_repeat1 = 114,
  aux_sym_importGroup_repeat1 = 115,
  aux_sym_typeGroupSpec_repeat1 = 116,
  aux_sym_arrayOrSliceType_repeat1 = 117,
  aux_sym_structType_repeat1 = 118,
  aux_sym_serviceSpec_repeat1 = 119,
  aux_sym_identPair_repeat1 = 120,
  aux_sym_handlerPair_repeat1 = 121,
  aux_sym_identValue_repeat1 = 122,
  aux_sym_pair_repeat1 = 123,
  aux_sym_PATH_repeat1 = 124,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_syntax] = "syntax",
  [anon_sym_EQ] = "=",
  [anon_sym_import] = "import",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_info] = "info",
  [anon_sym_type] = "type",
  [anon_sym_bool] = "bool",
  [anon_sym_uint8] = "uint8",
  [anon_sym_uint16] = "uint16",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_complex64] = "complex64",
  [anon_sym_complex128] = "complex128",
  [anon_sym_string] = "string",
  [anon_sym_int] = "int",
  [anon_sym_uint] = "uint",
  [anon_sym_uintptr] = "uintptr",
  [anon_sym_byte] = "byte",
  [anon_sym_rune] = "rune",
  [anon_sym_time_DOTTime] = "time.Time",
  [anon_sym_STAR] = "*",
  [anon_sym_interface] = "interface",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_map] = "map",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_struct] = "struct",
  [anon_sym_DOT] = ".",
  [anon_sym_ATserver] = "@server",
  [anon_sym_service] = "service",
  [anon_sym_ATdoc] = "@doc",
  [anon_sym_AThandler] = "@handler",
  [anon_sym_returns] = "returns",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_as] = "as",
  [sym_VALUE] = "VALUE",
  [sym_RAW_STRING] = "RAW_STRING",
  [sym_comment] = "comment",
  [sym_IDENT] = "IDENT",
  [sym_NUMBER] = "NUMBER",
  [anon_sym_ns] = "ns",
  [anon_sym_us] = "us",
  [anon_sym_u00b5s] = "\u00b5s",
  [anon_sym_ms] = "ms",
  [anon_sym_s] = "s",
  [anon_sym_m] = "m",
  [anon_sym_h] = "h",
  [sym_HTTPMETHOD] = "HTTPMETHOD",
  [anon_sym_SLASH_COLON] = "/:",
  [anon_sym_SLASH] = "/",
  [sym_api] = "api",
  [sym_syntaxLit] = "syntaxLit",
  [sym_apiBody] = "apiBody",
  [sym_importStatement] = "importStatement",
  [sym_importSpec] = "importSpec",
  [sym_importLit] = "importLit",
  [sym_importGroup] = "importGroup",
  [sym_infoStatement] = "infoStatement",
  [sym_typeStatement] = "typeStatement",
  [sym_typeGroupSpec] = "typeGroupSpec",
  [sym_typeGroupAlias] = "typeGroupAlias",
  [sym_typeSingleSpec] = "typeSingleSpec",
  [sym_typeAlias] = "typeAlias",
  [sym_typeStruct] = "typeStruct",
  [sym_typeFiled] = "typeFiled",
  [sym_normalField] = "normalField",
  [sym_fieldType] = "fieldType",
  [sym_GOTYPE] = "GOTYPE",
  [sym_anonymousField] = "anonymousField",
  [sym_normalFieldType] = "normalFieldType",
  [sym_starFieldType] = "starFieldType",
  [sym_mapFieldType] = "mapFieldType",
  [sym_arrayOrSliceType] = "arrayOrSliceType",
  [sym_structType] = "structType",
  [sym_structNameId] = "structNameId",
  [sym_fieldName] = "fieldName",
  [sym_referenceId] = "referenceId",
  [sym_tag] = "tag",
  [sym_body] = "body",
  [sym_serviceStatement] = "serviceStatement",
  [sym_serviceServerSpec] = "serviceServerSpec",
  [sym_serviceSpec] = "serviceSpec",
  [sym_serviceName] = "serviceName",
  [sym_serviceBody] = "serviceBody",
  [sym_serviceDoc] = "serviceDoc",
  [sym_serviceDocNew] = "serviceDocNew",
  [sym_serviceHandler] = "serviceHandler",
  [sym_serviceHandlerNew] = "serviceHandlerNew",
  [sym_serviceRoute] = "serviceRoute",
  [sym_httpRoute] = "httpRoute",
  [sym_identPair] = "identPair",
  [sym_handlerPair] = "handlerPair",
  [sym_identValue] = "identValue",
  [sym_handlerValue] = "handlerValue",
  [sym_importValue] = "importValue",
  [sym_docValue] = "docValue",
  [sym_pair] = "pair",
  [sym_key] = "key",
  [sym_DURATION] = "DURATION",
  [sym_DYNAMIC_PATH] = "DYNAMIC_PATH",
  [sym_COMMON_PATH] = "COMMON_PATH",
  [sym_PATH] = "PATH",
  [aux_sym_api_repeat1] = "api_repeat1",
  [aux_sym_importStatement_repeat1] = "importStatement_repeat1",
  [aux_sym_importGroup_repeat1] = "importGroup_repeat1",
  [aux_sym_typeGroupSpec_repeat1] = "typeGroupSpec_repeat1",
  [aux_sym_arrayOrSliceType_repeat1] = "arrayOrSliceType_repeat1",
  [aux_sym_structType_repeat1] = "structType_repeat1",
  [aux_sym_serviceSpec_repeat1] = "serviceSpec_repeat1",
  [aux_sym_identPair_repeat1] = "identPair_repeat1",
  [aux_sym_handlerPair_repeat1] = "handlerPair_repeat1",
  [aux_sym_identValue_repeat1] = "identValue_repeat1",
  [aux_sym_pair_repeat1] = "pair_repeat1",
  [aux_sym_PATH_repeat1] = "PATH_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_syntax] = anon_sym_syntax,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_complex64] = anon_sym_complex64,
  [anon_sym_complex128] = anon_sym_complex128,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_uintptr] = anon_sym_uintptr,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_rune] = anon_sym_rune,
  [anon_sym_time_DOTTime] = anon_sym_time_DOTTime,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_ATserver] = anon_sym_ATserver,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_ATdoc] = anon_sym_ATdoc,
  [anon_sym_AThandler] = anon_sym_AThandler,
  [anon_sym_returns] = anon_sym_returns,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_as] = anon_sym_as,
  [sym_VALUE] = sym_VALUE,
  [sym_RAW_STRING] = sym_RAW_STRING,
  [sym_comment] = sym_comment,
  [sym_IDENT] = sym_IDENT,
  [sym_NUMBER] = sym_NUMBER,
  [anon_sym_ns] = anon_sym_ns,
  [anon_sym_us] = anon_sym_us,
  [anon_sym_u00b5s] = anon_sym_u00b5s,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_h] = anon_sym_h,
  [sym_HTTPMETHOD] = sym_HTTPMETHOD,
  [anon_sym_SLASH_COLON] = anon_sym_SLASH_COLON,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_api] = sym_api,
  [sym_syntaxLit] = sym_syntaxLit,
  [sym_apiBody] = sym_apiBody,
  [sym_importStatement] = sym_importStatement,
  [sym_importSpec] = sym_importSpec,
  [sym_importLit] = sym_importLit,
  [sym_importGroup] = sym_importGroup,
  [sym_infoStatement] = sym_infoStatement,
  [sym_typeStatement] = sym_typeStatement,
  [sym_typeGroupSpec] = sym_typeGroupSpec,
  [sym_typeGroupAlias] = sym_typeGroupAlias,
  [sym_typeSingleSpec] = sym_typeSingleSpec,
  [sym_typeAlias] = sym_typeAlias,
  [sym_typeStruct] = sym_typeStruct,
  [sym_typeFiled] = sym_typeFiled,
  [sym_normalField] = sym_normalField,
  [sym_fieldType] = sym_fieldType,
  [sym_GOTYPE] = sym_GOTYPE,
  [sym_anonymousField] = sym_anonymousField,
  [sym_normalFieldType] = sym_normalFieldType,
  [sym_starFieldType] = sym_starFieldType,
  [sym_mapFieldType] = sym_mapFieldType,
  [sym_arrayOrSliceType] = sym_arrayOrSliceType,
  [sym_structType] = sym_structType,
  [sym_structNameId] = sym_structNameId,
  [sym_fieldName] = sym_fieldName,
  [sym_referenceId] = sym_referenceId,
  [sym_tag] = sym_tag,
  [sym_body] = sym_body,
  [sym_serviceStatement] = sym_serviceStatement,
  [sym_serviceServerSpec] = sym_serviceServerSpec,
  [sym_serviceSpec] = sym_serviceSpec,
  [sym_serviceName] = sym_serviceName,
  [sym_serviceBody] = sym_serviceBody,
  [sym_serviceDoc] = sym_serviceDoc,
  [sym_serviceDocNew] = sym_serviceDocNew,
  [sym_serviceHandler] = sym_serviceHandler,
  [sym_serviceHandlerNew] = sym_serviceHandlerNew,
  [sym_serviceRoute] = sym_serviceRoute,
  [sym_httpRoute] = sym_httpRoute,
  [sym_identPair] = sym_identPair,
  [sym_handlerPair] = sym_handlerPair,
  [sym_identValue] = sym_identValue,
  [sym_handlerValue] = sym_handlerValue,
  [sym_importValue] = sym_importValue,
  [sym_docValue] = sym_docValue,
  [sym_pair] = sym_pair,
  [sym_key] = sym_key,
  [sym_DURATION] = sym_DURATION,
  [sym_DYNAMIC_PATH] = sym_DYNAMIC_PATH,
  [sym_COMMON_PATH] = sym_COMMON_PATH,
  [sym_PATH] = sym_PATH,
  [aux_sym_api_repeat1] = aux_sym_api_repeat1,
  [aux_sym_importStatement_repeat1] = aux_sym_importStatement_repeat1,
  [aux_sym_importGroup_repeat1] = aux_sym_importGroup_repeat1,
  [aux_sym_typeGroupSpec_repeat1] = aux_sym_typeGroupSpec_repeat1,
  [aux_sym_arrayOrSliceType_repeat1] = aux_sym_arrayOrSliceType_repeat1,
  [aux_sym_structType_repeat1] = aux_sym_structType_repeat1,
  [aux_sym_serviceSpec_repeat1] = aux_sym_serviceSpec_repeat1,
  [aux_sym_identPair_repeat1] = aux_sym_identPair_repeat1,
  [aux_sym_handlerPair_repeat1] = aux_sym_handlerPair_repeat1,
  [aux_sym_identValue_repeat1] = aux_sym_identValue_repeat1,
  [aux_sym_pair_repeat1] = aux_sym_pair_repeat1,
  [aux_sym_PATH_repeat1] = aux_sym_PATH_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_syntax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
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
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complex64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complex128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uintptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rune] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time_DOTTime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
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
  [anon_sym_map] = {
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
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATserver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATdoc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AThandler] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
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
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [sym_VALUE] = {
    .visible = true,
    .named = true,
  },
  [sym_RAW_STRING] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_IDENT] = {
    .visible = true,
    .named = true,
  },
  [sym_NUMBER] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_us] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u00b5s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [sym_HTTPMETHOD] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_api] = {
    .visible = true,
    .named = true,
  },
  [sym_syntaxLit] = {
    .visible = true,
    .named = true,
  },
  [sym_apiBody] = {
    .visible = true,
    .named = true,
  },
  [sym_importStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_importSpec] = {
    .visible = true,
    .named = true,
  },
  [sym_importLit] = {
    .visible = true,
    .named = true,
  },
  [sym_importGroup] = {
    .visible = true,
    .named = true,
  },
  [sym_infoStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_typeStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_typeGroupSpec] = {
    .visible = true,
    .named = true,
  },
  [sym_typeGroupAlias] = {
    .visible = true,
    .named = true,
  },
  [sym_typeSingleSpec] = {
    .visible = true,
    .named = true,
  },
  [sym_typeAlias] = {
    .visible = true,
    .named = true,
  },
  [sym_typeStruct] = {
    .visible = true,
    .named = true,
  },
  [sym_typeFiled] = {
    .visible = true,
    .named = true,
  },
  [sym_normalField] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldType] = {
    .visible = true,
    .named = true,
  },
  [sym_GOTYPE] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymousField] = {
    .visible = true,
    .named = true,
  },
  [sym_normalFieldType] = {
    .visible = true,
    .named = true,
  },
  [sym_starFieldType] = {
    .visible = true,
    .named = true,
  },
  [sym_mapFieldType] = {
    .visible = true,
    .named = true,
  },
  [sym_arrayOrSliceType] = {
    .visible = true,
    .named = true,
  },
  [sym_structType] = {
    .visible = true,
    .named = true,
  },
  [sym_structNameId] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldName] = {
    .visible = true,
    .named = true,
  },
  [sym_referenceId] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceServerSpec] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceSpec] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceName] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceBody] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceDoc] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceDocNew] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceHandler] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceHandlerNew] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceRoute] = {
    .visible = true,
    .named = true,
  },
  [sym_httpRoute] = {
    .visible = true,
    .named = true,
  },
  [sym_identPair] = {
    .visible = true,
    .named = true,
  },
  [sym_handlerPair] = {
    .visible = true,
    .named = true,
  },
  [sym_identValue] = {
    .visible = true,
    .named = true,
  },
  [sym_handlerValue] = {
    .visible = true,
    .named = true,
  },
  [sym_importValue] = {
    .visible = true,
    .named = true,
  },
  [sym_docValue] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_DURATION] = {
    .visible = true,
    .named = true,
  },
  [sym_DYNAMIC_PATH] = {
    .visible = true,
    .named = true,
  },
  [sym_COMMON_PATH] = {
    .visible = true,
    .named = true,
  },
  [sym_PATH] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_api_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_importStatement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_importGroup_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typeGroupSpec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arrayOrSliceType_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_structType_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_serviceSpec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identPair_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_handlerPair_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identValue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pair_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_PATH_repeat1] = {
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 2,
  [8] = 3,
  [9] = 5,
  [10] = 4,
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
  [23] = 19,
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
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 35,
  [38] = 38,
  [39] = 36,
  [40] = 40,
  [41] = 40,
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
  [56] = 32,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 31,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 54,
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
  [92] = 61,
  [93] = 59,
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
  [104] = 43,
  [105] = 63,
  [106] = 106,
  [107] = 53,
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
  [118] = 75,
  [119] = 119,
  [120] = 90,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 80,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 49,
  [129] = 50,
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
  [187] = 155,
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
  [205] = 195,
  [206] = 206,
  [207] = 207,
  [208] = 194,
  [209] = 209,
  [210] = 190,
  [211] = 179,
  [212] = 198,
  [213] = 197,
  [214] = 214,
  [215] = 191,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(141);
      ADVANCE_MAP(
        '"', 2,
        '(', 145,
        ')', 146,
        '*', 188,
        ',', 207,
        '.', 198,
        '/', 299,
        ':', 206,
        ';', 205,
        '=', 143,
        '@', 44,
        '[', 194,
        ']', 195,
        '`', 28,
        'a', 116,
        'b', 98,
        'c', 92,
        'f', 75,
        'h', 295,
        'i', 79,
        'm', 293,
        'n', 117,
        'r', 56,
        's', 291,
        't', 69,
        'u', 70,
        '{', 191,
        '}', 192,
        0xb5, 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 2,
        '(', 145,
        ')', 146,
        '*', 188,
        ',', 207,
        '.', 198,
        '/', 299,
        ']', 195,
        '`', 28,
        '}', 192,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == '/') ADVANCE(299);
      if (lookahead == ';') ADVANCE(205);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == '}') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        ')', 146,
        '*', 188,
        '/', 8,
        '[', 194,
        'b', 256,
        'c', 255,
        'f', 245,
        'i', 254,
        'r', 279,
        's', 269,
        't', 240,
        'u', 243,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        ')', 146,
        '/', 8,
        'h', 296,
        'm', 294,
        'n', 267,
        's', 292,
        'u', 268,
        0xb5, 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '*', 188,
        '.', 198,
        '/', 8,
        '[', 194,
        'b', 256,
        'c', 255,
        'f', 245,
        'i', 252,
        'm', 227,
        'r', 279,
        's', 278,
        't', 240,
        'u', 243,
        '{', 191,
        '}', 192,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '*', 188,
        '/', 8,
        '[', 194,
        'b', 256,
        'c', 255,
        'f', 245,
        'i', 252,
        'm', 227,
        'r', 279,
        's', 269,
        't', 240,
        'u', 243,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(212);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(27);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '/', 8,
        '=', 143,
        'b', 256,
        'c', 255,
        'f', 245,
        'i', 252,
        'r', 279,
        's', 278,
        't', 240,
        'u', 243,
        '{', 191,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '/', 8,
        'b', 256,
        'c', 255,
        'f', 245,
        'i', 252,
        'r', 279,
        's', 269,
        't', 240,
        'u', 243,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '6') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(163);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(155);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(167);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(165);
      END_STATE();
    case 21:
      if (lookahead == '4') ADVANCE(157);
      END_STATE();
    case 22:
      if (lookahead == '4') ADVANCE(169);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(171);
      END_STATE();
    case 24:
      if (lookahead == '6') ADVANCE(161);
      END_STATE();
    case 25:
      if (lookahead == '6') ADVANCE(153);
      END_STATE();
    case 26:
      if (lookahead == '8') ADVANCE(173);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 28:
      if (lookahead == '`') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'h') ADVANCE(32);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 136:
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 137:
      if (lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 138:
      if (lookahead == 'x') ADVANCE(14);
      END_STATE();
    case 139:
      if (lookahead == 'x') ADVANCE(142);
      END_STATE();
    case 140:
      if (eof) ADVANCE(141);
      ADVANCE_MAP(
        '"', 2,
        ')', 146,
        '.', 198,
        '/', 8,
        '@', 115,
        ']', 195,
        'a', 116,
        'c', 99,
        'd', 63,
        'g', 59,
        'h', 57,
        'i', 80,
        'o', 104,
        'p', 34,
        's', 62,
        't', 114,
        '{', 191,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_int8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_int32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_int64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_float32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_float64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_complex64);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_complex64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_complex128);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_complex128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '3') ADVANCE(15);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(224);
      if (lookahead == '3') ADVANCE(215);
      if (lookahead == '6') ADVANCE(220);
      if (lookahead == '8') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(224);
      if (lookahead == '3') ADVANCE(215);
      if (lookahead == '6') ADVANCE(220);
      if (lookahead == '8') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(21);
      if (lookahead == '8') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(225);
      if (lookahead == '3') ADVANCE(216);
      if (lookahead == '6') ADVANCE(221);
      if (lookahead == '8') ADVANCE(152);
      if (lookahead == 'p') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_uintptr);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_uintptr);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_rune);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_rune);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_time_DOTTime);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_map);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ATserver);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_ATdoc);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_AThandler);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_returns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_VALUE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_RAW_STRING);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '1') ADVANCE(218);
      if (lookahead == '6') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '2') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '2') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '2') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '2') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '3') ADVANCE(217);
      if (lookahead == '6') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '4') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '4') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '4') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '4') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '6') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '6') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '8') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'm') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'm') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == 'y') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'p') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'u') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'x') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_ns);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_ns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_us);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_us);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_u00b5s);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_ms);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(289);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_HTTPMETHOD);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_SLASH_COLON);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == ':') ADVANCE(298);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 140},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 140},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 140},
  [28] = {.lex_state = 140},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 140},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 140},
  [48] = {.lex_state = 140},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 140},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 140},
  [54] = {.lex_state = 140},
  [55] = {.lex_state = 140},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 140},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 140},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 140},
  [64] = {.lex_state = 140},
  [65] = {.lex_state = 140},
  [66] = {.lex_state = 140},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 140},
  [69] = {.lex_state = 140},
  [70] = {.lex_state = 140},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 140},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 140},
  [75] = {.lex_state = 140},
  [76] = {.lex_state = 140},
  [77] = {.lex_state = 140},
  [78] = {.lex_state = 140},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 140},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 140},
  [84] = {.lex_state = 140},
  [85] = {.lex_state = 140},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 140},
  [88] = {.lex_state = 140},
  [89] = {.lex_state = 140},
  [90] = {.lex_state = 140},
  [91] = {.lex_state = 140},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 140},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 140},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 140},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 140},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 140},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 140},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 140},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 140},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_complex64] = ACTIONS(1),
    [anon_sym_complex128] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_uintptr] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_rune] = ACTIONS(1),
    [anon_sym_time_DOTTime] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_ATserver] = ACTIONS(1),
    [anon_sym_ATdoc] = ACTIONS(1),
    [anon_sym_AThandler] = ACTIONS(1),
    [anon_sym_returns] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [sym_VALUE] = ACTIONS(1),
    [sym_RAW_STRING] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_NUMBER] = ACTIONS(1),
    [anon_sym_ns] = ACTIONS(1),
    [anon_sym_us] = ACTIONS(1),
    [anon_sym_u00b5s] = ACTIONS(1),
    [anon_sym_ms] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_SLASH_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_api] = STATE(207),
    [sym_syntaxLit] = STATE(27),
    [sym_apiBody] = STATE(25),
    [sym_importStatement] = STATE(25),
    [sym_importSpec] = STATE(47),
    [sym_importLit] = STATE(78),
    [sym_importGroup] = STATE(78),
    [sym_infoStatement] = STATE(25),
    [sym_typeStatement] = STATE(83),
    [sym_typeGroupSpec] = STATE(84),
    [sym_typeSingleSpec] = STATE(84),
    [sym_typeAlias] = STATE(65),
    [sym_typeStruct] = STATE(65),
    [sym_serviceStatement] = STATE(83),
    [sym_serviceServerSpec] = STATE(150),
    [sym_serviceSpec] = STATE(88),
    [aux_sym_api_repeat1] = STATE(25),
    [aux_sym_importStatement_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_syntax] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_info] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(13),
    [anon_sym_ATserver] = ACTIONS(15),
    [anon_sym_service] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_interface,
    ACTIONS(27), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_IDENT,
    STATE(4), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(211), 1,
      sym_fieldType,
    STATE(59), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [59] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_time_DOTTime,
    ACTIONS(39), 1,
      anon_sym_STAR,
    ACTIONS(42), 1,
      anon_sym_interface,
    ACTIONS(45), 1,
      anon_sym_map,
    ACTIONS(48), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      sym_IDENT,
    STATE(3), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(96), 1,
      sym_fieldType,
    STATE(59), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(33), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [118] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_interface,
    ACTIONS(27), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_IDENT,
    STATE(3), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(96), 1,
      sym_fieldType,
    STATE(59), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [177] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_interface,
    ACTIONS(27), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_IDENT,
    STATE(4), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(98), 1,
      sym_fieldType,
    STATE(59), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [236] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_time_DOTTime,
    ACTIONS(58), 1,
      anon_sym_STAR,
    ACTIONS(60), 1,
      anon_sym_interface,
    ACTIONS(62), 1,
      anon_sym_map,
    ACTIONS(64), 1,
      sym_IDENT,
    STATE(10), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(94), 1,
      sym_fieldType,
    STATE(93), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(54), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [295] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_interface,
    ACTIONS(27), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_IDENT,
    STATE(4), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(179), 1,
      sym_fieldType,
    STATE(59), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [354] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_time_DOTTime,
    ACTIONS(72), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_interface,
    ACTIONS(78), 1,
      anon_sym_map,
    ACTIONS(81), 1,
      sym_IDENT,
    STATE(8), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(96), 1,
      sym_fieldType,
    STATE(93), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(66), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [413] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_time_DOTTime,
    ACTIONS(58), 1,
      anon_sym_STAR,
    ACTIONS(60), 1,
      anon_sym_interface,
    ACTIONS(62), 1,
      anon_sym_map,
    ACTIONS(64), 1,
      sym_IDENT,
    STATE(10), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(98), 1,
      sym_fieldType,
    STATE(93), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(54), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [472] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_time_DOTTime,
    ACTIONS(58), 1,
      anon_sym_STAR,
    ACTIONS(60), 1,
      anon_sym_interface,
    ACTIONS(62), 1,
      anon_sym_map,
    ACTIONS(64), 1,
      sym_IDENT,
    STATE(8), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(96), 1,
      sym_fieldType,
    STATE(93), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(54), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [531] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      anon_sym_struct,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      sym_IDENT,
    ACTIONS(86), 2,
      anon_sym_time_DOTTime,
      anon_sym_LBRACK,
    ACTIONS(84), 21,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
      anon_sym_interface,
      anon_sym_map,
  [580] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(25), 1,
      anon_sym_interface,
    ACTIONS(31), 1,
      sym_IDENT,
    ACTIONS(102), 1,
      anon_sym_EQ,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      anon_sym_struct,
    STATE(91), 1,
      sym_normalFieldType,
    STATE(59), 2,
      sym_GOTYPE,
      sym_referenceId,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [630] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_time_DOTTime,
    ACTIONS(60), 1,
      anon_sym_interface,
    ACTIONS(64), 1,
      sym_IDENT,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      anon_sym_struct,
    STATE(165), 1,
      sym_normalFieldType,
    STATE(93), 2,
      sym_GOTYPE,
      sym_referenceId,
    ACTIONS(54), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [677] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      sym_IDENT,
    STATE(174), 1,
      sym_GOTYPE,
    STATE(176), 1,
      sym_body,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [723] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      sym_IDENT,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_GOTYPE,
    STATE(175), 1,
      sym_body,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [769] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      sym_IDENT,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_GOTYPE,
    STATE(182), 1,
      sym_body,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [815] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      sym_IDENT,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_GOTYPE,
    STATE(188), 1,
      sym_body,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 3,
      anon_sym_time_DOTTime,
      anon_sym_STAR,
      anon_sym_LBRACK,
    ACTIONS(126), 22,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
      anon_sym_interface,
      anon_sym_map,
      sym_IDENT,
  [894] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_time_DOTTime,
    ACTIONS(60), 1,
      anon_sym_interface,
    ACTIONS(64), 1,
      sym_IDENT,
    STATE(102), 1,
      sym_normalFieldType,
    STATE(93), 2,
      sym_GOTYPE,
      sym_referenceId,
    ACTIONS(54), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [935] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(25), 1,
      anon_sym_interface,
    ACTIONS(31), 1,
      sym_IDENT,
    STATE(72), 1,
      sym_normalFieldType,
    STATE(59), 2,
      sym_GOTYPE,
      sym_referenceId,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 3,
      anon_sym_time_DOTTime,
      anon_sym_STAR,
      anon_sym_LBRACK,
    ACTIONS(130), 22,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
      anon_sym_interface,
      anon_sym_map,
      sym_IDENT,
  [1009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_EQ,
      anon_sym_time_DOTTime,
      anon_sym_LBRACE,
    ACTIONS(95), 22,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
      anon_sym_interface,
      anon_sym_struct,
      sym_IDENT,
  [1042] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(25), 1,
      anon_sym_interface,
    ACTIONS(31), 1,
      sym_IDENT,
    STATE(102), 1,
      sym_normalFieldType,
    STATE(59), 2,
      sym_GOTYPE,
      sym_referenceId,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [1083] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(134), 1,
      anon_sym_STAR,
    ACTIONS(136), 1,
      sym_IDENT,
    STATE(171), 1,
      sym_GOTYPE,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [1120] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_info,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_ATserver,
    ACTIONS(17), 1,
      anon_sym_service,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_serviceSpec,
    STATE(150), 1,
      sym_serviceServerSpec,
    STATE(47), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(65), 2,
      sym_typeAlias,
      sym_typeStruct,
    STATE(78), 2,
      sym_importLit,
      sym_importGroup,
    STATE(83), 2,
      sym_typeStatement,
      sym_serviceStatement,
    STATE(84), 2,
      sym_typeGroupSpec,
      sym_typeSingleSpec,
    STATE(28), 4,
      sym_apiBody,
      sym_importStatement,
      sym_infoStatement,
      aux_sym_api_repeat1,
  [1174] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(140), 1,
      sym_IDENT,
    STATE(184), 1,
      sym_GOTYPE,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [1208] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_info,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_ATserver,
    ACTIONS(17), 1,
      anon_sym_service,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_serviceSpec,
    STATE(150), 1,
      sym_serviceServerSpec,
    STATE(47), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(65), 2,
      sym_typeAlias,
      sym_typeStruct,
    STATE(78), 2,
      sym_importLit,
      sym_importGroup,
    STATE(83), 2,
      sym_typeStatement,
      sym_serviceStatement,
    STATE(84), 2,
      sym_typeGroupSpec,
      sym_typeSingleSpec,
    STATE(30), 4,
      sym_apiBody,
      sym_importStatement,
      sym_infoStatement,
      aux_sym_api_repeat1,
  [1262] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      anon_sym_import,
    ACTIONS(147), 1,
      anon_sym_info,
    ACTIONS(150), 1,
      anon_sym_type,
    ACTIONS(153), 1,
      anon_sym_ATserver,
    ACTIONS(156), 1,
      anon_sym_service,
    STATE(88), 1,
      sym_serviceSpec,
    STATE(150), 1,
      sym_serviceServerSpec,
    STATE(47), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(65), 2,
      sym_typeAlias,
      sym_typeStruct,
    STATE(78), 2,
      sym_importLit,
      sym_importGroup,
    STATE(83), 2,
      sym_typeStatement,
      sym_serviceStatement,
    STATE(84), 2,
      sym_typeGroupSpec,
      sym_typeSingleSpec,
    STATE(28), 4,
      sym_apiBody,
      sym_importStatement,
      sym_infoStatement,
      aux_sym_api_repeat1,
  [1316] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(159), 1,
      sym_IDENT,
    STATE(177), 1,
      sym_GOTYPE,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [1350] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_info,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_ATserver,
    ACTIONS(17), 1,
      anon_sym_service,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_serviceSpec,
    STATE(150), 1,
      sym_serviceServerSpec,
    STATE(47), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(65), 2,
      sym_typeAlias,
      sym_typeStruct,
    STATE(78), 2,
      sym_importLit,
      sym_importGroup,
    STATE(83), 2,
      sym_typeStatement,
      sym_serviceStatement,
    STATE(84), 2,
      sym_typeGroupSpec,
      sym_typeSingleSpec,
    STATE(28), 4,
      sym_apiBody,
      sym_importStatement,
      sym_infoStatement,
      aux_sym_api_repeat1,
  [1404] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_returns,
    ACTIONS(167), 1,
      sym_IDENT,
    ACTIONS(169), 1,
      anon_sym_SLASH_COLON,
    ACTIONS(171), 1,
      anon_sym_SLASH,
    STATE(32), 3,
      sym_DYNAMIC_PATH,
      sym_COMMON_PATH,
      aux_sym_PATH_repeat1,
    ACTIONS(163), 6,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
      anon_sym_SEMI,
  [1433] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_returns,
    ACTIONS(177), 1,
      sym_IDENT,
    ACTIONS(180), 1,
      anon_sym_SLASH_COLON,
    ACTIONS(183), 1,
      anon_sym_SLASH,
    STATE(32), 3,
      sym_DYNAMIC_PATH,
      sym_COMMON_PATH,
      aux_sym_PATH_repeat1,
    ACTIONS(173), 6,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
      anon_sym_SEMI,
  [1462] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      sym_IDENT,
    STATE(6), 1,
      sym_fieldName,
    STATE(148), 1,
      sym_referenceId,
    STATE(157), 1,
      sym_structNameId,
    STATE(35), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(142), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1493] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(190), 1,
      sym_IDENT,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_fieldName,
    STATE(148), 1,
      sym_referenceId,
    STATE(157), 1,
      sym_structNameId,
    STATE(37), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(142), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1524] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(190), 1,
      sym_IDENT,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_fieldName,
    STATE(148), 1,
      sym_referenceId,
    STATE(157), 1,
      sym_structNameId,
    STATE(42), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(142), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1555] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(190), 1,
      sym_IDENT,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_fieldName,
    STATE(148), 1,
      sym_referenceId,
    STATE(157), 1,
      sym_structNameId,
    STATE(40), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(142), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1586] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(190), 1,
      sym_IDENT,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_fieldName,
    STATE(148), 1,
      sym_referenceId,
    STATE(157), 1,
      sym_structNameId,
    STATE(42), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(142), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1617] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_IDENT,
    ACTIONS(200), 1,
      sym_NUMBER,
    ACTIONS(202), 1,
      anon_sym_SLASH_COLON,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    STATE(138), 1,
      aux_sym_identValue_repeat1,
    STATE(62), 3,
      sym_DYNAMIC_PATH,
      sym_COMMON_PATH,
      aux_sym_PATH_repeat1,
    STATE(158), 3,
      sym_identValue,
      sym_DURATION,
      sym_PATH,
  [1646] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(190), 1,
      sym_IDENT,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_fieldName,
    STATE(148), 1,
      sym_referenceId,
    STATE(157), 1,
      sym_structNameId,
    STATE(41), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(142), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1677] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(190), 1,
      sym_IDENT,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_fieldName,
    STATE(148), 1,
      sym_referenceId,
    STATE(157), 1,
      sym_structNameId,
    STATE(42), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(142), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1708] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(190), 1,
      sym_IDENT,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_fieldName,
    STATE(148), 1,
      sym_referenceId,
    STATE(157), 1,
      sym_structNameId,
    STATE(42), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(142), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1739] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_STAR,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 1,
      sym_IDENT,
    STATE(6), 1,
      sym_fieldName,
    STATE(148), 1,
      sym_referenceId,
    STATE(157), 1,
      sym_structNameId,
    STATE(42), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(142), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_IDENT,
    ACTIONS(225), 1,
      sym_NUMBER,
    ACTIONS(220), 2,
      anon_sym_returns,
      anon_sym_SLASH,
    ACTIONS(218), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
      anon_sym_SEMI,
      anon_sym_SLASH_COLON,
  [1793] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 1,
      anon_sym_ATserver,
    ACTIONS(231), 1,
      anon_sym_ATdoc,
    ACTIONS(233), 1,
      anon_sym_AThandler,
    STATE(45), 2,
      sym_serviceBody,
      aux_sym_serviceSpec_repeat1,
    STATE(127), 2,
      sym_serviceDoc,
      sym_serviceDocNew,
    STATE(145), 2,
      sym_serviceHandler,
      sym_serviceHandlerNew,
  [1821] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 1,
      anon_sym_ATserver,
    ACTIONS(240), 1,
      anon_sym_ATdoc,
    ACTIONS(243), 1,
      anon_sym_AThandler,
    STATE(45), 2,
      sym_serviceBody,
      aux_sym_serviceSpec_repeat1,
    STATE(127), 2,
      sym_serviceDoc,
      sym_serviceDocNew,
    STATE(145), 2,
      sym_serviceHandler,
      sym_serviceHandlerNew,
  [1849] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_ATserver,
    ACTIONS(231), 1,
      anon_sym_ATdoc,
    ACTIONS(233), 1,
      anon_sym_AThandler,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(44), 2,
      sym_serviceBody,
      aux_sym_serviceSpec_repeat1,
    STATE(127), 2,
      sym_serviceDoc,
      sym_serviceDocNew,
    STATE(145), 2,
      sym_serviceHandler,
      sym_serviceHandlerNew,
  [1877] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_import,
    STATE(48), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(78), 2,
      sym_importLit,
      sym_importGroup,
    ACTIONS(248), 5,
      ts_builtin_sym_end,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [1899] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_import,
    STATE(48), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(78), 2,
      sym_importLit,
      sym_importGroup,
    ACTIONS(253), 5,
      ts_builtin_sym_end,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [1921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 3,
      anon_sym_returns,
      sym_IDENT,
      anon_sym_SLASH,
    ACTIONS(258), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
      anon_sym_SEMI,
      anon_sym_SLASH_COLON,
  [1939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 3,
      anon_sym_returns,
      sym_IDENT,
      anon_sym_SLASH,
    ACTIONS(262), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
      anon_sym_SEMI,
      anon_sym_SLASH_COLON,
  [1957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_as,
    ACTIONS(266), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_RPAREN,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_VALUE,
  [1974] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    ACTIONS(272), 1,
      sym_IDENT,
    ACTIONS(276), 1,
      anon_sym_u00b5s,
    ACTIONS(274), 6,
      anon_sym_ns,
      anon_sym_us,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_m,
      anon_sym_h,
  [1995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_RPAREN,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
  [2009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DOT,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
  [2025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_RPAREN,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_VALUE,
  [2039] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(284), 1,
      sym_IDENT,
    ACTIONS(287), 1,
      anon_sym_SLASH_COLON,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    STATE(56), 3,
      sym_DYNAMIC_PATH,
      sym_COMMON_PATH,
      aux_sym_PATH_repeat1,
  [2060] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_SLASH_COLON,
    ACTIONS(171), 1,
      anon_sym_SLASH,
    ACTIONS(293), 1,
      sym_IDENT,
    STATE(58), 1,
      sym_PATH,
    STATE(31), 3,
      sym_DYNAMIC_PATH,
      sym_COMMON_PATH,
      aux_sym_PATH_repeat1,
  [2081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
      anon_sym_returns,
      anon_sym_SEMI,
  [2094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
  [2107] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      anon_sym_returns,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    ACTIONS(301), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
  [2139] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    ACTIONS(202), 1,
      anon_sym_SLASH_COLON,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    ACTIONS(309), 1,
      sym_IDENT,
    STATE(56), 3,
      sym_DYNAMIC_PATH,
      sym_COMMON_PATH,
      aux_sym_PATH_repeat1,
  [2160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
  [2173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(93), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2259] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    ACTIONS(328), 1,
      sym_IDENT,
    STATE(13), 1,
      sym_structNameId,
    STATE(71), 3,
      sym_typeGroupAlias,
      sym_structType,
      aux_sym_typeGroupSpec_repeat1,
  [2277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2289] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_VALUE,
    ACTIONS(335), 1,
      sym_IDENT,
    STATE(123), 1,
      aux_sym_pair_repeat1,
    STATE(185), 1,
      sym_docValue,
    STATE(186), 1,
      sym_pair,
    STATE(199), 1,
      sym_key,
  [2311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2371] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(349), 1,
      sym_IDENT,
    STATE(13), 1,
      sym_structNameId,
    STATE(71), 3,
      sym_typeGroupAlias,
      sym_structType,
      aux_sym_typeGroupSpec_repeat1,
  [2389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2401] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_IDENT,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_structNameId,
    STATE(79), 3,
      sym_typeGroupAlias,
      sym_structType,
      aux_sym_typeGroupSpec_repeat1,
  [2419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_returns,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    ACTIONS(355), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_returns,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    ACTIONS(367), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_RAW_STRING,
    STATE(136), 1,
      sym_tag,
    ACTIONS(383), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 5,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_RAW_STRING,
      sym_IDENT,
  [2595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 5,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_RAW_STRING,
      sym_IDENT,
  [2606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    ACTIONS(355), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 5,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_RAW_STRING,
      sym_IDENT,
  [2630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_SEMI,
    ACTIONS(393), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_SEMI,
    ACTIONS(397), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2656] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_SLASH_COLON,
    ACTIONS(408), 1,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [2673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 5,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_RAW_STRING,
      sym_IDENT,
  [2684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_SEMI,
    ACTIONS(412), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    ACTIONS(416), 1,
      sym_IDENT,
    ACTIONS(419), 1,
      sym_NUMBER,
    ACTIONS(218), 2,
      anon_sym_RPAREN,
      anon_sym_SLASH_COLON,
  [2714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(421), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2749] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_IDENT,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_identPair_repeat1,
    STATE(196), 1,
      sym_key,
  [2765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(429), 1,
      sym_VALUE,
    STATE(111), 2,
      sym_importValue,
      aux_sym_importGroup_repeat1,
  [2779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    ACTIONS(433), 1,
      sym_IDENT,
    STATE(110), 1,
      aux_sym_pair_repeat1,
    STATE(199), 1,
      sym_key,
  [2795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_VALUE,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(131), 2,
      sym_importValue,
      aux_sym_importGroup_repeat1,
  [2809] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_IDENT,
    STATE(133), 1,
      aux_sym_handlerPair_repeat1,
    STATE(169), 1,
      sym_handlerPair,
    STATE(178), 1,
      sym_key,
  [2825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2885] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_IDENT,
    STATE(108), 1,
      aux_sym_identPair_repeat1,
    STATE(167), 1,
      sym_identPair,
    STATE(196), 1,
      sym_key,
  [2901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2911] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_IDENT,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_structNameId,
    STATE(76), 1,
      sym_structType,
  [2927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2937] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_IDENT,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_pair_repeat1,
    STATE(199), 1,
      sym_key,
  [2953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2963] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    ACTIONS(448), 1,
      sym_IDENT,
    STATE(125), 1,
      aux_sym_identPair_repeat1,
    STATE(196), 1,
      sym_key,
  [2979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_ATserver,
    ACTIONS(233), 1,
      anon_sym_AThandler,
    STATE(141), 2,
      sym_serviceHandler,
      sym_serviceHandlerNew,
  [3003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_SLASH,
    ACTIONS(258), 3,
      anon_sym_RPAREN,
      sym_IDENT,
      anon_sym_SLASH_COLON,
  [3015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(262), 3,
      anon_sym_RPAREN,
      sym_IDENT,
      anon_sym_SLASH_COLON,
  [3027] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    ACTIONS(453), 1,
      sym_IDENT,
    STATE(130), 1,
      aux_sym_handlerPair_repeat1,
    STATE(178), 1,
      sym_key,
  [3043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    ACTIONS(458), 1,
      sym_VALUE,
    STATE(131), 2,
      sym_importValue,
      aux_sym_importGroup_repeat1,
  [3057] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_IDENT,
    STATE(123), 1,
      aux_sym_pair_repeat1,
    STATE(199), 1,
      sym_key,
    STATE(200), 1,
      sym_pair,
  [3073] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_IDENT,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_handlerPair_repeat1,
    STATE(178), 1,
      sym_key,
  [3089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [3099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [3109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [3118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_VALUE,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      sym_docValue,
  [3131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    ACTIONS(473), 1,
      sym_IDENT,
    STATE(140), 1,
      aux_sym_identValue_repeat1,
  [3144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 3,
      anon_sym_RPAREN,
      anon_sym_ATserver,
      anon_sym_AThandler,
  [3153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    ACTIONS(480), 1,
      sym_IDENT,
    STATE(140), 1,
      aux_sym_identValue_repeat1,
  [3166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_HTTPMETHOD,
    STATE(60), 1,
      sym_httpRoute,
    STATE(134), 1,
      sym_serviceRoute,
  [3179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [3188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_VALUE,
    ACTIONS(431), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [3208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_HTTPMETHOD,
    STATE(60), 1,
      sym_httpRoute,
    STATE(116), 1,
      sym_serviceRoute,
  [3221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(491), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [3241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [3250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_VALUE,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_importValue,
  [3263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_service,
    STATE(74), 1,
      sym_serviceSpec,
  [3273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_IDENT,
    STATE(180), 1,
      sym_handlerValue,
  [3283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
    ACTIONS(503), 1,
      sym_NUMBER,
  [3301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_IDENT,
    STATE(203), 1,
      sym_serviceName,
  [3311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_IDENT,
    STATE(160), 1,
      sym_handlerValue,
  [3329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(511), 1,
      anon_sym_struct,
  [3339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 2,
      anon_sym_ATserver,
      anon_sym_AThandler,
  [3379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_IDENT,
    STATE(144), 1,
      sym_referenceId,
  [3389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 2,
      anon_sym_ATserver,
      anon_sym_AThandler,
  [3397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_ATserver,
      anon_sym_AThandler,
  [3413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
  [3420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
  [3427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
  [3434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
  [3441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
  [3448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
  [3455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
  [3462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
  [3469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
  [3476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
  [3483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
  [3490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COLON,
  [3497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
  [3504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym_HTTPMETHOD,
  [3511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
  [3518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
  [3525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_HTTPMETHOD,
  [3532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
  [3539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
  [3546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
  [3553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_HTTPMETHOD,
  [3560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
  [3567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_EQ,
  [3574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_IDENT,
  [3581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_LBRACK,
  [3588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
  [3595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_service,
  [3602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_IDENT,
  [3609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
  [3616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_COLON,
  [3623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LBRACE,
  [3630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
  [3637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COLON,
  [3644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [3651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_COLON,
  [3658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_IDENT,
  [3665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
  [3672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
  [3679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_RBRACE,
  [3686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym_VALUE,
  [3693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      ts_builtin_sym_end,
  [3700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym_IDENT,
  [3707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
  [3714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym_IDENT,
  [3721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_RBRACK,
  [3728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
  [3735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
  [3742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
  [3749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 236,
  [SMALL_STATE(7)] = 295,
  [SMALL_STATE(8)] = 354,
  [SMALL_STATE(9)] = 413,
  [SMALL_STATE(10)] = 472,
  [SMALL_STATE(11)] = 531,
  [SMALL_STATE(12)] = 580,
  [SMALL_STATE(13)] = 630,
  [SMALL_STATE(14)] = 677,
  [SMALL_STATE(15)] = 723,
  [SMALL_STATE(16)] = 769,
  [SMALL_STATE(17)] = 815,
  [SMALL_STATE(18)] = 861,
  [SMALL_STATE(19)] = 894,
  [SMALL_STATE(20)] = 935,
  [SMALL_STATE(21)] = 976,
  [SMALL_STATE(22)] = 1009,
  [SMALL_STATE(23)] = 1042,
  [SMALL_STATE(24)] = 1083,
  [SMALL_STATE(25)] = 1120,
  [SMALL_STATE(26)] = 1174,
  [SMALL_STATE(27)] = 1208,
  [SMALL_STATE(28)] = 1262,
  [SMALL_STATE(29)] = 1316,
  [SMALL_STATE(30)] = 1350,
  [SMALL_STATE(31)] = 1404,
  [SMALL_STATE(32)] = 1433,
  [SMALL_STATE(33)] = 1462,
  [SMALL_STATE(34)] = 1493,
  [SMALL_STATE(35)] = 1524,
  [SMALL_STATE(36)] = 1555,
  [SMALL_STATE(37)] = 1586,
  [SMALL_STATE(38)] = 1617,
  [SMALL_STATE(39)] = 1646,
  [SMALL_STATE(40)] = 1677,
  [SMALL_STATE(41)] = 1708,
  [SMALL_STATE(42)] = 1739,
  [SMALL_STATE(43)] = 1770,
  [SMALL_STATE(44)] = 1793,
  [SMALL_STATE(45)] = 1821,
  [SMALL_STATE(46)] = 1849,
  [SMALL_STATE(47)] = 1877,
  [SMALL_STATE(48)] = 1899,
  [SMALL_STATE(49)] = 1921,
  [SMALL_STATE(50)] = 1939,
  [SMALL_STATE(51)] = 1957,
  [SMALL_STATE(52)] = 1974,
  [SMALL_STATE(53)] = 1995,
  [SMALL_STATE(54)] = 2009,
  [SMALL_STATE(55)] = 2025,
  [SMALL_STATE(56)] = 2039,
  [SMALL_STATE(57)] = 2060,
  [SMALL_STATE(58)] = 2081,
  [SMALL_STATE(59)] = 2094,
  [SMALL_STATE(60)] = 2107,
  [SMALL_STATE(61)] = 2126,
  [SMALL_STATE(62)] = 2139,
  [SMALL_STATE(63)] = 2160,
  [SMALL_STATE(64)] = 2173,
  [SMALL_STATE(65)] = 2185,
  [SMALL_STATE(66)] = 2197,
  [SMALL_STATE(67)] = 2209,
  [SMALL_STATE(68)] = 2223,
  [SMALL_STATE(69)] = 2235,
  [SMALL_STATE(70)] = 2247,
  [SMALL_STATE(71)] = 2259,
  [SMALL_STATE(72)] = 2277,
  [SMALL_STATE(73)] = 2289,
  [SMALL_STATE(74)] = 2311,
  [SMALL_STATE(75)] = 2323,
  [SMALL_STATE(76)] = 2335,
  [SMALL_STATE(77)] = 2347,
  [SMALL_STATE(78)] = 2359,
  [SMALL_STATE(79)] = 2371,
  [SMALL_STATE(80)] = 2389,
  [SMALL_STATE(81)] = 2401,
  [SMALL_STATE(82)] = 2419,
  [SMALL_STATE(83)] = 2435,
  [SMALL_STATE(84)] = 2447,
  [SMALL_STATE(85)] = 2459,
  [SMALL_STATE(86)] = 2471,
  [SMALL_STATE(87)] = 2487,
  [SMALL_STATE(88)] = 2499,
  [SMALL_STATE(89)] = 2511,
  [SMALL_STATE(90)] = 2523,
  [SMALL_STATE(91)] = 2535,
  [SMALL_STATE(92)] = 2547,
  [SMALL_STATE(93)] = 2558,
  [SMALL_STATE(94)] = 2569,
  [SMALL_STATE(95)] = 2584,
  [SMALL_STATE(96)] = 2595,
  [SMALL_STATE(97)] = 2606,
  [SMALL_STATE(98)] = 2619,
  [SMALL_STATE(99)] = 2630,
  [SMALL_STATE(100)] = 2643,
  [SMALL_STATE(101)] = 2656,
  [SMALL_STATE(102)] = 2673,
  [SMALL_STATE(103)] = 2684,
  [SMALL_STATE(104)] = 2697,
  [SMALL_STATE(105)] = 2714,
  [SMALL_STATE(106)] = 2725,
  [SMALL_STATE(107)] = 2738,
  [SMALL_STATE(108)] = 2749,
  [SMALL_STATE(109)] = 2765,
  [SMALL_STATE(110)] = 2779,
  [SMALL_STATE(111)] = 2795,
  [SMALL_STATE(112)] = 2809,
  [SMALL_STATE(113)] = 2825,
  [SMALL_STATE(114)] = 2835,
  [SMALL_STATE(115)] = 2845,
  [SMALL_STATE(116)] = 2855,
  [SMALL_STATE(117)] = 2865,
  [SMALL_STATE(118)] = 2875,
  [SMALL_STATE(119)] = 2885,
  [SMALL_STATE(120)] = 2901,
  [SMALL_STATE(121)] = 2911,
  [SMALL_STATE(122)] = 2927,
  [SMALL_STATE(123)] = 2937,
  [SMALL_STATE(124)] = 2953,
  [SMALL_STATE(125)] = 2963,
  [SMALL_STATE(126)] = 2979,
  [SMALL_STATE(127)] = 2989,
  [SMALL_STATE(128)] = 3003,
  [SMALL_STATE(129)] = 3015,
  [SMALL_STATE(130)] = 3027,
  [SMALL_STATE(131)] = 3043,
  [SMALL_STATE(132)] = 3057,
  [SMALL_STATE(133)] = 3073,
  [SMALL_STATE(134)] = 3089,
  [SMALL_STATE(135)] = 3099,
  [SMALL_STATE(136)] = 3109,
  [SMALL_STATE(137)] = 3118,
  [SMALL_STATE(138)] = 3131,
  [SMALL_STATE(139)] = 3144,
  [SMALL_STATE(140)] = 3153,
  [SMALL_STATE(141)] = 3166,
  [SMALL_STATE(142)] = 3179,
  [SMALL_STATE(143)] = 3188,
  [SMALL_STATE(144)] = 3199,
  [SMALL_STATE(145)] = 3208,
  [SMALL_STATE(146)] = 3221,
  [SMALL_STATE(147)] = 3232,
  [SMALL_STATE(148)] = 3241,
  [SMALL_STATE(149)] = 3250,
  [SMALL_STATE(150)] = 3263,
  [SMALL_STATE(151)] = 3273,
  [SMALL_STATE(152)] = 3283,
  [SMALL_STATE(153)] = 3291,
  [SMALL_STATE(154)] = 3301,
  [SMALL_STATE(155)] = 3311,
  [SMALL_STATE(156)] = 3319,
  [SMALL_STATE(157)] = 3329,
  [SMALL_STATE(158)] = 3339,
  [SMALL_STATE(159)] = 3347,
  [SMALL_STATE(160)] = 3355,
  [SMALL_STATE(161)] = 3363,
  [SMALL_STATE(162)] = 3371,
  [SMALL_STATE(163)] = 3379,
  [SMALL_STATE(164)] = 3389,
  [SMALL_STATE(165)] = 3397,
  [SMALL_STATE(166)] = 3405,
  [SMALL_STATE(167)] = 3413,
  [SMALL_STATE(168)] = 3420,
  [SMALL_STATE(169)] = 3427,
  [SMALL_STATE(170)] = 3434,
  [SMALL_STATE(171)] = 3441,
  [SMALL_STATE(172)] = 3448,
  [SMALL_STATE(173)] = 3455,
  [SMALL_STATE(174)] = 3462,
  [SMALL_STATE(175)] = 3469,
  [SMALL_STATE(176)] = 3476,
  [SMALL_STATE(177)] = 3483,
  [SMALL_STATE(178)] = 3490,
  [SMALL_STATE(179)] = 3497,
  [SMALL_STATE(180)] = 3504,
  [SMALL_STATE(181)] = 3511,
  [SMALL_STATE(182)] = 3518,
  [SMALL_STATE(183)] = 3525,
  [SMALL_STATE(184)] = 3532,
  [SMALL_STATE(185)] = 3539,
  [SMALL_STATE(186)] = 3546,
  [SMALL_STATE(187)] = 3553,
  [SMALL_STATE(188)] = 3560,
  [SMALL_STATE(189)] = 3567,
  [SMALL_STATE(190)] = 3574,
  [SMALL_STATE(191)] = 3581,
  [SMALL_STATE(192)] = 3588,
  [SMALL_STATE(193)] = 3595,
  [SMALL_STATE(194)] = 3602,
  [SMALL_STATE(195)] = 3609,
  [SMALL_STATE(196)] = 3616,
  [SMALL_STATE(197)] = 3623,
  [SMALL_STATE(198)] = 3630,
  [SMALL_STATE(199)] = 3637,
  [SMALL_STATE(200)] = 3644,
  [SMALL_STATE(201)] = 3651,
  [SMALL_STATE(202)] = 3658,
  [SMALL_STATE(203)] = 3665,
  [SMALL_STATE(204)] = 3672,
  [SMALL_STATE(205)] = 3679,
  [SMALL_STATE(206)] = 3686,
  [SMALL_STATE(207)] = 3693,
  [SMALL_STATE(208)] = 3700,
  [SMALL_STATE(209)] = 3707,
  [SMALL_STATE(210)] = 3714,
  [SMALL_STATE(211)] = 3721,
  [SMALL_STATE(212)] = 3728,
  [SMALL_STATE(213)] = 3735,
  [SMALL_STATE(214)] = 3742,
  [SMALL_STATE(215)] = 3749,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(53),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(53),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(23),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(198),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(215),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(153),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(54),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(107),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(107),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(19),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(212),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(191),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(67),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldName, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 1, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_fieldName, 1, 0, 0), REDUCE(sym_referenceId, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structNameId, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referenceId, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structNameId, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_fieldName, 1, 0, 0), REDUCE(sym_referenceId, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PATH, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PATH, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structType_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structType_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structType_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_COMMON_PATH, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_COMMON_PATH, 1, 0, 0),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_COMMON_PATH, 1, 0, 0), SHIFT(50),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_serviceSpec_repeat1, 2, 0, 0),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_serviceSpec_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_serviceSpec_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_serviceSpec_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importStatement, 1, 0, 0),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_importStatement, 1, 0, 0), SHIFT(149),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_importStatement_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_importStatement_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DYNAMIC_PATH, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DYNAMIC_PATH, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_COMMON_PATH, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_COMMON_PATH, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importValue, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identPair_repeat1, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identPair_repeat1, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GOTYPE, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importValue, 3, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_httpRoute, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalFieldType, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalFieldType, 3, 0, 0),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_PATH, 1, 0, 0), SHIFT(56),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referenceId, 3, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceSpec, 4, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeSingleSpec, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infoStatement, 4, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceSpec, 5, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importGroup, 3, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeGroupSpec, 4, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typeGroupSpec_repeat1, 2, 0, 0),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typeGroupSpec_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeAlias, 4, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceStatement, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structType, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeStruct, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeGroupSpec, 3, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importSpec, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structType, 4, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 4, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apiBody, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeStatement, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntaxLit, 3, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importGroup, 4, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceStatement, 1, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importLit, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structType, 5, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeAlias, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalField, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldType, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrayOrSliceType, 2, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapFieldType, 5, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 5, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 6, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identValue_repeat1, 1, 0, 0), REDUCE(aux_sym_PATH_repeat1, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_PATH_repeat1, 1, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_PATH_repeat1, 1, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_starFieldType, 2, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 7, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_COMMON_PATH, 1, 0, 0), SHIFT(129),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 8, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identPair, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 2, 0, 0),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 9, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceBody, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 1, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identPair_repeat1, 2, 0, 0),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identPair_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_handlerPair_repeat1, 2, 0, 0),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_handlerPair_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_importGroup_repeat1, 2, 0, 0),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_importGroup_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handlerPair, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceBody, 3, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalField, 3, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identValue, 1, 0, 0),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identValue, 1, 0, 0), SHIFT(146),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docValue, 1, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identValue_repeat1, 2, 0, 0),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identValue_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFiled, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymousField, 2, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identValue_repeat1, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymousField, 1, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handlerValue, 1, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DURATION, 2, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_handlerPair_repeat1, 3, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 3, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceDoc, 4, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceDocNew, 2, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeGroupAlias, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceDocNew, 4, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceHandlerNew, 2, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceHandler, 4, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceServerSpec, 4, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceName, 1, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [605] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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

TS_PUBLIC const TSLanguage *tree_sitter_goctl(void) {
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
