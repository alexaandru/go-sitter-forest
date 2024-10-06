#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 334
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_Name = 1,
  anon_sym_LT_BANG_LBRACK = 2,
  anon_sym_IGNORE = 3,
  anon_sym_INCLUDE = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK_RBRACK_GT = 6,
  anon_sym_LT_BANG = 7,
  anon_sym_ELEMENT = 8,
  anon_sym_GT = 9,
  anon_sym_EMPTY = 10,
  anon_sym_ANY = 11,
  anon_sym_LPAREN = 12,
  anon_sym_POUNDPCDATA = 13,
  anon_sym_PIPE = 14,
  anon_sym_RPAREN = 15,
  anon_sym_STAR = 16,
  anon_sym_QMARK = 17,
  anon_sym_PLUS = 18,
  anon_sym_COMMA = 19,
  anon_sym_ATTLIST = 20,
  sym_StringType = 21,
  sym_TokenizedType = 22,
  anon_sym_NOTATION = 23,
  anon_sym_POUNDREQUIRED = 24,
  anon_sym_POUNDIMPLIED = 25,
  anon_sym_POUNDFIXED = 26,
  anon_sym_ENTITY = 27,
  anon_sym_PERCENT = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_EntityValue_token1 = 30,
  anon_sym_SQUOTE = 31,
  aux_sym_EntityValue_token2 = 32,
  anon_sym_NDATA = 33,
  anon_sym_SEMI = 34,
  sym__S = 35,
  sym_Nmtoken = 36,
  anon_sym_AMP = 37,
  anon_sym_AMP_POUND = 38,
  aux_sym_CharRef_token1 = 39,
  anon_sym_AMP_POUNDx = 40,
  aux_sym_CharRef_token2 = 41,
  aux_sym_AttValue_token1 = 42,
  aux_sym_AttValue_token2 = 43,
  anon_sym_SYSTEM = 44,
  anon_sym_PUBLIC = 45,
  aux_sym_SystemLiteral_token1 = 46,
  aux_sym_SystemLiteral_token2 = 47,
  aux_sym_PubidLiteral_token1 = 48,
  aux_sym_PubidLiteral_token2 = 49,
  anon_sym_LT_QMARK = 50,
  anon_sym_xml = 51,
  anon_sym_QMARK_GT = 52,
  anon_sym_version = 53,
  sym_VersionNum = 54,
  anon_sym_encoding = 55,
  sym_EncName = 56,
  anon_sym_EQ = 57,
  sym_PITarget = 58,
  sym__pi_content = 59,
  sym_Comment = 60,
  sym_document = 61,
  sym__extSubsetDecl = 62,
  sym_conditionalSect = 63,
  sym__markupdecl = 64,
  sym__DeclSep = 65,
  sym_elementdecl = 66,
  sym_contentspec = 67,
  sym_Mixed = 68,
  sym_children = 69,
  sym__cp = 70,
  sym__choice = 71,
  sym_AttlistDecl = 72,
  sym_AttDef = 73,
  sym__AttType = 74,
  sym__EnumeratedType = 75,
  sym_NotationType = 76,
  sym_Enumeration = 77,
  sym_DefaultDecl = 78,
  sym__EntityDecl = 79,
  sym_GEDecl = 80,
  sym_PEDecl = 81,
  sym_EntityValue = 82,
  sym_NDataDecl = 83,
  sym_NotationDecl = 84,
  sym_PEReference = 85,
  sym__Reference = 86,
  sym_EntityRef = 87,
  sym_CharRef = 88,
  sym_AttValue = 89,
  sym_ExternalID = 90,
  sym_PublicID = 91,
  sym_SystemLiteral = 92,
  sym_PubidLiteral = 93,
  sym_XMLDecl = 94,
  sym__VersionInfo = 95,
  sym__EncodingDecl = 96,
  sym_PI = 97,
  sym__Eq = 98,
  aux_sym_document_repeat1 = 99,
  aux_sym_Mixed_repeat1 = 100,
  aux_sym_Mixed_repeat2 = 101,
  aux_sym__choice_repeat1 = 102,
  aux_sym__choice_repeat2 = 103,
  aux_sym_AttlistDecl_repeat1 = 104,
  aux_sym_NotationType_repeat1 = 105,
  aux_sym_Enumeration_repeat1 = 106,
  aux_sym_EntityValue_repeat1 = 107,
  aux_sym_EntityValue_repeat2 = 108,
  aux_sym_AttValue_repeat1 = 109,
  aux_sym_AttValue_repeat2 = 110,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_Name] = "Name",
  [anon_sym_LT_BANG_LBRACK] = "<![",
  [anon_sym_IGNORE] = "IGNORE",
  [anon_sym_INCLUDE] = "INCLUDE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK_RBRACK_GT] = "]]>",
  [anon_sym_LT_BANG] = "<!",
  [anon_sym_ELEMENT] = "ELEMENT",
  [anon_sym_GT] = ">",
  [anon_sym_EMPTY] = "EMPTY",
  [anon_sym_ANY] = "ANY",
  [anon_sym_LPAREN] = "(",
  [anon_sym_POUNDPCDATA] = "#PCDATA",
  [anon_sym_PIPE] = "|",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "\?",
  [anon_sym_PLUS] = "+",
  [anon_sym_COMMA] = ",",
  [anon_sym_ATTLIST] = "ATTLIST",
  [sym_StringType] = "StringType",
  [sym_TokenizedType] = "TokenizedType",
  [anon_sym_NOTATION] = "NOTATION",
  [anon_sym_POUNDREQUIRED] = "#REQUIRED",
  [anon_sym_POUNDIMPLIED] = "#IMPLIED",
  [anon_sym_POUNDFIXED] = "#FIXED",
  [anon_sym_ENTITY] = "ENTITY",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_EntityValue_token1] = "EntityValue_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_EntityValue_token2] = "EntityValue_token2",
  [anon_sym_NDATA] = "NDATA",
  [anon_sym_SEMI] = ";",
  [sym__S] = "_S",
  [sym_Nmtoken] = "Nmtoken",
  [anon_sym_AMP] = "&",
  [anon_sym_AMP_POUND] = "&#",
  [aux_sym_CharRef_token1] = "CharRef_token1",
  [anon_sym_AMP_POUNDx] = "&#x",
  [aux_sym_CharRef_token2] = "CharRef_token2",
  [aux_sym_AttValue_token1] = "AttValue_token1",
  [aux_sym_AttValue_token2] = "AttValue_token2",
  [anon_sym_SYSTEM] = "SYSTEM",
  [anon_sym_PUBLIC] = "PUBLIC",
  [aux_sym_SystemLiteral_token1] = "URI",
  [aux_sym_SystemLiteral_token2] = "URI",
  [aux_sym_PubidLiteral_token1] = "PubidLiteral_token1",
  [aux_sym_PubidLiteral_token2] = "PubidLiteral_token2",
  [anon_sym_LT_QMARK] = "<\?",
  [anon_sym_xml] = "xml",
  [anon_sym_QMARK_GT] = "\?>",
  [anon_sym_version] = "version",
  [sym_VersionNum] = "VersionNum",
  [anon_sym_encoding] = "encoding",
  [sym_EncName] = "EncName",
  [anon_sym_EQ] = "=",
  [sym_PITarget] = "PITarget",
  [sym__pi_content] = "_pi_content",
  [sym_Comment] = "Comment",
  [sym_document] = "document",
  [sym__extSubsetDecl] = "_extSubsetDecl",
  [sym_conditionalSect] = "conditionalSect",
  [sym__markupdecl] = "_markupdecl",
  [sym__DeclSep] = "_DeclSep",
  [sym_elementdecl] = "elementdecl",
  [sym_contentspec] = "contentspec",
  [sym_Mixed] = "Mixed",
  [sym_children] = "children",
  [sym__cp] = "_cp",
  [sym__choice] = "_choice",
  [sym_AttlistDecl] = "AttlistDecl",
  [sym_AttDef] = "AttDef",
  [sym__AttType] = "_AttType",
  [sym__EnumeratedType] = "_EnumeratedType",
  [sym_NotationType] = "NotationType",
  [sym_Enumeration] = "Enumeration",
  [sym_DefaultDecl] = "DefaultDecl",
  [sym__EntityDecl] = "_EntityDecl",
  [sym_GEDecl] = "GEDecl",
  [sym_PEDecl] = "PEDecl",
  [sym_EntityValue] = "EntityValue",
  [sym_NDataDecl] = "NDataDecl",
  [sym_NotationDecl] = "NotationDecl",
  [sym_PEReference] = "PEReference",
  [sym__Reference] = "_Reference",
  [sym_EntityRef] = "EntityRef",
  [sym_CharRef] = "CharRef",
  [sym_AttValue] = "AttValue",
  [sym_ExternalID] = "ExternalID",
  [sym_PublicID] = "PublicID",
  [sym_SystemLiteral] = "SystemLiteral",
  [sym_PubidLiteral] = "PubidLiteral",
  [sym_XMLDecl] = "XMLDecl",
  [sym__VersionInfo] = "_VersionInfo",
  [sym__EncodingDecl] = "_EncodingDecl",
  [sym_PI] = "PI",
  [sym__Eq] = "_Eq",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_Mixed_repeat1] = "Mixed_repeat1",
  [aux_sym_Mixed_repeat2] = "Mixed_repeat2",
  [aux_sym__choice_repeat1] = "_choice_repeat1",
  [aux_sym__choice_repeat2] = "_choice_repeat2",
  [aux_sym_AttlistDecl_repeat1] = "AttlistDecl_repeat1",
  [aux_sym_NotationType_repeat1] = "NotationType_repeat1",
  [aux_sym_Enumeration_repeat1] = "Enumeration_repeat1",
  [aux_sym_EntityValue_repeat1] = "EntityValue_repeat1",
  [aux_sym_EntityValue_repeat2] = "EntityValue_repeat2",
  [aux_sym_AttValue_repeat1] = "AttValue_repeat1",
  [aux_sym_AttValue_repeat2] = "AttValue_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_Name] = sym_Name,
  [anon_sym_LT_BANG_LBRACK] = anon_sym_LT_BANG_LBRACK,
  [anon_sym_IGNORE] = anon_sym_IGNORE,
  [anon_sym_INCLUDE] = anon_sym_INCLUDE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK_RBRACK_GT] = anon_sym_RBRACK_RBRACK_GT,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [anon_sym_ELEMENT] = anon_sym_ELEMENT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EMPTY] = anon_sym_EMPTY,
  [anon_sym_ANY] = anon_sym_ANY,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_POUNDPCDATA] = anon_sym_POUNDPCDATA,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_ATTLIST] = anon_sym_ATTLIST,
  [sym_StringType] = sym_StringType,
  [sym_TokenizedType] = sym_TokenizedType,
  [anon_sym_NOTATION] = anon_sym_NOTATION,
  [anon_sym_POUNDREQUIRED] = anon_sym_POUNDREQUIRED,
  [anon_sym_POUNDIMPLIED] = anon_sym_POUNDIMPLIED,
  [anon_sym_POUNDFIXED] = anon_sym_POUNDFIXED,
  [anon_sym_ENTITY] = anon_sym_ENTITY,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_EntityValue_token1] = aux_sym_EntityValue_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_EntityValue_token2] = aux_sym_EntityValue_token2,
  [anon_sym_NDATA] = anon_sym_NDATA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__S] = sym__S,
  [sym_Nmtoken] = sym_Nmtoken,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_AMP_POUND] = anon_sym_AMP_POUND,
  [aux_sym_CharRef_token1] = aux_sym_CharRef_token1,
  [anon_sym_AMP_POUNDx] = anon_sym_AMP_POUNDx,
  [aux_sym_CharRef_token2] = aux_sym_CharRef_token2,
  [aux_sym_AttValue_token1] = aux_sym_AttValue_token1,
  [aux_sym_AttValue_token2] = aux_sym_AttValue_token2,
  [anon_sym_SYSTEM] = anon_sym_SYSTEM,
  [anon_sym_PUBLIC] = anon_sym_PUBLIC,
  [aux_sym_SystemLiteral_token1] = aux_sym_SystemLiteral_token1,
  [aux_sym_SystemLiteral_token2] = aux_sym_SystemLiteral_token1,
  [aux_sym_PubidLiteral_token1] = aux_sym_PubidLiteral_token1,
  [aux_sym_PubidLiteral_token2] = aux_sym_PubidLiteral_token2,
  [anon_sym_LT_QMARK] = anon_sym_LT_QMARK,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [anon_sym_version] = anon_sym_version,
  [sym_VersionNum] = sym_VersionNum,
  [anon_sym_encoding] = anon_sym_encoding,
  [sym_EncName] = sym_EncName,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_PITarget] = sym_PITarget,
  [sym__pi_content] = sym__pi_content,
  [sym_Comment] = sym_Comment,
  [sym_document] = sym_document,
  [sym__extSubsetDecl] = sym__extSubsetDecl,
  [sym_conditionalSect] = sym_conditionalSect,
  [sym__markupdecl] = sym__markupdecl,
  [sym__DeclSep] = sym__DeclSep,
  [sym_elementdecl] = sym_elementdecl,
  [sym_contentspec] = sym_contentspec,
  [sym_Mixed] = sym_Mixed,
  [sym_children] = sym_children,
  [sym__cp] = sym__cp,
  [sym__choice] = sym__choice,
  [sym_AttlistDecl] = sym_AttlistDecl,
  [sym_AttDef] = sym_AttDef,
  [sym__AttType] = sym__AttType,
  [sym__EnumeratedType] = sym__EnumeratedType,
  [sym_NotationType] = sym_NotationType,
  [sym_Enumeration] = sym_Enumeration,
  [sym_DefaultDecl] = sym_DefaultDecl,
  [sym__EntityDecl] = sym__EntityDecl,
  [sym_GEDecl] = sym_GEDecl,
  [sym_PEDecl] = sym_PEDecl,
  [sym_EntityValue] = sym_EntityValue,
  [sym_NDataDecl] = sym_NDataDecl,
  [sym_NotationDecl] = sym_NotationDecl,
  [sym_PEReference] = sym_PEReference,
  [sym__Reference] = sym__Reference,
  [sym_EntityRef] = sym_EntityRef,
  [sym_CharRef] = sym_CharRef,
  [sym_AttValue] = sym_AttValue,
  [sym_ExternalID] = sym_ExternalID,
  [sym_PublicID] = sym_PublicID,
  [sym_SystemLiteral] = sym_SystemLiteral,
  [sym_PubidLiteral] = sym_PubidLiteral,
  [sym_XMLDecl] = sym_XMLDecl,
  [sym__VersionInfo] = sym__VersionInfo,
  [sym__EncodingDecl] = sym__EncodingDecl,
  [sym_PI] = sym_PI,
  [sym__Eq] = sym__Eq,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_Mixed_repeat1] = aux_sym_Mixed_repeat1,
  [aux_sym_Mixed_repeat2] = aux_sym_Mixed_repeat2,
  [aux_sym__choice_repeat1] = aux_sym__choice_repeat1,
  [aux_sym__choice_repeat2] = aux_sym__choice_repeat2,
  [aux_sym_AttlistDecl_repeat1] = aux_sym_AttlistDecl_repeat1,
  [aux_sym_NotationType_repeat1] = aux_sym_NotationType_repeat1,
  [aux_sym_Enumeration_repeat1] = aux_sym_Enumeration_repeat1,
  [aux_sym_EntityValue_repeat1] = aux_sym_EntityValue_repeat1,
  [aux_sym_EntityValue_repeat2] = aux_sym_EntityValue_repeat2,
  [aux_sym_AttValue_repeat1] = aux_sym_AttValue_repeat1,
  [aux_sym_AttValue_repeat2] = aux_sym_AttValue_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_Name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_BANG_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IGNORE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INCLUDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELEMENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EMPTY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDPCDATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATTLIST] = {
    .visible = true,
    .named = false,
  },
  [sym_StringType] = {
    .visible = true,
    .named = true,
  },
  [sym_TokenizedType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NOTATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDREQUIRED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDIMPLIED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDFIXED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENTITY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_EntityValue_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_EntityValue_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_NDATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__S] = {
    .visible = false,
    .named = true,
  },
  [sym_Nmtoken] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CharRef_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AMP_POUNDx] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CharRef_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttValue_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttValue_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SYSTEM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUBLIC] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SystemLiteral_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SystemLiteral_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_PubidLiteral_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_PubidLiteral_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [sym_VersionNum] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_encoding] = {
    .visible = true,
    .named = false,
  },
  [sym_EncName] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_PITarget] = {
    .visible = true,
    .named = true,
  },
  [sym__pi_content] = {
    .visible = false,
    .named = true,
  },
  [sym_Comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__extSubsetDecl] = {
    .visible = false,
    .named = true,
  },
  [sym_conditionalSect] = {
    .visible = true,
    .named = true,
  },
  [sym__markupdecl] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__DeclSep] = {
    .visible = false,
    .named = true,
  },
  [sym_elementdecl] = {
    .visible = true,
    .named = true,
  },
  [sym_contentspec] = {
    .visible = true,
    .named = true,
  },
  [sym_Mixed] = {
    .visible = true,
    .named = true,
  },
  [sym_children] = {
    .visible = true,
    .named = true,
  },
  [sym__cp] = {
    .visible = false,
    .named = true,
  },
  [sym__choice] = {
    .visible = false,
    .named = true,
  },
  [sym_AttlistDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_AttDef] = {
    .visible = true,
    .named = true,
  },
  [sym__AttType] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__EnumeratedType] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_NotationType] = {
    .visible = true,
    .named = true,
  },
  [sym_Enumeration] = {
    .visible = true,
    .named = true,
  },
  [sym_DefaultDecl] = {
    .visible = true,
    .named = true,
  },
  [sym__EntityDecl] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_GEDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_PEDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_EntityValue] = {
    .visible = true,
    .named = true,
  },
  [sym_NDataDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_NotationDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_PEReference] = {
    .visible = true,
    .named = true,
  },
  [sym__Reference] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_EntityRef] = {
    .visible = true,
    .named = true,
  },
  [sym_CharRef] = {
    .visible = true,
    .named = true,
  },
  [sym_AttValue] = {
    .visible = true,
    .named = true,
  },
  [sym_ExternalID] = {
    .visible = true,
    .named = true,
  },
  [sym_PublicID] = {
    .visible = true,
    .named = true,
  },
  [sym_SystemLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_PubidLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_XMLDecl] = {
    .visible = true,
    .named = true,
  },
  [sym__VersionInfo] = {
    .visible = false,
    .named = true,
  },
  [sym__EncodingDecl] = {
    .visible = false,
    .named = true,
  },
  [sym_PI] = {
    .visible = true,
    .named = true,
  },
  [sym__Eq] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Mixed_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Mixed_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__choice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__choice_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttlistDecl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_NotationType_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Enumeration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_EntityValue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_EntityValue_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttValue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttValue_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_content = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
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
  [43] = 12,
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
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 79,
  [88] = 72,
  [89] = 77,
  [90] = 12,
  [91] = 12,
  [92] = 92,
  [93] = 79,
  [94] = 77,
  [95] = 95,
  [96] = 96,
  [97] = 97,
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
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 72,
  [113] = 113,
  [114] = 79,
  [115] = 72,
  [116] = 77,
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
  [204] = 204,
  [205] = 205,
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
  [262] = 244,
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
  [312] = 284,
  [313] = 259,
  [314] = 314,
  [315] = 284,
  [316] = 259,
  [317] = 244,
  [318] = 284,
  [319] = 259,
  [320] = 244,
  [321] = 292,
  [322] = 249,
  [323] = 258,
  [324] = 263,
  [325] = 292,
  [326] = 249,
  [327] = 258,
  [328] = 263,
  [329] = 292,
  [330] = 249,
  [331] = 258,
  [332] = 263,
  [333] = 333,
};

static TSCharacterRange aux_sym_PubidLiteral_token1_character_set_1[] = {
  {'\n', '\n'}, {'\r', '\r'}, {' ', '!'}, {'#', '%'}, {'\'', ';'}, {'=', '='}, {'?', 'Z'}, {'_', '_'},
  {'a', 'z'},
};

static TSCharacterRange aux_sym_PubidLiteral_token2_character_set_1[] = {
  {'\n', '\n'}, {'\r', '\r'}, {' ', '!'}, {'#', '%'}, {'(', ';'}, {'=', '='}, {'?', 'Z'}, {'_', '_'},
  {'a', 'z'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      ADVANCE_MAP(
        '"', 64,
        '#', 68,
        '%', 63,
        '&', 118,
        '\'', 78,
        '(', 46,
        ')', 49,
        '*', 50,
        '+', 52,
        ',', 53,
        '1', 66,
        ';', 80,
        '<', 1,
        '=', 133,
        '>', 45,
        '?', 51,
        'E', 70,
        'I', 67,
        'N', 69,
        '[', 42,
        ']', 71,
        '_', 77,
        '|', 48,
        '\t', 74,
        '\n', 74,
        '\r', 74,
        ' ', 74,
        '-', 76,
        '.', 76,
        ':', 76,
        0xb7, 76,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '?') ADVANCE(129);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '&') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '&') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(123);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '&') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(79);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '%', 63,
        '(', 46,
        '1', 7,
        '?', 9,
        'E', 99,
        'I', 82,
        'N', 97,
        '\t', 81,
        '\n', 81,
        '\r', 81,
        ' ', 81,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(124);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(130);
      END_STATE();
    case 10:
      if (lookahead == '?') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'Q') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'X') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(117);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 38:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      ADVANCE_MAP(
        '"', 64,
        '#', 22,
        '%', 63,
        '\'', 78,
        '(', 46,
        ')', 49,
        '*', 50,
        '+', 52,
        ',', 53,
        ';', 80,
        '<', 1,
        '=', 133,
        '>', 45,
        '?', 51,
        '[', 42,
        ']', 34,
        '|', 48,
        '\t', 81,
        '\n', 81,
        '\r', 81,
        ' ', 81,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '[') ADVANCE(41);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(83);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '.') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(117);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'M') ADVANCE(106);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(117);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(117);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_EntityValue_token2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'D') ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(98);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(56);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(107);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'Y') ADVANCE(58);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'Y') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'M') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(56);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(95);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(91);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(92);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_CharRef_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_CharRef_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_AttValue_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_AttValue_token2);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (set_contains(aux_sym_PubidLiteral_token1_character_set_1, 9, lookahead)) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (set_contains(aux_sym_PubidLiteral_token2_character_set_1, 9, lookahead)) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'A', 1,
        'C', 2,
        'E', 3,
        'I', 4,
        'N', 5,
        'P', 6,
        'S', 7,
        'e', 8,
        'v', 9,
        'x', 10,
      );
      END_STATE();
    case 1:
      if (lookahead == 'N') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'L') ADVANCE(14);
      if (lookahead == 'M') ADVANCE(15);
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'G') ADVANCE(17);
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'Y') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'Y') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'L') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'Y') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'U') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_StringType);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      END_STATE();
    case 58:
      if (lookahead == 'Y') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'D') ADVANCE(71);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_NDATA);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'C') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'M') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 67:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_ENTITY);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_IGNORE);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 72:
      if (lookahead == 'O') ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PUBLIC);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ATTLIST);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ELEMENT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 80:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_NOTATION);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 39, .external_lex_state = 2},
  [2] = {.lex_state = 39, .external_lex_state = 2},
  [3] = {.lex_state = 39, .external_lex_state = 2},
  [4] = {.lex_state = 39, .external_lex_state = 2},
  [5] = {.lex_state = 39, .external_lex_state = 2},
  [6] = {.lex_state = 39, .external_lex_state = 2},
  [7] = {.lex_state = 39, .external_lex_state = 2},
  [8] = {.lex_state = 39, .external_lex_state = 2},
  [9] = {.lex_state = 39, .external_lex_state = 2},
  [10] = {.lex_state = 39, .external_lex_state = 2},
  [11] = {.lex_state = 39, .external_lex_state = 2},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 39},
  [25] = {.lex_state = 39},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 39},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 39, .external_lex_state = 2},
  [36] = {.lex_state = 39, .external_lex_state = 2},
  [37] = {.lex_state = 39},
  [38] = {.lex_state = 39, .external_lex_state = 2},
  [39] = {.lex_state = 39},
  [40] = {.lex_state = 39, .external_lex_state = 2},
  [41] = {.lex_state = 39, .external_lex_state = 2},
  [42] = {.lex_state = 39, .external_lex_state = 2},
  [43] = {.lex_state = 39, .external_lex_state = 2},
  [44] = {.lex_state = 39, .external_lex_state = 2},
  [45] = {.lex_state = 39, .external_lex_state = 2},
  [46] = {.lex_state = 39},
  [47] = {.lex_state = 39},
  [48] = {.lex_state = 39},
  [49] = {.lex_state = 39, .external_lex_state = 2},
  [50] = {.lex_state = 39, .external_lex_state = 2},
  [51] = {.lex_state = 39, .external_lex_state = 2},
  [52] = {.lex_state = 39, .external_lex_state = 2},
  [53] = {.lex_state = 39, .external_lex_state = 2},
  [54] = {.lex_state = 39, .external_lex_state = 2},
  [55] = {.lex_state = 39, .external_lex_state = 2},
  [56] = {.lex_state = 39, .external_lex_state = 2},
  [57] = {.lex_state = 39, .external_lex_state = 2},
  [58] = {.lex_state = 39, .external_lex_state = 2},
  [59] = {.lex_state = 39, .external_lex_state = 2},
  [60] = {.lex_state = 39},
  [61] = {.lex_state = 39, .external_lex_state = 2},
  [62] = {.lex_state = 39},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 39},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 39},
  [69] = {.lex_state = 39},
  [70] = {.lex_state = 39},
  [71] = {.lex_state = 39},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 39},
  [74] = {.lex_state = 39, .external_lex_state = 2},
  [75] = {.lex_state = 39, .external_lex_state = 2},
  [76] = {.lex_state = 39},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 39},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 39},
  [81] = {.lex_state = 39},
  [82] = {.lex_state = 39},
  [83] = {.lex_state = 39, .external_lex_state = 2},
  [84] = {.lex_state = 39},
  [85] = {.lex_state = 39},
  [86] = {.lex_state = 39},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 39},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 39},
  [96] = {.lex_state = 39},
  [97] = {.lex_state = 39},
  [98] = {.lex_state = 39},
  [99] = {.lex_state = 39},
  [100] = {.lex_state = 39},
  [101] = {.lex_state = 39},
  [102] = {.lex_state = 39},
  [103] = {.lex_state = 39},
  [104] = {.lex_state = 39},
  [105] = {.lex_state = 39},
  [106] = {.lex_state = 39},
  [107] = {.lex_state = 39},
  [108] = {.lex_state = 39},
  [109] = {.lex_state = 39},
  [110] = {.lex_state = 39},
  [111] = {.lex_state = 39},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 39},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 39},
  [118] = {.lex_state = 39},
  [119] = {.lex_state = 39},
  [120] = {.lex_state = 39},
  [121] = {.lex_state = 39},
  [122] = {.lex_state = 39},
  [123] = {.lex_state = 39},
  [124] = {.lex_state = 39},
  [125] = {.lex_state = 39},
  [126] = {.lex_state = 39},
  [127] = {.lex_state = 39},
  [128] = {.lex_state = 39},
  [129] = {.lex_state = 39},
  [130] = {.lex_state = 39},
  [131] = {.lex_state = 39},
  [132] = {.lex_state = 39},
  [133] = {.lex_state = 39},
  [134] = {.lex_state = 39},
  [135] = {.lex_state = 39},
  [136] = {.lex_state = 39},
  [137] = {.lex_state = 39},
  [138] = {.lex_state = 39},
  [139] = {.lex_state = 39},
  [140] = {.lex_state = 39},
  [141] = {.lex_state = 39},
  [142] = {.lex_state = 39},
  [143] = {.lex_state = 39},
  [144] = {.lex_state = 39},
  [145] = {.lex_state = 39},
  [146] = {.lex_state = 39},
  [147] = {.lex_state = 39},
  [148] = {.lex_state = 39},
  [149] = {.lex_state = 39},
  [150] = {.lex_state = 39},
  [151] = {.lex_state = 39},
  [152] = {.lex_state = 39},
  [153] = {.lex_state = 39},
  [154] = {.lex_state = 39},
  [155] = {.lex_state = 39},
  [156] = {.lex_state = 39},
  [157] = {.lex_state = 39},
  [158] = {.lex_state = 39},
  [159] = {.lex_state = 39},
  [160] = {.lex_state = 39},
  [161] = {.lex_state = 39},
  [162] = {.lex_state = 39},
  [163] = {.lex_state = 39},
  [164] = {.lex_state = 39},
  [165] = {.lex_state = 39},
  [166] = {.lex_state = 39},
  [167] = {.lex_state = 39},
  [168] = {.lex_state = 39},
  [169] = {.lex_state = 39},
  [170] = {.lex_state = 39},
  [171] = {.lex_state = 39},
  [172] = {.lex_state = 39},
  [173] = {.lex_state = 39},
  [174] = {.lex_state = 39},
  [175] = {.lex_state = 39},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 39},
  [178] = {.lex_state = 39},
  [179] = {.lex_state = 39},
  [180] = {.lex_state = 39},
  [181] = {.lex_state = 39},
  [182] = {.lex_state = 39},
  [183] = {.lex_state = 39},
  [184] = {.lex_state = 39},
  [185] = {.lex_state = 39},
  [186] = {.lex_state = 39},
  [187] = {.lex_state = 39},
  [188] = {.lex_state = 39},
  [189] = {.lex_state = 39},
  [190] = {.lex_state = 39},
  [191] = {.lex_state = 39},
  [192] = {.lex_state = 39},
  [193] = {.lex_state = 39},
  [194] = {.lex_state = 39},
  [195] = {.lex_state = 39},
  [196] = {.lex_state = 39, .external_lex_state = 3},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 39},
  [200] = {.lex_state = 39},
  [201] = {.lex_state = 39},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 35},
  [204] = {.lex_state = 39},
  [205] = {.lex_state = 39},
  [206] = {.lex_state = 39},
  [207] = {.lex_state = 39},
  [208] = {.lex_state = 39},
  [209] = {.lex_state = 39},
  [210] = {.lex_state = 39},
  [211] = {.lex_state = 39},
  [212] = {.lex_state = 39},
  [213] = {.lex_state = 39},
  [214] = {.lex_state = 39},
  [215] = {.lex_state = 35},
  [216] = {.lex_state = 39},
  [217] = {.lex_state = 39},
  [218] = {.lex_state = 39},
  [219] = {.lex_state = 39},
  [220] = {.lex_state = 39},
  [221] = {.lex_state = 39},
  [222] = {.lex_state = 35},
  [223] = {.lex_state = 39},
  [224] = {.lex_state = 39},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 39},
  [228] = {.lex_state = 39},
  [229] = {.lex_state = 39},
  [230] = {.lex_state = 39},
  [231] = {.lex_state = 39},
  [232] = {.lex_state = 39},
  [233] = {.lex_state = 39},
  [234] = {.lex_state = 39},
  [235] = {.lex_state = 39},
  [236] = {.lex_state = 39},
  [237] = {.lex_state = 39},
  [238] = {.lex_state = 39},
  [239] = {.lex_state = 39},
  [240] = {.lex_state = 39},
  [241] = {.lex_state = 39},
  [242] = {.lex_state = 39},
  [243] = {.lex_state = 39},
  [244] = {.lex_state = 39},
  [245] = {.lex_state = 128},
  [246] = {.lex_state = 39},
  [247] = {.lex_state = 39},
  [248] = {.lex_state = 35},
  [249] = {.lex_state = 39},
  [250] = {.lex_state = 39},
  [251] = {.lex_state = 39},
  [252] = {.lex_state = 0, .external_lex_state = 3},
  [253] = {.lex_state = 39},
  [254] = {.lex_state = 39},
  [255] = {.lex_state = 39},
  [256] = {.lex_state = 35},
  [257] = {.lex_state = 39},
  [258] = {.lex_state = 39},
  [259] = {.lex_state = 39},
  [260] = {.lex_state = 39},
  [261] = {.lex_state = 39},
  [262] = {.lex_state = 39},
  [263] = {.lex_state = 37},
  [264] = {.lex_state = 39},
  [265] = {.lex_state = 39},
  [266] = {.lex_state = 39},
  [267] = {.lex_state = 39},
  [268] = {.lex_state = 39},
  [269] = {.lex_state = 39},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 39},
  [272] = {.lex_state = 35},
  [273] = {.lex_state = 39},
  [274] = {.lex_state = 39},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 39},
  [277] = {.lex_state = 39},
  [278] = {.lex_state = 39},
  [279] = {.lex_state = 39},
  [280] = {.lex_state = 39},
  [281] = {.lex_state = 39},
  [282] = {.lex_state = 39},
  [283] = {.lex_state = 39},
  [284] = {.lex_state = 39},
  [285] = {.lex_state = 39},
  [286] = {.lex_state = 39},
  [287] = {.lex_state = 39},
  [288] = {.lex_state = 39},
  [289] = {.lex_state = 39},
  [290] = {.lex_state = 39},
  [291] = {.lex_state = 39},
  [292] = {.lex_state = 39},
  [293] = {.lex_state = 39},
  [294] = {.lex_state = 39},
  [295] = {.lex_state = 39},
  [296] = {.lex_state = 39},
  [297] = {.lex_state = 39},
  [298] = {.lex_state = 39},
  [299] = {.lex_state = 39},
  [300] = {.lex_state = 39},
  [301] = {.lex_state = 39},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 5},
  [304] = {.lex_state = 38},
  [305] = {.lex_state = 38},
  [306] = {.lex_state = 125},
  [307] = {.lex_state = 126},
  [308] = {.lex_state = 39},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 127},
  [311] = {.lex_state = 39},
  [312] = {.lex_state = 39},
  [313] = {.lex_state = 39},
  [314] = {.lex_state = 0, .external_lex_state = 4},
  [315] = {.lex_state = 39},
  [316] = {.lex_state = 39},
  [317] = {.lex_state = 39},
  [318] = {.lex_state = 39},
  [319] = {.lex_state = 39},
  [320] = {.lex_state = 39},
  [321] = {.lex_state = 39},
  [322] = {.lex_state = 39},
  [323] = {.lex_state = 39},
  [324] = {.lex_state = 37},
  [325] = {.lex_state = 39},
  [326] = {.lex_state = 39},
  [327] = {.lex_state = 39},
  [328] = {.lex_state = 37},
  [329] = {.lex_state = 39},
  [330] = {.lex_state = 39},
  [331] = {.lex_state = 39},
  [332] = {.lex_state = 37},
  [333] = {.lex_state = 39},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_Name] = ACTIONS(1),
    [anon_sym_LT_BANG_LBRACK] = ACTIONS(1),
    [anon_sym_IGNORE] = ACTIONS(1),
    [anon_sym_INCLUDE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK_GT] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_ELEMENT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EMPTY] = ACTIONS(1),
    [anon_sym_ANY] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_POUNDPCDATA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ATTLIST] = ACTIONS(1),
    [sym_StringType] = ACTIONS(1),
    [sym_TokenizedType] = ACTIONS(1),
    [anon_sym_NOTATION] = ACTIONS(1),
    [anon_sym_POUNDREQUIRED] = ACTIONS(1),
    [anon_sym_POUNDIMPLIED] = ACTIONS(1),
    [anon_sym_POUNDFIXED] = ACTIONS(1),
    [anon_sym_ENTITY] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_EntityValue_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_EntityValue_token2] = ACTIONS(1),
    [anon_sym_NDATA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__S] = ACTIONS(1),
    [sym_Nmtoken] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AMP_POUND] = ACTIONS(1),
    [aux_sym_CharRef_token1] = ACTIONS(1),
    [anon_sym_AMP_POUNDx] = ACTIONS(1),
    [aux_sym_CharRef_token2] = ACTIONS(1),
    [aux_sym_AttValue_token1] = ACTIONS(1),
    [aux_sym_AttValue_token2] = ACTIONS(1),
    [anon_sym_SYSTEM] = ACTIONS(1),
    [anon_sym_PUBLIC] = ACTIONS(1),
    [anon_sym_LT_QMARK] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [sym_VersionNum] = ACTIONS(1),
    [anon_sym_encoding] = ACTIONS(1),
    [sym_EncName] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_PITarget] = ACTIONS(1),
    [sym__pi_content] = ACTIONS(1),
    [sym_Comment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(270),
    [sym__extSubsetDecl] = STATE(3),
    [sym_conditionalSect] = STATE(3),
    [sym__markupdecl] = STATE(3),
    [sym__DeclSep] = STATE(3),
    [sym_elementdecl] = STATE(52),
    [sym_AttlistDecl] = STATE(52),
    [sym__EntityDecl] = STATE(52),
    [sym_GEDecl] = STATE(36),
    [sym_PEDecl] = STATE(36),
    [sym_NotationDecl] = STATE(52),
    [sym_PEReference] = STATE(3),
    [sym_XMLDecl] = STATE(11),
    [sym_PI] = STATE(52),
    [aux_sym_document_repeat1] = STATE(3),
    [anon_sym_LT_BANG_LBRACK] = ACTIONS(3),
    [anon_sym_LT_BANG] = ACTIONS(5),
    [anon_sym_PERCENT] = ACTIONS(7),
    [sym__S] = ACTIONS(9),
    [anon_sym_LT_QMARK] = ACTIONS(11),
    [sym_Comment] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(20), 1,
      anon_sym_LT_BANG,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(26), 1,
      sym__S,
    ACTIONS(29), 1,
      anon_sym_LT_QMARK,
    ACTIONS(32), 1,
      sym_Comment,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(36), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(52), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [42] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    STATE(36), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(52), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [83] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(36), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(52), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [124] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(43), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(45), 1,
      sym__S,
    STATE(36), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(52), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(10), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [165] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(47), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(49), 1,
      sym__S,
    STATE(36), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(52), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(7), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [206] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(51), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(36), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(52), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [247] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(51), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(53), 1,
      sym__S,
    STATE(36), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(52), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(9), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [288] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(43), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(36), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(52), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [329] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(55), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(36), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(52), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [370] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(57), 1,
      sym__S,
    STATE(36), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(52), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(4), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [408] = 1,
    ACTIONS(59), 11,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [422] = 8,
    ACTIONS(61), 1,
      anon_sym_PERCENT,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(69), 1,
      anon_sym_AMP_POUND,
    ACTIONS(71), 1,
      anon_sym_AMP_POUNDx,
    STATE(87), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(17), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [450] = 5,
    STATE(68), 1,
      aux_sym_Mixed_repeat1,
    STATE(135), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
    ACTIONS(75), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(73), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [472] = 5,
    STATE(67), 1,
      aux_sym_Mixed_repeat1,
    STATE(145), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
    ACTIONS(75), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(73), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [494] = 8,
    ACTIONS(77), 1,
      anon_sym_PERCENT,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_AMP_POUND,
    ACTIONS(87), 1,
      anon_sym_AMP_POUNDx,
    STATE(79), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [522] = 8,
    ACTIONS(61), 1,
      anon_sym_PERCENT,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(69), 1,
      anon_sym_AMP_POUND,
    ACTIONS(71), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      aux_sym_EntityValue_token2,
    STATE(87), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(19), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [550] = 8,
    ACTIONS(91), 1,
      anon_sym_PERCENT,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(102), 1,
      anon_sym_AMP_POUND,
    ACTIONS(105), 1,
      anon_sym_AMP_POUNDx,
    STATE(79), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [578] = 8,
    ACTIONS(108), 1,
      anon_sym_PERCENT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(116), 1,
      anon_sym_AMP,
    ACTIONS(119), 1,
      anon_sym_AMP_POUND,
    ACTIONS(122), 1,
      anon_sym_AMP_POUNDx,
    STATE(87), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(19), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [606] = 8,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_PERCENT,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_AMP_POUND,
    ACTIONS(87), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(125), 1,
      aux_sym_EntityValue_token1,
    STATE(79), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(16), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [634] = 7,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_NOTATION,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    STATE(234), 1,
      sym__AttType,
    ACTIONS(129), 2,
      sym_StringType,
      sym_TokenizedType,
    STATE(224), 2,
      sym__EnumeratedType,
      sym_PEReference,
    STATE(241), 2,
      sym_NotationType,
      sym_Enumeration,
  [659] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym__choice,
    STATE(216), 1,
      sym_contentspec,
    ACTIONS(135), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(205), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [681] = 1,
    ACTIONS(139), 9,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [693] = 1,
    ACTIONS(141), 9,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [705] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(145), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    STATE(187), 1,
      sym_DefaultDecl,
    ACTIONS(143), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
    STATE(184), 2,
      sym_PEReference,
      sym_AttValue,
  [729] = 1,
    ACTIONS(151), 9,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [741] = 7,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      anon_sym_AMP_POUND,
    ACTIONS(159), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(161), 1,
      aux_sym_AttValue_token1,
    STATE(30), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(114), 2,
      sym_EntityRef,
      sym_CharRef,
  [765] = 7,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_AMP,
    ACTIONS(165), 1,
      anon_sym_AMP_POUND,
    ACTIONS(167), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(169), 1,
      aux_sym_AttValue_token2,
    STATE(31), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(93), 2,
      sym_EntityRef,
      sym_CharRef,
  [789] = 1,
    ACTIONS(171), 9,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [801] = 7,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      anon_sym_AMP_POUND,
    ACTIONS(159), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      aux_sym_AttValue_token1,
    STATE(33), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(114), 2,
      sym_EntityRef,
      sym_CharRef,
  [825] = 7,
    ACTIONS(163), 1,
      anon_sym_AMP,
    ACTIONS(165), 1,
      anon_sym_AMP_POUND,
    ACTIONS(167), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_AttValue_token2,
    STATE(34), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(93), 2,
      sym_EntityRef,
      sym_CharRef,
  [849] = 1,
    ACTIONS(179), 9,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [861] = 7,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      anon_sym_AMP_POUND,
    ACTIONS(189), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(192), 1,
      aux_sym_AttValue_token1,
    STATE(33), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(114), 2,
      sym_EntityRef,
      sym_CharRef,
  [885] = 7,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(200), 1,
      anon_sym_AMP_POUND,
    ACTIONS(203), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(206), 1,
      aux_sym_AttValue_token2,
    STATE(34), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(93), 2,
      sym_EntityRef,
      sym_CharRef,
  [909] = 2,
    ACTIONS(211), 1,
      anon_sym_LT_BANG,
    ACTIONS(209), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [922] = 2,
    ACTIONS(215), 1,
      anon_sym_LT_BANG,
    ACTIONS(213), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [935] = 8,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(217), 1,
      sym_Name,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(223), 1,
      sym__S,
    STATE(14), 1,
      sym_PEReference,
    STATE(46), 1,
      sym__choice,
    STATE(48), 1,
      sym__cp,
  [960] = 2,
    ACTIONS(227), 1,
      anon_sym_LT_BANG,
    ACTIONS(225), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [973] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    ACTIONS(233), 1,
      sym__S,
    STATE(71), 1,
      aux_sym__choice_repeat1,
    ACTIONS(229), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    STATE(103), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [994] = 2,
    ACTIONS(237), 1,
      anon_sym_LT_BANG,
    ACTIONS(235), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1007] = 2,
    ACTIONS(241), 1,
      anon_sym_LT_BANG,
    ACTIONS(239), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1020] = 2,
    ACTIONS(245), 1,
      anon_sym_LT_BANG,
    ACTIONS(243), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1033] = 2,
    ACTIONS(247), 1,
      anon_sym_LT_BANG,
    ACTIONS(59), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1046] = 2,
    ACTIONS(251), 1,
      anon_sym_LT_BANG,
    ACTIONS(249), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1059] = 2,
    ACTIONS(255), 1,
      anon_sym_LT_BANG,
    ACTIONS(253), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1072] = 2,
    ACTIONS(75), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(73), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [1085] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(259), 1,
      sym__S,
    STATE(71), 1,
      aux_sym__choice_repeat1,
    ACTIONS(229), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    STATE(109), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1106] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(263), 1,
      sym__S,
    STATE(39), 1,
      aux_sym__choice_repeat1,
    ACTIONS(229), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    STATE(98), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1127] = 2,
    ACTIONS(267), 1,
      anon_sym_LT_BANG,
    ACTIONS(265), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1140] = 2,
    ACTIONS(271), 1,
      anon_sym_LT_BANG,
    ACTIONS(269), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1153] = 2,
    ACTIONS(275), 1,
      anon_sym_LT_BANG,
    ACTIONS(273), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1166] = 2,
    ACTIONS(279), 1,
      anon_sym_LT_BANG,
    ACTIONS(277), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1179] = 2,
    ACTIONS(283), 1,
      anon_sym_LT_BANG,
    ACTIONS(281), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1192] = 2,
    ACTIONS(287), 1,
      anon_sym_LT_BANG,
    ACTIONS(285), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1205] = 2,
    ACTIONS(291), 1,
      anon_sym_LT_BANG,
    ACTIONS(289), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1218] = 2,
    ACTIONS(295), 1,
      anon_sym_LT_BANG,
    ACTIONS(293), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1231] = 2,
    ACTIONS(299), 1,
      anon_sym_LT_BANG,
    ACTIONS(297), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1244] = 2,
    ACTIONS(303), 1,
      anon_sym_LT_BANG,
    ACTIONS(301), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1257] = 2,
    ACTIONS(307), 1,
      anon_sym_LT_BANG,
    ACTIONS(305), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1270] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    ACTIONS(233), 1,
      sym__S,
    STATE(47), 1,
      aux_sym__choice_repeat1,
    ACTIONS(229), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    STATE(103), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1291] = 2,
    ACTIONS(311), 1,
      anon_sym_LT_BANG,
    ACTIONS(309), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1304] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(217), 1,
      sym_Name,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      sym__S,
    STATE(104), 1,
      sym__cp,
    STATE(46), 2,
      sym__choice,
      sym_PEReference,
  [1324] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(217), 1,
      sym_Name,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      sym__S,
    STATE(110), 1,
      sym__cp,
    STATE(46), 2,
      sym__choice,
      sym_PEReference,
  [1344] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(217), 1,
      sym_Name,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      sym__S,
    STATE(48), 1,
      sym__cp,
    STATE(46), 2,
      sym__choice,
      sym_PEReference,
  [1364] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(319), 1,
      anon_sym_PIPE,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    ACTIONS(323), 1,
      sym__S,
    STATE(68), 1,
      aux_sym_Mixed_repeat1,
    STATE(135), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
  [1386] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(217), 1,
      sym_Name,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_POUNDPCDATA,
    STATE(15), 1,
      sym_PEReference,
    STATE(46), 1,
      sym__choice,
    STATE(60), 1,
      sym__cp,
  [1408] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(319), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(329), 1,
      sym__S,
    STATE(100), 1,
      aux_sym_Mixed_repeat1,
    STATE(120), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
  [1430] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(319), 1,
      anon_sym_PIPE,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(333), 1,
      sym__S,
    STATE(100), 1,
      aux_sym_Mixed_repeat1,
    STATE(124), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
  [1452] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(319), 1,
      anon_sym_PIPE,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(337), 1,
      sym__S,
    STATE(67), 1,
      aux_sym_Mixed_repeat1,
    STATE(145), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
  [1474] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(217), 1,
      sym_Name,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym__cp,
    STATE(46), 2,
      sym__choice,
      sym_PEReference,
  [1491] = 4,
    ACTIONS(344), 1,
      sym__S,
    STATE(71), 1,
      aux_sym__choice_repeat1,
    ACTIONS(339), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    ACTIONS(342), 2,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
  [1506] = 2,
    ACTIONS(349), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(347), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1517] = 6,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      anon_sym_SYSTEM,
    ACTIONS(357), 1,
      anon_sym_PUBLIC,
    STATE(173), 1,
      sym_ExternalID,
    STATE(219), 1,
      sym_EntityValue,
  [1536] = 2,
    ACTIONS(361), 1,
      anon_sym_LT_BANG,
    ACTIONS(359), 5,
      sym_Comment,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1547] = 2,
    ACTIONS(365), 1,
      anon_sym_LT_BANG,
    ACTIONS(363), 5,
      sym_Comment,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1558] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(217), 1,
      sym_Name,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym__cp,
    STATE(46), 2,
      sym__choice,
      sym_PEReference,
  [1575] = 2,
    ACTIONS(369), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(367), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1586] = 5,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      anon_sym_SYSTEM,
    ACTIONS(357), 1,
      anon_sym_PUBLIC,
    STATE(191), 2,
      sym_EntityValue,
      sym_ExternalID,
  [1603] = 2,
    ACTIONS(373), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(371), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1614] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(375), 1,
      sym_Name,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(379), 1,
      sym__S,
    STATE(82), 1,
      aux_sym_NotationType_repeat1,
    STATE(243), 1,
      sym_PEReference,
  [1633] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(379), 1,
      sym__S,
    ACTIONS(381), 1,
      sym_Name,
    STATE(85), 1,
      aux_sym_NotationType_repeat1,
    STATE(223), 1,
      sym_PEReference,
  [1652] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(379), 1,
      sym__S,
    ACTIONS(381), 1,
      sym_Name,
    STATE(113), 1,
      aux_sym_NotationType_repeat1,
    STATE(223), 1,
      sym_PEReference,
  [1671] = 2,
    ACTIONS(385), 1,
      anon_sym_LT_BANG,
    ACTIONS(383), 5,
      sym_Comment,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1682] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(217), 1,
      sym_Name,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym__cp,
    STATE(46), 2,
      sym__choice,
      sym_PEReference,
  [1699] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(379), 1,
      sym__S,
    ACTIONS(387), 1,
      sym_Name,
    STATE(113), 1,
      aux_sym_NotationType_repeat1,
    STATE(230), 1,
      sym_PEReference,
  [1718] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(355), 1,
      anon_sym_SYSTEM,
    ACTIONS(389), 1,
      anon_sym_PUBLIC,
    STATE(264), 1,
      sym_PEReference,
    STATE(208), 2,
      sym_ExternalID,
      sym_PublicID,
  [1735] = 2,
    ACTIONS(373), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(371), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1746] = 2,
    ACTIONS(349), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(347), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1757] = 2,
    ACTIONS(369), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(367), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1768] = 2,
    ACTIONS(247), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(59), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1779] = 2,
    ACTIONS(247), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(59), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1790] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(391), 1,
      anon_sym_PIPE,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
  [1806] = 2,
    ACTIONS(373), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(371), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1816] = 2,
    ACTIONS(369), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(367), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1826] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(391), 1,
      anon_sym_PIPE,
    STATE(145), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
  [1842] = 1,
    ACTIONS(395), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [1850] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_PEReference,
    ACTIONS(397), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1864] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 1,
      sym__S,
    STATE(105), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1878] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(391), 1,
      anon_sym_PIPE,
    STATE(120), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
  [1894] = 4,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(406), 1,
      sym__S,
    STATE(100), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(404), 2,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
  [1908] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_PEReference,
    ACTIONS(397), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1922] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(411), 1,
      sym__S,
    STATE(239), 1,
      sym_PEReference,
    ACTIONS(409), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [1936] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      sym__S,
    STATE(105), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1950] = 1,
    ACTIONS(342), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [1958] = 4,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    ACTIONS(417), 1,
      anon_sym_PERCENT,
    ACTIONS(420), 1,
      sym__S,
    STATE(105), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1972] = 2,
    ACTIONS(423), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(425), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1982] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(391), 1,
      anon_sym_PIPE,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
  [1998] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_PEReference,
    ACTIONS(397), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2012] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 1,
      sym__S,
    STATE(105), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [2026] = 1,
    ACTIONS(433), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [2034] = 1,
    ACTIONS(435), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [2042] = 2,
    ACTIONS(349), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(347), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2052] = 4,
    ACTIONS(439), 1,
      anon_sym_PIPE,
    ACTIONS(442), 1,
      sym__S,
    STATE(113), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(437), 2,
      anon_sym_PERCENT,
      sym_Name,
  [2066] = 2,
    ACTIONS(373), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(371), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2076] = 2,
    ACTIONS(349), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(347), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2086] = 2,
    ACTIONS(369), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(367), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2096] = 4,
    ACTIONS(445), 1,
      anon_sym_PIPE,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    ACTIONS(450), 1,
      sym__S,
    STATE(117), 1,
      aux_sym_Enumeration_repeat1,
  [2109] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    STATE(201), 1,
      sym_PEReference,
    ACTIONS(453), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [2120] = 1,
    ACTIONS(455), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym__S,
  [2127] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
  [2140] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
  [2153] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(459), 1,
      sym_Name,
    ACTIONS(461), 1,
      sym__S,
    STATE(141), 1,
      sym_PEReference,
  [2166] = 3,
    ACTIONS(463), 1,
      anon_sym_GT,
    ACTIONS(465), 1,
      sym__S,
    STATE(139), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2177] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
  [2190] = 4,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    ACTIONS(469), 1,
      anon_sym_PERCENT,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
  [2203] = 4,
    ACTIONS(472), 1,
      anon_sym_PIPE,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 1,
      sym__S,
    STATE(134), 1,
      aux_sym_Enumeration_repeat1,
  [2216] = 4,
    ACTIONS(472), 1,
      anon_sym_PIPE,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 1,
      sym__S,
    STATE(117), 1,
      aux_sym_Enumeration_repeat1,
  [2229] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(478), 1,
      sym_Name,
    ACTIONS(480), 1,
      sym__S,
    STATE(80), 1,
      sym_PEReference,
  [2242] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(482), 1,
      sym_Name,
    ACTIONS(484), 1,
      anon_sym_GT,
    STATE(185), 1,
      sym_PEReference,
  [2255] = 3,
    ACTIONS(486), 1,
      anon_sym_GT,
    ACTIONS(488), 1,
      sym__S,
    STATE(130), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2266] = 1,
    ACTIONS(491), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym__S,
  [2273] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
  [2286] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(482), 1,
      sym_Name,
    ACTIONS(495), 1,
      anon_sym_GT,
    STATE(185), 1,
      sym_PEReference,
  [2299] = 4,
    ACTIONS(472), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
    ACTIONS(499), 1,
      sym__S,
    STATE(117), 1,
      aux_sym_Enumeration_repeat1,
  [2312] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
  [2325] = 2,
    ACTIONS(503), 1,
      sym__S,
    ACTIONS(501), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2334] = 1,
    ACTIONS(437), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2341] = 2,
    ACTIONS(506), 1,
      sym__S,
    ACTIONS(437), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2350] = 3,
    ACTIONS(495), 1,
      anon_sym_GT,
    ACTIONS(509), 1,
      sym__S,
    STATE(130), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2361] = 1,
    ACTIONS(511), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2368] = 1,
    ACTIONS(404), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym__S,
  [2375] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(513), 1,
      sym_Name,
    ACTIONS(515), 1,
      sym__S,
    STATE(119), 1,
      sym_PEReference,
  [2388] = 4,
    ACTIONS(472), 1,
      anon_sym_PIPE,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    ACTIONS(519), 1,
      sym__S,
    STATE(127), 1,
      aux_sym_Enumeration_repeat1,
  [2401] = 4,
    ACTIONS(521), 1,
      anon_sym_ELEMENT,
    ACTIONS(523), 1,
      anon_sym_ATTLIST,
    ACTIONS(525), 1,
      anon_sym_NOTATION,
    ACTIONS(527), 1,
      anon_sym_ENTITY,
  [2414] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(148), 1,
      sym_PEReference,
  [2427] = 3,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    ACTIONS(531), 1,
      anon_sym_SQUOTE,
    STATE(183), 1,
      sym_PubidLiteral,
  [2437] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(482), 1,
      sym_Name,
    STATE(185), 1,
      sym_PEReference,
  [2447] = 2,
    ACTIONS(535), 1,
      sym__S,
    ACTIONS(533), 2,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
  [2455] = 3,
    ACTIONS(537), 1,
      sym__S,
    ACTIONS(539), 1,
      anon_sym_EQ,
    STATE(236), 1,
      sym__Eq,
  [2465] = 3,
    ACTIONS(541), 1,
      anon_sym_DQUOTE,
    ACTIONS(543), 1,
      anon_sym_SQUOTE,
    STATE(182), 1,
      sym_SystemLiteral,
  [2475] = 1,
    ACTIONS(415), 3,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym__S,
  [2481] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_PEReference,
  [2491] = 3,
    ACTIONS(541), 1,
      anon_sym_DQUOTE,
    ACTIONS(543), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      sym_SystemLiteral,
  [2501] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(545), 1,
      sym_Name,
    STATE(287), 1,
      sym_PEReference,
  [2511] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(547), 1,
      sym_Name,
    STATE(192), 1,
      sym_PEReference,
  [2521] = 3,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    ACTIONS(531), 1,
      anon_sym_SQUOTE,
    STATE(186), 1,
      sym_PubidLiteral,
  [2531] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(549), 1,
      sym_Name,
    STATE(131), 1,
      sym_PEReference,
  [2541] = 2,
    ACTIONS(553), 1,
      anon_sym_STAR,
    ACTIONS(551), 2,
      anon_sym_GT,
      sym__S,
  [2549] = 3,
    ACTIONS(537), 1,
      sym__S,
    ACTIONS(539), 1,
      anon_sym_EQ,
    STATE(242), 1,
      sym__Eq,
  [2559] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(555), 1,
      sym_Name,
    STATE(123), 1,
      sym_PEReference,
  [2569] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_PEReference,
  [2579] = 2,
    ACTIONS(559), 1,
      anon_sym_STAR,
    ACTIONS(557), 2,
      anon_sym_GT,
      sym__S,
  [2587] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_PEReference,
  [2597] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(513), 1,
      sym_Name,
    STATE(119), 1,
      sym_PEReference,
  [2607] = 1,
    ACTIONS(448), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2613] = 3,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    ACTIONS(531), 1,
      anon_sym_SQUOTE,
    STATE(269), 1,
      sym_PubidLiteral,
  [2623] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(563), 1,
      sym_Name,
    STATE(81), 1,
      sym_PEReference,
  [2633] = 3,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    STATE(217), 1,
      sym_AttValue,
  [2643] = 1,
    ACTIONS(565), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2649] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(567), 1,
      sym_Name,
    STATE(333), 1,
      sym_PEReference,
  [2659] = 3,
    ACTIONS(569), 1,
      sym_Name,
    ACTIONS(571), 1,
      anon_sym_PERCENT,
    STATE(266), 1,
      sym_PEReference,
  [2669] = 1,
    ACTIONS(573), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2675] = 3,
    ACTIONS(575), 1,
      anon_sym_GT,
    ACTIONS(577), 1,
      sym__S,
    STATE(179), 1,
      sym_NDataDecl,
  [2685] = 2,
    ACTIONS(581), 1,
      anon_sym_STAR,
    ACTIONS(579), 2,
      anon_sym_GT,
      sym__S,
  [2693] = 2,
    ACTIONS(585), 1,
      sym__S,
    ACTIONS(583), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2701] = 3,
    ACTIONS(587), 1,
      sym__S,
    ACTIONS(589), 1,
      anon_sym_QMARK_GT,
    STATE(202), 1,
      sym__EncodingDecl,
  [2711] = 2,
    ACTIONS(593), 1,
      anon_sym_STAR,
    ACTIONS(591), 2,
      anon_sym_GT,
      sym__S,
  [2719] = 2,
    ACTIONS(597), 1,
      sym__S,
    ACTIONS(595), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2727] = 2,
    ACTIONS(599), 1,
      anon_sym_GT,
    ACTIONS(601), 1,
      sym__S,
  [2734] = 1,
    ACTIONS(603), 2,
      anon_sym_GT,
      sym__S,
  [2739] = 2,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(605), 1,
      anon_sym_PIPE,
  [2746] = 1,
    ACTIONS(607), 2,
      anon_sym_GT,
      sym__S,
  [2751] = 2,
    ACTIONS(609), 1,
      anon_sym_GT,
    ACTIONS(611), 1,
      sym__S,
  [2758] = 1,
    ACTIONS(613), 2,
      anon_sym_GT,
      sym__S,
  [2763] = 2,
    ACTIONS(486), 1,
      anon_sym_GT,
    ACTIONS(615), 1,
      sym__S,
  [2770] = 1,
    ACTIONS(609), 2,
      anon_sym_GT,
      sym__S,
  [2775] = 1,
    ACTIONS(618), 2,
      anon_sym_GT,
      sym__S,
  [2780] = 1,
    ACTIONS(620), 2,
      anon_sym_GT,
      sym__S,
  [2785] = 1,
    ACTIONS(622), 2,
      anon_sym_GT,
      sym__S,
  [2790] = 1,
    ACTIONS(624), 2,
      anon_sym_GT,
      sym__S,
  [2795] = 2,
    ACTIONS(626), 1,
      anon_sym_GT,
    ACTIONS(628), 1,
      sym__S,
  [2802] = 1,
    ACTIONS(630), 2,
      anon_sym_GT,
      sym__S,
  [2807] = 1,
    ACTIONS(632), 2,
      anon_sym_GT,
      sym__S,
  [2812] = 1,
    ACTIONS(557), 2,
      anon_sym_GT,
      sym__S,
  [2817] = 2,
    ACTIONS(634), 1,
      sym__S,
    STATE(176), 1,
      sym__VersionInfo,
  [2824] = 2,
    ACTIONS(636), 1,
      anon_sym_xml,
    ACTIONS(638), 1,
      sym_PITarget,
  [2831] = 1,
    ACTIONS(640), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [2836] = 1,
    ACTIONS(642), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [2841] = 1,
    ACTIONS(644), 2,
      anon_sym_GT,
      sym__S,
  [2846] = 2,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
    ACTIONS(605), 1,
      anon_sym_PIPE,
  [2853] = 2,
    ACTIONS(646), 1,
      anon_sym_LBRACK,
    ACTIONS(648), 1,
      sym__S,
  [2860] = 2,
    ACTIONS(650), 1,
      sym__S,
    ACTIONS(652), 1,
      anon_sym_QMARK_GT,
  [2867] = 2,
    ACTIONS(654), 1,
      sym__S,
    ACTIONS(656), 1,
      sym_Nmtoken,
  [2874] = 1,
    ACTIONS(551), 2,
      anon_sym_GT,
      sym__S,
  [2879] = 1,
    ACTIONS(658), 2,
      anon_sym_GT,
      sym__S,
  [2884] = 2,
    ACTIONS(660), 1,
      sym_Name,
    ACTIONS(662), 1,
      sym__S,
  [2891] = 1,
    ACTIONS(664), 2,
      anon_sym_GT,
      sym__S,
  [2896] = 2,
    ACTIONS(666), 1,
      anon_sym_GT,
    ACTIONS(668), 1,
      sym__S,
  [2903] = 1,
    ACTIONS(670), 2,
      anon_sym_GT,
      sym__S,
  [2908] = 1,
    ACTIONS(672), 2,
      anon_sym_GT,
      sym__S,
  [2913] = 2,
    ACTIONS(605), 1,
      anon_sym_PIPE,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
  [2920] = 1,
    ACTIONS(676), 2,
      anon_sym_GT,
      sym__S,
  [2925] = 1,
    ACTIONS(678), 2,
      anon_sym_GT,
      sym__S,
  [2930] = 1,
    ACTIONS(579), 2,
      anon_sym_GT,
      sym__S,
  [2935] = 2,
    ACTIONS(680), 1,
      sym__S,
    ACTIONS(682), 1,
      sym_Nmtoken,
  [2942] = 2,
    ACTIONS(684), 1,
      anon_sym_GT,
    ACTIONS(686), 1,
      sym__S,
  [2949] = 1,
    ACTIONS(688), 2,
      anon_sym_GT,
      sym__S,
  [2954] = 1,
    ACTIONS(690), 2,
      anon_sym_GT,
      sym__S,
  [2959] = 2,
    ACTIONS(575), 1,
      anon_sym_GT,
    ACTIONS(692), 1,
      sym__S,
  [2966] = 1,
    ACTIONS(694), 2,
      anon_sym_GT,
      sym__S,
  [2971] = 1,
    ACTIONS(696), 2,
      anon_sym_GT,
      sym__S,
  [2976] = 2,
    ACTIONS(698), 1,
      sym__S,
    ACTIONS(700), 1,
      sym_Nmtoken,
  [2983] = 2,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    ACTIONS(704), 1,
      sym__S,
  [2990] = 1,
    ACTIONS(706), 2,
      anon_sym_GT,
      sym__S,
  [2995] = 2,
    ACTIONS(652), 1,
      anon_sym_QMARK_GT,
    ACTIONS(708), 1,
      anon_sym_encoding,
  [3002] = 2,
    ACTIONS(710), 1,
      sym__S,
    ACTIONS(712), 1,
      anon_sym_QMARK_GT,
  [3009] = 1,
    ACTIONS(714), 2,
      anon_sym_GT,
      sym__S,
  [3014] = 2,
    ACTIONS(599), 1,
      anon_sym_GT,
    ACTIONS(716), 1,
      anon_sym_NDATA,
  [3021] = 1,
    ACTIONS(718), 2,
      anon_sym_GT,
      sym__S,
  [3026] = 2,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    ACTIONS(722), 1,
      sym__S,
  [3033] = 1,
    ACTIONS(467), 2,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
  [3038] = 1,
    ACTIONS(724), 2,
      anon_sym_GT,
      sym__S,
  [3043] = 1,
    ACTIONS(726), 2,
      anon_sym_GT,
      sym__S,
  [3048] = 2,
    ACTIONS(728), 1,
      anon_sym_GT,
    ACTIONS(730), 1,
      sym__S,
  [3055] = 1,
    ACTIONS(583), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3060] = 2,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      anon_sym_SQUOTE,
  [3067] = 1,
    ACTIONS(397), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [3072] = 1,
    ACTIONS(736), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3077] = 2,
    ACTIONS(738), 1,
      anon_sym_LBRACK,
    ACTIONS(740), 1,
      sym__S,
  [3084] = 2,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    STATE(151), 1,
      sym_PEReference,
  [3091] = 1,
    ACTIONS(742), 2,
      anon_sym_GT,
      sym__S,
  [3096] = 2,
    ACTIONS(744), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      anon_sym_SQUOTE,
  [3103] = 2,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    ACTIONS(750), 1,
      sym__S,
  [3110] = 1,
    ACTIONS(752), 1,
      anon_sym_SEMI,
  [3114] = 1,
    ACTIONS(754), 1,
      aux_sym_PubidLiteral_token2,
  [3118] = 1,
    ACTIONS(756), 1,
      anon_sym_LBRACK,
  [3122] = 1,
    ACTIONS(559), 1,
      anon_sym_STAR,
  [3126] = 1,
    ACTIONS(758), 1,
      sym_Nmtoken,
  [3130] = 1,
    ACTIONS(760), 1,
      sym_Name,
  [3134] = 1,
    ACTIONS(762), 1,
      sym__S,
  [3138] = 1,
    ACTIONS(764), 1,
      anon_sym_LPAREN,
  [3142] = 1,
    ACTIONS(638), 1,
      sym_PITarget,
  [3146] = 1,
    ACTIONS(766), 1,
      anon_sym_DQUOTE,
  [3150] = 1,
    ACTIONS(766), 1,
      anon_sym_SQUOTE,
  [3154] = 1,
    ACTIONS(768), 1,
      anon_sym_DQUOTE,
  [3158] = 1,
    ACTIONS(656), 1,
      sym_Nmtoken,
  [3162] = 1,
    ACTIONS(768), 1,
      anon_sym_SQUOTE,
  [3166] = 1,
    ACTIONS(770), 1,
      aux_sym_CharRef_token1,
  [3170] = 1,
    ACTIONS(772), 1,
      anon_sym_SEMI,
  [3174] = 1,
    ACTIONS(774), 1,
      anon_sym_GT,
  [3178] = 1,
    ACTIONS(776), 1,
      sym__S,
  [3182] = 1,
    ACTIONS(778), 1,
      anon_sym_SEMI,
  [3186] = 1,
    ACTIONS(770), 1,
      aux_sym_CharRef_token2,
  [3190] = 1,
    ACTIONS(780), 1,
      sym__S,
  [3194] = 1,
    ACTIONS(782), 1,
      sym_Name,
  [3198] = 1,
    ACTIONS(784), 1,
      sym__S,
  [3202] = 1,
    ACTIONS(786), 1,
      anon_sym_STAR,
  [3206] = 1,
    ACTIONS(788), 1,
      sym__S,
  [3210] = 1,
    ACTIONS(611), 1,
      sym__S,
  [3214] = 1,
    ACTIONS(790), 1,
      ts_builtin_sym_end,
  [3218] = 1,
    ACTIONS(792), 1,
      sym__S,
  [3222] = 1,
    ACTIONS(794), 1,
      sym_Nmtoken,
  [3226] = 1,
    ACTIONS(605), 1,
      anon_sym_PIPE,
  [3230] = 1,
    ACTIONS(796), 1,
      anon_sym_GT,
  [3234] = 1,
    ACTIONS(798), 1,
      anon_sym_QMARK_GT,
  [3238] = 1,
    ACTIONS(800), 1,
      anon_sym_PIPE,
  [3242] = 1,
    ACTIONS(553), 1,
      anon_sym_STAR,
  [3246] = 1,
    ACTIONS(802), 1,
      anon_sym_DQUOTE,
  [3250] = 1,
    ACTIONS(391), 1,
      anon_sym_PIPE,
  [3254] = 1,
    ACTIONS(802), 1,
      anon_sym_SQUOTE,
  [3258] = 1,
    ACTIONS(804), 1,
      sym__S,
  [3262] = 1,
    ACTIONS(806), 1,
      sym__S,
  [3266] = 1,
    ACTIONS(808), 1,
      sym__S,
  [3270] = 1,
    ACTIONS(810), 1,
      anon_sym_SEMI,
  [3274] = 1,
    ACTIONS(812), 1,
      anon_sym_GT,
  [3278] = 1,
    ACTIONS(814), 1,
      anon_sym_version,
  [3282] = 1,
    ACTIONS(816), 1,
      sym__S,
  [3286] = 1,
    ACTIONS(818), 1,
      sym__S,
  [3290] = 1,
    ACTIONS(599), 1,
      anon_sym_GT,
  [3294] = 1,
    ACTIONS(581), 1,
      anon_sym_STAR,
  [3298] = 1,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
  [3302] = 1,
    ACTIONS(820), 1,
      sym_Name,
  [3306] = 1,
    ACTIONS(822), 1,
      anon_sym_GT,
  [3310] = 1,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
  [3314] = 1,
    ACTIONS(824), 1,
      sym__S,
  [3318] = 1,
    ACTIONS(826), 1,
      anon_sym_DQUOTE,
  [3322] = 1,
    ACTIONS(828), 1,
      anon_sym_EQ,
  [3326] = 1,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
  [3330] = 1,
    ACTIONS(826), 1,
      anon_sym_SQUOTE,
  [3334] = 1,
    ACTIONS(832), 1,
      sym__S,
  [3338] = 1,
    ACTIONS(834), 1,
      sym__S,
  [3342] = 1,
    ACTIONS(836), 1,
      sym_VersionNum,
  [3346] = 1,
    ACTIONS(838), 1,
      sym_VersionNum,
  [3350] = 1,
    ACTIONS(840), 1,
      sym_EncName,
  [3354] = 1,
    ACTIONS(842), 1,
      sym_EncName,
  [3358] = 1,
    ACTIONS(844), 1,
      aux_sym_SystemLiteral_token1,
  [3362] = 1,
    ACTIONS(846), 1,
      aux_sym_SystemLiteral_token2,
  [3366] = 1,
    ACTIONS(848), 1,
      sym__S,
  [3370] = 1,
    ACTIONS(850), 1,
      anon_sym_QMARK_GT,
  [3374] = 1,
    ACTIONS(852), 1,
      aux_sym_PubidLiteral_token1,
  [3378] = 1,
    ACTIONS(646), 1,
      anon_sym_LBRACK,
  [3382] = 1,
    ACTIONS(854), 1,
      anon_sym_SEMI,
  [3386] = 1,
    ACTIONS(856), 1,
      anon_sym_SEMI,
  [3390] = 1,
    ACTIONS(858), 1,
      sym__pi_content,
  [3394] = 1,
    ACTIONS(860), 1,
      anon_sym_SEMI,
  [3398] = 1,
    ACTIONS(862), 1,
      anon_sym_SEMI,
  [3402] = 1,
    ACTIONS(864), 1,
      anon_sym_SEMI,
  [3406] = 1,
    ACTIONS(866), 1,
      anon_sym_SEMI,
  [3410] = 1,
    ACTIONS(868), 1,
      anon_sym_SEMI,
  [3414] = 1,
    ACTIONS(870), 1,
      anon_sym_SEMI,
  [3418] = 1,
    ACTIONS(660), 1,
      sym_Name,
  [3422] = 1,
    ACTIONS(872), 1,
      sym_Name,
  [3426] = 1,
    ACTIONS(874), 1,
      aux_sym_CharRef_token1,
  [3430] = 1,
    ACTIONS(874), 1,
      aux_sym_CharRef_token2,
  [3434] = 1,
    ACTIONS(876), 1,
      sym_Name,
  [3438] = 1,
    ACTIONS(878), 1,
      sym_Name,
  [3442] = 1,
    ACTIONS(880), 1,
      aux_sym_CharRef_token1,
  [3446] = 1,
    ACTIONS(880), 1,
      aux_sym_CharRef_token2,
  [3450] = 1,
    ACTIONS(882), 1,
      sym_Name,
  [3454] = 1,
    ACTIONS(884), 1,
      sym_Name,
  [3458] = 1,
    ACTIONS(886), 1,
      aux_sym_CharRef_token1,
  [3462] = 1,
    ACTIONS(886), 1,
      aux_sym_CharRef_token2,
  [3466] = 1,
    ACTIONS(888), 1,
      sym__S,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 83,
  [SMALL_STATE(5)] = 124,
  [SMALL_STATE(6)] = 165,
  [SMALL_STATE(7)] = 206,
  [SMALL_STATE(8)] = 247,
  [SMALL_STATE(9)] = 288,
  [SMALL_STATE(10)] = 329,
  [SMALL_STATE(11)] = 370,
  [SMALL_STATE(12)] = 408,
  [SMALL_STATE(13)] = 422,
  [SMALL_STATE(14)] = 450,
  [SMALL_STATE(15)] = 472,
  [SMALL_STATE(16)] = 494,
  [SMALL_STATE(17)] = 522,
  [SMALL_STATE(18)] = 550,
  [SMALL_STATE(19)] = 578,
  [SMALL_STATE(20)] = 606,
  [SMALL_STATE(21)] = 634,
  [SMALL_STATE(22)] = 659,
  [SMALL_STATE(23)] = 681,
  [SMALL_STATE(24)] = 693,
  [SMALL_STATE(25)] = 705,
  [SMALL_STATE(26)] = 729,
  [SMALL_STATE(27)] = 741,
  [SMALL_STATE(28)] = 765,
  [SMALL_STATE(29)] = 789,
  [SMALL_STATE(30)] = 801,
  [SMALL_STATE(31)] = 825,
  [SMALL_STATE(32)] = 849,
  [SMALL_STATE(33)] = 861,
  [SMALL_STATE(34)] = 885,
  [SMALL_STATE(35)] = 909,
  [SMALL_STATE(36)] = 922,
  [SMALL_STATE(37)] = 935,
  [SMALL_STATE(38)] = 960,
  [SMALL_STATE(39)] = 973,
  [SMALL_STATE(40)] = 994,
  [SMALL_STATE(41)] = 1007,
  [SMALL_STATE(42)] = 1020,
  [SMALL_STATE(43)] = 1033,
  [SMALL_STATE(44)] = 1046,
  [SMALL_STATE(45)] = 1059,
  [SMALL_STATE(46)] = 1072,
  [SMALL_STATE(47)] = 1085,
  [SMALL_STATE(48)] = 1106,
  [SMALL_STATE(49)] = 1127,
  [SMALL_STATE(50)] = 1140,
  [SMALL_STATE(51)] = 1153,
  [SMALL_STATE(52)] = 1166,
  [SMALL_STATE(53)] = 1179,
  [SMALL_STATE(54)] = 1192,
  [SMALL_STATE(55)] = 1205,
  [SMALL_STATE(56)] = 1218,
  [SMALL_STATE(57)] = 1231,
  [SMALL_STATE(58)] = 1244,
  [SMALL_STATE(59)] = 1257,
  [SMALL_STATE(60)] = 1270,
  [SMALL_STATE(61)] = 1291,
  [SMALL_STATE(62)] = 1304,
  [SMALL_STATE(63)] = 1324,
  [SMALL_STATE(64)] = 1344,
  [SMALL_STATE(65)] = 1364,
  [SMALL_STATE(66)] = 1386,
  [SMALL_STATE(67)] = 1408,
  [SMALL_STATE(68)] = 1430,
  [SMALL_STATE(69)] = 1452,
  [SMALL_STATE(70)] = 1474,
  [SMALL_STATE(71)] = 1491,
  [SMALL_STATE(72)] = 1506,
  [SMALL_STATE(73)] = 1517,
  [SMALL_STATE(74)] = 1536,
  [SMALL_STATE(75)] = 1547,
  [SMALL_STATE(76)] = 1558,
  [SMALL_STATE(77)] = 1575,
  [SMALL_STATE(78)] = 1586,
  [SMALL_STATE(79)] = 1603,
  [SMALL_STATE(80)] = 1614,
  [SMALL_STATE(81)] = 1633,
  [SMALL_STATE(82)] = 1652,
  [SMALL_STATE(83)] = 1671,
  [SMALL_STATE(84)] = 1682,
  [SMALL_STATE(85)] = 1699,
  [SMALL_STATE(86)] = 1718,
  [SMALL_STATE(87)] = 1735,
  [SMALL_STATE(88)] = 1746,
  [SMALL_STATE(89)] = 1757,
  [SMALL_STATE(90)] = 1768,
  [SMALL_STATE(91)] = 1779,
  [SMALL_STATE(92)] = 1790,
  [SMALL_STATE(93)] = 1806,
  [SMALL_STATE(94)] = 1816,
  [SMALL_STATE(95)] = 1826,
  [SMALL_STATE(96)] = 1842,
  [SMALL_STATE(97)] = 1850,
  [SMALL_STATE(98)] = 1864,
  [SMALL_STATE(99)] = 1878,
  [SMALL_STATE(100)] = 1894,
  [SMALL_STATE(101)] = 1908,
  [SMALL_STATE(102)] = 1922,
  [SMALL_STATE(103)] = 1936,
  [SMALL_STATE(104)] = 1950,
  [SMALL_STATE(105)] = 1958,
  [SMALL_STATE(106)] = 1972,
  [SMALL_STATE(107)] = 1982,
  [SMALL_STATE(108)] = 1998,
  [SMALL_STATE(109)] = 2012,
  [SMALL_STATE(110)] = 2026,
  [SMALL_STATE(111)] = 2034,
  [SMALL_STATE(112)] = 2042,
  [SMALL_STATE(113)] = 2052,
  [SMALL_STATE(114)] = 2066,
  [SMALL_STATE(115)] = 2076,
  [SMALL_STATE(116)] = 2086,
  [SMALL_STATE(117)] = 2096,
  [SMALL_STATE(118)] = 2109,
  [SMALL_STATE(119)] = 2120,
  [SMALL_STATE(120)] = 2127,
  [SMALL_STATE(121)] = 2140,
  [SMALL_STATE(122)] = 2153,
  [SMALL_STATE(123)] = 2166,
  [SMALL_STATE(124)] = 2177,
  [SMALL_STATE(125)] = 2190,
  [SMALL_STATE(126)] = 2203,
  [SMALL_STATE(127)] = 2216,
  [SMALL_STATE(128)] = 2229,
  [SMALL_STATE(129)] = 2242,
  [SMALL_STATE(130)] = 2255,
  [SMALL_STATE(131)] = 2266,
  [SMALL_STATE(132)] = 2273,
  [SMALL_STATE(133)] = 2286,
  [SMALL_STATE(134)] = 2299,
  [SMALL_STATE(135)] = 2312,
  [SMALL_STATE(136)] = 2325,
  [SMALL_STATE(137)] = 2334,
  [SMALL_STATE(138)] = 2341,
  [SMALL_STATE(139)] = 2350,
  [SMALL_STATE(140)] = 2361,
  [SMALL_STATE(141)] = 2368,
  [SMALL_STATE(142)] = 2375,
  [SMALL_STATE(143)] = 2388,
  [SMALL_STATE(144)] = 2401,
  [SMALL_STATE(145)] = 2414,
  [SMALL_STATE(146)] = 2427,
  [SMALL_STATE(147)] = 2437,
  [SMALL_STATE(148)] = 2447,
  [SMALL_STATE(149)] = 2455,
  [SMALL_STATE(150)] = 2465,
  [SMALL_STATE(151)] = 2475,
  [SMALL_STATE(152)] = 2481,
  [SMALL_STATE(153)] = 2491,
  [SMALL_STATE(154)] = 2501,
  [SMALL_STATE(155)] = 2511,
  [SMALL_STATE(156)] = 2521,
  [SMALL_STATE(157)] = 2531,
  [SMALL_STATE(158)] = 2541,
  [SMALL_STATE(159)] = 2549,
  [SMALL_STATE(160)] = 2559,
  [SMALL_STATE(161)] = 2569,
  [SMALL_STATE(162)] = 2579,
  [SMALL_STATE(163)] = 2587,
  [SMALL_STATE(164)] = 2597,
  [SMALL_STATE(165)] = 2607,
  [SMALL_STATE(166)] = 2613,
  [SMALL_STATE(167)] = 2623,
  [SMALL_STATE(168)] = 2633,
  [SMALL_STATE(169)] = 2643,
  [SMALL_STATE(170)] = 2649,
  [SMALL_STATE(171)] = 2659,
  [SMALL_STATE(172)] = 2669,
  [SMALL_STATE(173)] = 2675,
  [SMALL_STATE(174)] = 2685,
  [SMALL_STATE(175)] = 2693,
  [SMALL_STATE(176)] = 2701,
  [SMALL_STATE(177)] = 2711,
  [SMALL_STATE(178)] = 2719,
  [SMALL_STATE(179)] = 2727,
  [SMALL_STATE(180)] = 2734,
  [SMALL_STATE(181)] = 2739,
  [SMALL_STATE(182)] = 2746,
  [SMALL_STATE(183)] = 2751,
  [SMALL_STATE(184)] = 2758,
  [SMALL_STATE(185)] = 2763,
  [SMALL_STATE(186)] = 2770,
  [SMALL_STATE(187)] = 2775,
  [SMALL_STATE(188)] = 2780,
  [SMALL_STATE(189)] = 2785,
  [SMALL_STATE(190)] = 2790,
  [SMALL_STATE(191)] = 2795,
  [SMALL_STATE(192)] = 2802,
  [SMALL_STATE(193)] = 2807,
  [SMALL_STATE(194)] = 2812,
  [SMALL_STATE(195)] = 2817,
  [SMALL_STATE(196)] = 2824,
  [SMALL_STATE(197)] = 2831,
  [SMALL_STATE(198)] = 2836,
  [SMALL_STATE(199)] = 2841,
  [SMALL_STATE(200)] = 2846,
  [SMALL_STATE(201)] = 2853,
  [SMALL_STATE(202)] = 2860,
  [SMALL_STATE(203)] = 2867,
  [SMALL_STATE(204)] = 2874,
  [SMALL_STATE(205)] = 2879,
  [SMALL_STATE(206)] = 2884,
  [SMALL_STATE(207)] = 2891,
  [SMALL_STATE(208)] = 2896,
  [SMALL_STATE(209)] = 2903,
  [SMALL_STATE(210)] = 2908,
  [SMALL_STATE(211)] = 2913,
  [SMALL_STATE(212)] = 2920,
  [SMALL_STATE(213)] = 2925,
  [SMALL_STATE(214)] = 2930,
  [SMALL_STATE(215)] = 2935,
  [SMALL_STATE(216)] = 2942,
  [SMALL_STATE(217)] = 2949,
  [SMALL_STATE(218)] = 2954,
  [SMALL_STATE(219)] = 2959,
  [SMALL_STATE(220)] = 2966,
  [SMALL_STATE(221)] = 2971,
  [SMALL_STATE(222)] = 2976,
  [SMALL_STATE(223)] = 2983,
  [SMALL_STATE(224)] = 2990,
  [SMALL_STATE(225)] = 2995,
  [SMALL_STATE(226)] = 3002,
  [SMALL_STATE(227)] = 3009,
  [SMALL_STATE(228)] = 3014,
  [SMALL_STATE(229)] = 3021,
  [SMALL_STATE(230)] = 3026,
  [SMALL_STATE(231)] = 3033,
  [SMALL_STATE(232)] = 3038,
  [SMALL_STATE(233)] = 3043,
  [SMALL_STATE(234)] = 3048,
  [SMALL_STATE(235)] = 3055,
  [SMALL_STATE(236)] = 3060,
  [SMALL_STATE(237)] = 3067,
  [SMALL_STATE(238)] = 3072,
  [SMALL_STATE(239)] = 3077,
  [SMALL_STATE(240)] = 3084,
  [SMALL_STATE(241)] = 3091,
  [SMALL_STATE(242)] = 3096,
  [SMALL_STATE(243)] = 3103,
  [SMALL_STATE(244)] = 3110,
  [SMALL_STATE(245)] = 3114,
  [SMALL_STATE(246)] = 3118,
  [SMALL_STATE(247)] = 3122,
  [SMALL_STATE(248)] = 3126,
  [SMALL_STATE(249)] = 3130,
  [SMALL_STATE(250)] = 3134,
  [SMALL_STATE(251)] = 3138,
  [SMALL_STATE(252)] = 3142,
  [SMALL_STATE(253)] = 3146,
  [SMALL_STATE(254)] = 3150,
  [SMALL_STATE(255)] = 3154,
  [SMALL_STATE(256)] = 3158,
  [SMALL_STATE(257)] = 3162,
  [SMALL_STATE(258)] = 3166,
  [SMALL_STATE(259)] = 3170,
  [SMALL_STATE(260)] = 3174,
  [SMALL_STATE(261)] = 3178,
  [SMALL_STATE(262)] = 3182,
  [SMALL_STATE(263)] = 3186,
  [SMALL_STATE(264)] = 3190,
  [SMALL_STATE(265)] = 3194,
  [SMALL_STATE(266)] = 3198,
  [SMALL_STATE(267)] = 3202,
  [SMALL_STATE(268)] = 3206,
  [SMALL_STATE(269)] = 3210,
  [SMALL_STATE(270)] = 3214,
  [SMALL_STATE(271)] = 3218,
  [SMALL_STATE(272)] = 3222,
  [SMALL_STATE(273)] = 3226,
  [SMALL_STATE(274)] = 3230,
  [SMALL_STATE(275)] = 3234,
  [SMALL_STATE(276)] = 3238,
  [SMALL_STATE(277)] = 3242,
  [SMALL_STATE(278)] = 3246,
  [SMALL_STATE(279)] = 3250,
  [SMALL_STATE(280)] = 3254,
  [SMALL_STATE(281)] = 3258,
  [SMALL_STATE(282)] = 3262,
  [SMALL_STATE(283)] = 3266,
  [SMALL_STATE(284)] = 3270,
  [SMALL_STATE(285)] = 3274,
  [SMALL_STATE(286)] = 3278,
  [SMALL_STATE(287)] = 3282,
  [SMALL_STATE(288)] = 3286,
  [SMALL_STATE(289)] = 3290,
  [SMALL_STATE(290)] = 3294,
  [SMALL_STATE(291)] = 3298,
  [SMALL_STATE(292)] = 3302,
  [SMALL_STATE(293)] = 3306,
  [SMALL_STATE(294)] = 3310,
  [SMALL_STATE(295)] = 3314,
  [SMALL_STATE(296)] = 3318,
  [SMALL_STATE(297)] = 3322,
  [SMALL_STATE(298)] = 3326,
  [SMALL_STATE(299)] = 3330,
  [SMALL_STATE(300)] = 3334,
  [SMALL_STATE(301)] = 3338,
  [SMALL_STATE(302)] = 3342,
  [SMALL_STATE(303)] = 3346,
  [SMALL_STATE(304)] = 3350,
  [SMALL_STATE(305)] = 3354,
  [SMALL_STATE(306)] = 3358,
  [SMALL_STATE(307)] = 3362,
  [SMALL_STATE(308)] = 3366,
  [SMALL_STATE(309)] = 3370,
  [SMALL_STATE(310)] = 3374,
  [SMALL_STATE(311)] = 3378,
  [SMALL_STATE(312)] = 3382,
  [SMALL_STATE(313)] = 3386,
  [SMALL_STATE(314)] = 3390,
  [SMALL_STATE(315)] = 3394,
  [SMALL_STATE(316)] = 3398,
  [SMALL_STATE(317)] = 3402,
  [SMALL_STATE(318)] = 3406,
  [SMALL_STATE(319)] = 3410,
  [SMALL_STATE(320)] = 3414,
  [SMALL_STATE(321)] = 3418,
  [SMALL_STATE(322)] = 3422,
  [SMALL_STATE(323)] = 3426,
  [SMALL_STATE(324)] = 3430,
  [SMALL_STATE(325)] = 3434,
  [SMALL_STATE(326)] = 3438,
  [SMALL_STATE(327)] = 3442,
  [SMALL_STATE(328)] = 3446,
  [SMALL_STATE(329)] = 3450,
  [SMALL_STATE(330)] = 3454,
  [SMALL_STATE(331)] = 3458,
  [SMALL_STATE(332)] = 3462,
  [SMALL_STATE(333)] = 3466,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2, 0, 0), SHIFT_REPEAT(258),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2, 0, 0), SHIFT_REPEAT(329),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2, 0, 0), SHIFT_REPEAT(19),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2, 0, 0), SHIFT_REPEAT(322),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2, 0, 0), SHIFT_REPEAT(323),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2, 0, 0), SHIFT_REPEAT(324),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 6, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 7, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2, 0, 0), SHIFT_REPEAT(327),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2, 0, 0), SHIFT_REPEAT(328),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2, 0, 0), SHIFT_REPEAT(330),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2, 0, 0), SHIFT_REPEAT(331),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2, 0, 0), SHIFT_REPEAT(332),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2, 0, 0), SHIFT_REPEAT(34),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementdecl, 7, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__EntityDecl, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 6, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 8, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementdecl, 8, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 8, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotationDecl, 8, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 4, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 8, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 7, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 7, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEDecl, 9, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 9, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 9, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markupdecl, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 5, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 10, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEDecl, 10, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 7, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 7, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotationDecl, 7, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 6, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 6, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 7, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 5, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 5, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2, 0, 0),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2, 0, 0),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat2, 2, 0, 0),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat2, 2, 0, 0), SHIFT_REPEAT(321),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat2, 2, 0, 0), SHIFT_REPEAT(240),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2, 0, 0),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2, 0, 0),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat2, 2, 0, 0),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat2, 2, 0, 0), SHIFT_REPEAT(321),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2, 0, 0),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1, 0, 0),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1, 0, 0), SHIFT_REPEAT(137),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat2, 1, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1, 0, 0),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2, 0, 0), SHIFT(21),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3, 0, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 7, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3, 0, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 8, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [790] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_PITarget = 0,
  ts_external_token__pi_content = 1,
  ts_external_token_Comment = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_PITarget] = sym_PITarget,
  [ts_external_token__pi_content] = sym__pi_content,
  [ts_external_token_Comment] = sym_Comment,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_PITarget] = true,
    [ts_external_token__pi_content] = true,
    [ts_external_token_Comment] = true,
  },
  [2] = {
    [ts_external_token_Comment] = true,
  },
  [3] = {
    [ts_external_token_PITarget] = true,
  },
  [4] = {
    [ts_external_token__pi_content] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_dtd_external_scanner_create(void);
void tree_sitter_dtd_external_scanner_destroy(void *);
bool tree_sitter_dtd_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_dtd_external_scanner_serialize(void *, char *);
void tree_sitter_dtd_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dtd(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_Name,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_dtd_external_scanner_create,
      tree_sitter_dtd_external_scanner_destroy,
      tree_sitter_dtd_external_scanner_scan,
      tree_sitter_dtd_external_scanner_serialize,
      tree_sitter_dtd_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
