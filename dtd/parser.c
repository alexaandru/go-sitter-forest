#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
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
  [42] = 20,
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
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 20,
  [73] = 20,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 78,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 76,
  [89] = 77,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 78,
  [94] = 76,
  [95] = 95,
  [96] = 77,
  [97] = 97,
  [98] = 78,
  [99] = 99,
  [100] = 100,
  [101] = 76,
  [102] = 77,
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
  [313] = 305,
  [314] = 258,
  [315] = 252,
  [316] = 305,
  [317] = 258,
  [318] = 252,
  [319] = 305,
  [320] = 258,
  [321] = 252,
  [322] = 294,
  [323] = 285,
  [324] = 286,
  [325] = 287,
  [326] = 294,
  [327] = 285,
  [328] = 286,
  [329] = 287,
  [330] = 294,
  [331] = 285,
  [332] = 286,
  [333] = 287,
};

static inline bool aux_sym_PubidLiteral_token1_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < ' '
      ? (c < '\r'
        ? c == '\n'
        : c <= '\r')
      : (c <= '!' || (c >= '#' && c <= '%')))
    : (c <= ';' || (c < '_'
      ? (c < '?'
        ? c == '='
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool aux_sym_PubidLiteral_token2_character_set_1(int32_t c) {
  return (c < '('
    ? (c < ' '
      ? (c < '\r'
        ? c == '\n'
        : c <= '\r')
      : (c <= '!' || (c >= '#' && c <= '%')))
    : (c <= ';' || (c < '_'
      ? (c < '?'
        ? c == '='
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '&') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '?') ADVANCE(51);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(69);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == 183) ADVANCE(76);
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
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == '?') ADVANCE(9);
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
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
          lookahead == 183) ADVANCE(117);
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
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '?') ADVANCE(51);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(117);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(117);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(117);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(56);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(107);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(56);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(95);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(91);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(113);
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
          lookahead == 183) ADVANCE(117);
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
          lookahead == 183) ADVANCE(117);
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
          lookahead == 183) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(117);
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
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(128);
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
      if (lookahead == 'A') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(2);
      if (lookahead == 'E') ADVANCE(3);
      if (lookahead == 'I') ADVANCE(4);
      if (lookahead == 'N') ADVANCE(5);
      if (lookahead == 'P') ADVANCE(6);
      if (lookahead == 'S') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(10);
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
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 39},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 39},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 39, .external_lex_state = 2},
  [36] = {.lex_state = 39, .external_lex_state = 2},
  [37] = {.lex_state = 39, .external_lex_state = 2},
  [38] = {.lex_state = 39, .external_lex_state = 2},
  [39] = {.lex_state = 39},
  [40] = {.lex_state = 39, .external_lex_state = 2},
  [41] = {.lex_state = 39, .external_lex_state = 2},
  [42] = {.lex_state = 39, .external_lex_state = 2},
  [43] = {.lex_state = 39, .external_lex_state = 2},
  [44] = {.lex_state = 39},
  [45] = {.lex_state = 39},
  [46] = {.lex_state = 39, .external_lex_state = 2},
  [47] = {.lex_state = 39, .external_lex_state = 2},
  [48] = {.lex_state = 39},
  [49] = {.lex_state = 39, .external_lex_state = 2},
  [50] = {.lex_state = 39, .external_lex_state = 2},
  [51] = {.lex_state = 39, .external_lex_state = 2},
  [52] = {.lex_state = 39, .external_lex_state = 2},
  [53] = {.lex_state = 39, .external_lex_state = 2},
  [54] = {.lex_state = 39},
  [55] = {.lex_state = 39, .external_lex_state = 2},
  [56] = {.lex_state = 39, .external_lex_state = 2},
  [57] = {.lex_state = 39, .external_lex_state = 2},
  [58] = {.lex_state = 39, .external_lex_state = 2},
  [59] = {.lex_state = 39, .external_lex_state = 2},
  [60] = {.lex_state = 39, .external_lex_state = 2},
  [61] = {.lex_state = 39},
  [62] = {.lex_state = 39},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 39},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 39},
  [69] = {.lex_state = 39},
  [70] = {.lex_state = 39},
  [71] = {.lex_state = 39, .external_lex_state = 2},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 39},
  [75] = {.lex_state = 39},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 39},
  [81] = {.lex_state = 39},
  [82] = {.lex_state = 39},
  [83] = {.lex_state = 39, .external_lex_state = 2},
  [84] = {.lex_state = 39},
  [85] = {.lex_state = 39},
  [86] = {.lex_state = 39},
  [87] = {.lex_state = 39, .external_lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 39},
  [91] = {.lex_state = 39},
  [92] = {.lex_state = 39},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 39},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 39},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 39},
  [100] = {.lex_state = 39},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 39},
  [104] = {.lex_state = 39},
  [105] = {.lex_state = 39},
  [106] = {.lex_state = 39},
  [107] = {.lex_state = 39},
  [108] = {.lex_state = 39},
  [109] = {.lex_state = 39},
  [110] = {.lex_state = 39},
  [111] = {.lex_state = 39},
  [112] = {.lex_state = 39},
  [113] = {.lex_state = 39},
  [114] = {.lex_state = 39},
  [115] = {.lex_state = 39},
  [116] = {.lex_state = 39},
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
  [153] = {.lex_state = 5},
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
  [176] = {.lex_state = 39},
  [177] = {.lex_state = 39},
  [178] = {.lex_state = 39},
  [179] = {.lex_state = 39},
  [180] = {.lex_state = 39},
  [181] = {.lex_state = 39, .external_lex_state = 3},
  [182] = {.lex_state = 39},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 5},
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
  [196] = {.lex_state = 39},
  [197] = {.lex_state = 39},
  [198] = {.lex_state = 39},
  [199] = {.lex_state = 39},
  [200] = {.lex_state = 39},
  [201] = {.lex_state = 39},
  [202] = {.lex_state = 39},
  [203] = {.lex_state = 39},
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
  [215] = {.lex_state = 39},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 39},
  [218] = {.lex_state = 39},
  [219] = {.lex_state = 35},
  [220] = {.lex_state = 39},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 39},
  [223] = {.lex_state = 39},
  [224] = {.lex_state = 39},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 39},
  [227] = {.lex_state = 39},
  [228] = {.lex_state = 39},
  [229] = {.lex_state = 39},
  [230] = {.lex_state = 39},
  [231] = {.lex_state = 35},
  [232] = {.lex_state = 39},
  [233] = {.lex_state = 39},
  [234] = {.lex_state = 39},
  [235] = {.lex_state = 39},
  [236] = {.lex_state = 39},
  [237] = {.lex_state = 39},
  [238] = {.lex_state = 39},
  [239] = {.lex_state = 35},
  [240] = {.lex_state = 39},
  [241] = {.lex_state = 39},
  [242] = {.lex_state = 39},
  [243] = {.lex_state = 39},
  [244] = {.lex_state = 126},
  [245] = {.lex_state = 38},
  [246] = {.lex_state = 39},
  [247] = {.lex_state = 39},
  [248] = {.lex_state = 39},
  [249] = {.lex_state = 39},
  [250] = {.lex_state = 39},
  [251] = {.lex_state = 39},
  [252] = {.lex_state = 39},
  [253] = {.lex_state = 39},
  [254] = {.lex_state = 39},
  [255] = {.lex_state = 39},
  [256] = {.lex_state = 39},
  [257] = {.lex_state = 35},
  [258] = {.lex_state = 39},
  [259] = {.lex_state = 39},
  [260] = {.lex_state = 39},
  [261] = {.lex_state = 39},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 39},
  [264] = {.lex_state = 39},
  [265] = {.lex_state = 39},
  [266] = {.lex_state = 39},
  [267] = {.lex_state = 39},
  [268] = {.lex_state = 39},
  [269] = {.lex_state = 39},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 39},
  [272] = {.lex_state = 128},
  [273] = {.lex_state = 35},
  [274] = {.lex_state = 39},
  [275] = {.lex_state = 39},
  [276] = {.lex_state = 39},
  [277] = {.lex_state = 39},
  [278] = {.lex_state = 39},
  [279] = {.lex_state = 127},
  [280] = {.lex_state = 39},
  [281] = {.lex_state = 35},
  [282] = {.lex_state = 39},
  [283] = {.lex_state = 0, .external_lex_state = 4},
  [284] = {.lex_state = 39},
  [285] = {.lex_state = 39},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 37},
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
  [298] = {.lex_state = 125},
  [299] = {.lex_state = 39},
  [300] = {.lex_state = 38},
  [301] = {.lex_state = 39},
  [302] = {.lex_state = 0, .external_lex_state = 3},
  [303] = {.lex_state = 39},
  [304] = {.lex_state = 39},
  [305] = {.lex_state = 39},
  [306] = {.lex_state = 39},
  [307] = {.lex_state = 39},
  [308] = {.lex_state = 39},
  [309] = {.lex_state = 39},
  [310] = {.lex_state = 39},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 39},
  [313] = {.lex_state = 39},
  [314] = {.lex_state = 39},
  [315] = {.lex_state = 39},
  [316] = {.lex_state = 39},
  [317] = {.lex_state = 39},
  [318] = {.lex_state = 39},
  [319] = {.lex_state = 39},
  [320] = {.lex_state = 39},
  [321] = {.lex_state = 39},
  [322] = {.lex_state = 39},
  [323] = {.lex_state = 39},
  [324] = {.lex_state = 5},
  [325] = {.lex_state = 37},
  [326] = {.lex_state = 39},
  [327] = {.lex_state = 39},
  [328] = {.lex_state = 5},
  [329] = {.lex_state = 37},
  [330] = {.lex_state = 39},
  [331] = {.lex_state = 39},
  [332] = {.lex_state = 5},
  [333] = {.lex_state = 37},
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
    [sym_document] = STATE(311),
    [sym__extSubsetDecl] = STATE(9),
    [sym_conditionalSect] = STATE(9),
    [sym__markupdecl] = STATE(9),
    [sym__DeclSep] = STATE(9),
    [sym_elementdecl] = STATE(37),
    [sym_AttlistDecl] = STATE(37),
    [sym__EntityDecl] = STATE(37),
    [sym_GEDecl] = STATE(56),
    [sym_PEDecl] = STATE(56),
    [sym_NotationDecl] = STATE(37),
    [sym_PEReference] = STATE(9),
    [sym_XMLDecl] = STATE(11),
    [sym_PI] = STATE(37),
    [aux_sym_document_repeat1] = STATE(9),
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
    STATE(56), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(37), 5,
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
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    STATE(56), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(37), 5,
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
  [83] = 10,
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
    ACTIONS(41), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(43), 1,
      sym__S,
    STATE(56), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(37), 5,
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
    ACTIONS(45), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(47), 1,
      sym__S,
    STATE(56), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(37), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(8), 6,
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
    ACTIONS(43), 1,
      sym__S,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(56), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(37), 5,
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
  [206] = 10,
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
      sym__S,
    ACTIONS(51), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(56), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(37), 5,
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
    ACTIONS(35), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(43), 1,
      sym__S,
    STATE(56), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(37), 5,
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
  [288] = 10,
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
      sym__S,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(56), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(37), 5,
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
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(51), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(55), 1,
      sym__S,
    STATE(56), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(37), 5,
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
    STATE(56), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(37), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(6), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [408] = 8,
    ACTIONS(59), 1,
      anon_sym_PERCENT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(65), 1,
      anon_sym_AMP,
    ACTIONS(67), 1,
      anon_sym_AMP_POUND,
    ACTIONS(69), 1,
      anon_sym_AMP_POUNDx,
    STATE(78), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [436] = 8,
    ACTIONS(71), 1,
      anon_sym_PERCENT,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(79), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      anon_sym_AMP_POUND,
    ACTIONS(85), 1,
      anon_sym_AMP_POUNDx,
    STATE(79), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(13), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [464] = 5,
    STATE(66), 1,
      aux_sym_Mixed_repeat1,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
    ACTIONS(90), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(88), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [486] = 8,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_PERCENT,
    ACTIONS(94), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(98), 1,
      anon_sym_AMP_POUND,
    ACTIONS(100), 1,
      anon_sym_AMP_POUNDx,
    STATE(79), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(19), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [514] = 5,
    STATE(63), 1,
      aux_sym_Mixed_repeat1,
    STATE(134), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
    ACTIONS(90), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(88), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [536] = 8,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(110), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_AMP_POUND,
    ACTIONS(116), 1,
      anon_sym_AMP_POUNDx,
    STATE(78), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(17), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [564] = 8,
    ACTIONS(59), 1,
      anon_sym_PERCENT,
    ACTIONS(65), 1,
      anon_sym_AMP,
    ACTIONS(67), 1,
      anon_sym_AMP_POUND,
    ACTIONS(69), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      aux_sym_EntityValue_token2,
    STATE(78), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(17), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [592] = 8,
    ACTIONS(92), 1,
      anon_sym_PERCENT,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(98), 1,
      anon_sym_AMP_POUND,
    ACTIONS(100), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      aux_sym_EntityValue_token1,
    STATE(79), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(13), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [620] = 1,
    ACTIONS(125), 11,
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
  [634] = 7,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_NOTATION,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    STATE(192), 1,
      sym__AttType,
    ACTIONS(129), 2,
      sym_StringType,
      sym_TokenizedType,
    STATE(197), 2,
      sym_NotationType,
      sym_Enumeration,
    STATE(240), 2,
      sym__EnumeratedType,
      sym_PEReference,
  [659] = 1,
    ACTIONS(135), 9,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [671] = 1,
    ACTIONS(137), 9,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [683] = 7,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_AMP,
    ACTIONS(143), 1,
      anon_sym_AMP_POUND,
    ACTIONS(145), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(147), 1,
      aux_sym_AttValue_token2,
    STATE(31), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(98), 2,
      sym_EntityRef,
      sym_CharRef,
  [707] = 1,
    ACTIONS(149), 9,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [719] = 1,
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
  [731] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym__choice,
    STATE(235), 1,
      sym_contentspec,
    ACTIONS(153), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(238), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [753] = 7,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(161), 1,
      anon_sym_AMP_POUND,
    ACTIONS(163), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(165), 1,
      aux_sym_AttValue_token1,
    STATE(32), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(93), 2,
      sym_EntityRef,
      sym_CharRef,
  [777] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(169), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    STATE(179), 1,
      sym_DefaultDecl,
    ACTIONS(167), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
    STATE(236), 2,
      sym_PEReference,
      sym_AttValue,
  [801] = 7,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_AMP,
    ACTIONS(180), 1,
      anon_sym_AMP_POUND,
    ACTIONS(183), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(186), 1,
      aux_sym_AttValue_token2,
    STATE(30), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(98), 2,
      sym_EntityRef,
      sym_CharRef,
  [825] = 7,
    ACTIONS(141), 1,
      anon_sym_AMP,
    ACTIONS(143), 1,
      anon_sym_AMP_POUND,
    ACTIONS(145), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      aux_sym_AttValue_token2,
    STATE(30), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(98), 2,
      sym_EntityRef,
      sym_CharRef,
  [849] = 7,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_AMP,
    ACTIONS(196), 1,
      anon_sym_AMP_POUND,
    ACTIONS(199), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(202), 1,
      aux_sym_AttValue_token1,
    STATE(32), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(93), 2,
      sym_EntityRef,
      sym_CharRef,
  [873] = 1,
    ACTIONS(205), 9,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [885] = 7,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(161), 1,
      anon_sym_AMP_POUND,
    ACTIONS(163), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(207), 1,
      aux_sym_AttValue_token1,
    STATE(28), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
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
  [935] = 2,
    ACTIONS(219), 1,
      anon_sym_LT_BANG,
    ACTIONS(217), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [948] = 2,
    ACTIONS(223), 1,
      anon_sym_LT_BANG,
    ACTIONS(221), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [961] = 8,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(225), 1,
      sym_Name,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(231), 1,
      sym__S,
    STATE(16), 1,
      sym_PEReference,
    STATE(44), 1,
      sym__cp,
    STATE(45), 1,
      sym__choice,
  [986] = 2,
    ACTIONS(235), 1,
      anon_sym_LT_BANG,
    ACTIONS(233), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [999] = 2,
    ACTIONS(239), 1,
      anon_sym_LT_BANG,
    ACTIONS(237), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1012] = 2,
    ACTIONS(241), 1,
      anon_sym_LT_BANG,
    ACTIONS(125), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1025] = 2,
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
  [1038] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 1,
      sym__S,
    STATE(54), 1,
      aux_sym__choice_repeat1,
    ACTIONS(247), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    STATE(95), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1059] = 2,
    ACTIONS(90), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(88), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [1072] = 2,
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
  [1085] = 2,
    ACTIONS(259), 1,
      anon_sym_LT_BANG,
    ACTIONS(257), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1098] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(263), 1,
      sym__S,
    STATE(85), 1,
      aux_sym__choice_repeat1,
    ACTIONS(247), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    STATE(109), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1119] = 2,
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
  [1132] = 2,
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
  [1145] = 2,
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
  [1158] = 2,
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
  [1171] = 2,
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
  [1184] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(287), 1,
      sym__S,
    STATE(85), 1,
      aux_sym__choice_repeat1,
    ACTIONS(247), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    STATE(110), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
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
  [1270] = 2,
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
  [1283] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(287), 1,
      sym__S,
    STATE(48), 1,
      aux_sym__choice_repeat1,
    ACTIONS(247), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    STATE(110), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1304] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_PIPE,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(317), 1,
      sym__S,
    STATE(66), 1,
      aux_sym_Mixed_repeat1,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
  [1326] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_PIPE,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(321), 1,
      sym__S,
    STATE(107), 1,
      aux_sym_Mixed_repeat1,
    STATE(122), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
  [1348] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(225), 1,
      sym_Name,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      sym__S,
    STATE(92), 1,
      sym__cp,
    STATE(45), 2,
      sym__choice,
      sym_PEReference,
  [1368] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(225), 1,
      sym_Name,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      sym__S,
    STATE(44), 1,
      sym__cp,
    STATE(45), 2,
      sym__choice,
      sym_PEReference,
  [1388] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(329), 1,
      sym__S,
    STATE(107), 1,
      aux_sym_Mixed_repeat1,
    STATE(144), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
  [1410] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_PIPE,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(333), 1,
      sym__S,
    STATE(63), 1,
      aux_sym_Mixed_repeat1,
    STATE(134), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
  [1432] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(225), 1,
      sym_Name,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_POUNDPCDATA,
    STATE(14), 1,
      sym_PEReference,
    STATE(45), 1,
      sym__choice,
    STATE(61), 1,
      sym__cp,
  [1454] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(225), 1,
      sym_Name,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      sym__S,
    STATE(105), 1,
      sym__cp,
    STATE(45), 2,
      sym__choice,
      sym_PEReference,
  [1474] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(225), 1,
      sym_Name,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym__cp,
    STATE(45), 2,
      sym__choice,
      sym_PEReference,
  [1491] = 2,
    ACTIONS(341), 1,
      anon_sym_LT_BANG,
    ACTIONS(339), 5,
      sym_Comment,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1502] = 2,
    ACTIONS(241), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(125), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1513] = 2,
    ACTIONS(241), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(125), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1524] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(225), 1,
      sym_Name,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym__cp,
    STATE(45), 2,
      sym__choice,
      sym_PEReference,
  [1541] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(225), 1,
      sym_Name,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym__cp,
    STATE(45), 2,
      sym__choice,
      sym_PEReference,
  [1558] = 2,
    ACTIONS(345), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(343), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1569] = 2,
    ACTIONS(349), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(347), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1580] = 2,
    ACTIONS(353), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(351), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1591] = 2,
    ACTIONS(353), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(351), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1602] = 5,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      anon_sym_SQUOTE,
    ACTIONS(359), 1,
      anon_sym_SYSTEM,
    ACTIONS(361), 1,
      anon_sym_PUBLIC,
    STATE(218), 2,
      sym_EntityValue,
      sym_ExternalID,
  [1619] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      sym_Name,
    ACTIONS(365), 1,
      anon_sym_PIPE,
    ACTIONS(367), 1,
      sym__S,
    STATE(115), 1,
      aux_sym_NotationType_repeat1,
    STATE(191), 1,
      sym_PEReference,
  [1638] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(365), 1,
      anon_sym_PIPE,
    ACTIONS(367), 1,
      sym__S,
    ACTIONS(369), 1,
      sym_Name,
    STATE(115), 1,
      aux_sym_NotationType_repeat1,
    STATE(198), 1,
      sym_PEReference,
  [1657] = 2,
    ACTIONS(373), 1,
      anon_sym_LT_BANG,
    ACTIONS(371), 5,
      sym_Comment,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1668] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(359), 1,
      anon_sym_SYSTEM,
    ACTIONS(375), 1,
      anon_sym_PUBLIC,
    STATE(254), 1,
      sym_PEReference,
    STATE(223), 2,
      sym_ExternalID,
      sym_PublicID,
  [1685] = 4,
    ACTIONS(382), 1,
      sym__S,
    STATE(85), 1,
      aux_sym__choice_repeat1,
    ACTIONS(377), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    ACTIONS(380), 2,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
  [1700] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(365), 1,
      anon_sym_PIPE,
    ACTIONS(367), 1,
      sym__S,
    ACTIONS(369), 1,
      sym_Name,
    STATE(81), 1,
      aux_sym_NotationType_repeat1,
    STATE(198), 1,
      sym_PEReference,
  [1719] = 2,
    ACTIONS(387), 1,
      anon_sym_LT_BANG,
    ACTIONS(385), 5,
      sym_Comment,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1730] = 2,
    ACTIONS(345), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(343), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1741] = 2,
    ACTIONS(349), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(347), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1752] = 6,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      anon_sym_SQUOTE,
    ACTIONS(359), 1,
      anon_sym_SYSTEM,
    ACTIONS(361), 1,
      anon_sym_PUBLIC,
    STATE(175), 1,
      sym_ExternalID,
    STATE(220), 1,
      sym_EntityValue,
  [1771] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(365), 1,
      anon_sym_PIPE,
    ACTIONS(367), 1,
      sym__S,
    ACTIONS(389), 1,
      sym_Name,
    STATE(82), 1,
      aux_sym_NotationType_repeat1,
    STATE(206), 1,
      sym_PEReference,
  [1790] = 1,
    ACTIONS(380), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [1798] = 2,
    ACTIONS(353), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(351), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1808] = 2,
    ACTIONS(345), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(343), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1818] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(391), 1,
      sym__S,
    STATE(104), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1832] = 2,
    ACTIONS(349), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(347), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1842] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      sym_PEReference,
    ACTIONS(393), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1856] = 2,
    ACTIONS(353), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(351), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1866] = 1,
    ACTIONS(395), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [1874] = 1,
    ACTIONS(397), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [1882] = 2,
    ACTIONS(345), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(343), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1892] = 2,
    ACTIONS(349), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(347), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1902] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 1,
      anon_sym_PIPE,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
  [1918] = 4,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    ACTIONS(403), 1,
      anon_sym_PERCENT,
    ACTIONS(406), 1,
      sym__S,
    STATE(104), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1932] = 1,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [1940] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 1,
      anon_sym_PIPE,
    STATE(144), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
  [1956] = 4,
    ACTIONS(411), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      sym__S,
    STATE(107), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(414), 2,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
  [1970] = 2,
    ACTIONS(419), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(421), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1980] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    ACTIONS(425), 1,
      sym__S,
    STATE(104), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1994] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(427), 1,
      sym__S,
    STATE(104), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [2008] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(399), 1,
      anon_sym_PIPE,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
  [2024] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(399), 1,
      anon_sym_PIPE,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
  [2040] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      sym_PEReference,
    ACTIONS(393), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2054] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      sym_PEReference,
    ACTIONS(393), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2068] = 4,
    ACTIONS(435), 1,
      anon_sym_PIPE,
    ACTIONS(438), 1,
      sym__S,
    STATE(115), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(433), 2,
      anon_sym_PERCENT,
      sym_Name,
  [2082] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(443), 1,
      sym__S,
    STATE(182), 1,
      sym_PEReference,
    ACTIONS(441), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [2096] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(445), 1,
      sym_Name,
    ACTIONS(447), 1,
      anon_sym_GT,
    STATE(230), 1,
      sym_PEReference,
  [2109] = 4,
    ACTIONS(449), 1,
      anon_sym_PIPE,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    ACTIONS(453), 1,
      sym__S,
    STATE(135), 1,
      aux_sym_Enumeration_repeat1,
  [2122] = 1,
    ACTIONS(433), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2129] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(455), 1,
      sym_Name,
    ACTIONS(457), 1,
      sym__S,
    STATE(91), 1,
      sym_PEReference,
  [2142] = 4,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    ACTIONS(461), 1,
      anon_sym_PERCENT,
    STATE(121), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
  [2155] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
  [2168] = 4,
    ACTIONS(449), 1,
      anon_sym_PIPE,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(466), 1,
      sym__S,
    STATE(135), 1,
      aux_sym_Enumeration_repeat1,
  [2181] = 2,
    ACTIONS(470), 1,
      sym__S,
    ACTIONS(468), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2190] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
  [2203] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(473), 1,
      sym_Name,
    ACTIONS(475), 1,
      sym__S,
    STATE(143), 1,
      sym_PEReference,
  [2216] = 1,
    ACTIONS(414), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym__S,
  [2223] = 3,
    ACTIONS(477), 1,
      anon_sym_GT,
    ACTIONS(479), 1,
      sym__S,
    STATE(140), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2234] = 3,
    ACTIONS(481), 1,
      anon_sym_GT,
    ACTIONS(483), 1,
      sym__S,
    STATE(129), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2245] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(486), 1,
      sym_Name,
    ACTIONS(488), 1,
      sym__S,
    STATE(127), 1,
      sym_PEReference,
  [2258] = 2,
    ACTIONS(490), 1,
      sym__S,
    ACTIONS(433), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2267] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
  [2280] = 1,
    ACTIONS(495), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2287] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
  [2300] = 4,
    ACTIONS(497), 1,
      anon_sym_PIPE,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      sym__S,
    STATE(135), 1,
      aux_sym_Enumeration_repeat1,
  [2313] = 4,
    ACTIONS(449), 1,
      anon_sym_PIPE,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    ACTIONS(507), 1,
      sym__S,
    STATE(123), 1,
      aux_sym_Enumeration_repeat1,
  [2326] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    STATE(189), 1,
      sym_PEReference,
    ACTIONS(509), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [2337] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(445), 1,
      sym_Name,
    ACTIONS(511), 1,
      anon_sym_GT,
    STATE(230), 1,
      sym_PEReference,
  [2350] = 4,
    ACTIONS(449), 1,
      anon_sym_PIPE,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(466), 1,
      sym__S,
    STATE(118), 1,
      aux_sym_Enumeration_repeat1,
  [2363] = 3,
    ACTIONS(511), 1,
      anon_sym_GT,
    ACTIONS(513), 1,
      sym__S,
    STATE(129), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2374] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
  [2387] = 1,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym__S,
  [2394] = 1,
    ACTIONS(519), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym__S,
  [2401] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_Mixed_repeat2,
    STATE(158), 1,
      sym_PEReference,
  [2414] = 4,
    ACTIONS(521), 1,
      anon_sym_ELEMENT,
    ACTIONS(523), 1,
      anon_sym_ATTLIST,
    ACTIONS(525), 1,
      anon_sym_NOTATION,
    ACTIONS(527), 1,
      anon_sym_ENTITY,
  [2427] = 2,
    ACTIONS(531), 1,
      anon_sym_STAR,
    ACTIONS(529), 2,
      anon_sym_GT,
      sym__S,
  [2435] = 3,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym_PubidLiteral,
  [2445] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(537), 1,
      sym_Name,
    STATE(275), 1,
      sym_PEReference,
  [2455] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(539), 1,
      sym_Name,
    STATE(128), 1,
      sym_PEReference,
  [2465] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(541), 1,
      sym_Name,
    STATE(269), 1,
      sym_PEReference,
  [2475] = 3,
    ACTIONS(543), 1,
      sym_Name,
    ACTIONS(545), 1,
      anon_sym_PERCENT,
    STATE(265), 1,
      sym_PEReference,
  [2485] = 1,
    ACTIONS(547), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2491] = 3,
    ACTIONS(549), 1,
      sym__S,
    ACTIONS(551), 1,
      anon_sym_QMARK_GT,
    STATE(225), 1,
      sym__EncodingDecl,
  [2501] = 1,
    ACTIONS(553), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2507] = 3,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    STATE(205), 1,
      sym_AttValue,
  [2517] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(555), 1,
      sym_Name,
    STATE(86), 1,
      sym_PEReference,
  [2527] = 3,
    ACTIONS(557), 1,
      sym__S,
    ACTIONS(559), 1,
      anon_sym_EQ,
    STATE(234), 1,
      sym__Eq,
  [2537] = 2,
    ACTIONS(563), 1,
      sym__S,
    ACTIONS(561), 2,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
  [2545] = 1,
    ACTIONS(500), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2551] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      sym_PEReference,
  [2561] = 2,
    ACTIONS(569), 1,
      sym__S,
    ACTIONS(567), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2569] = 3,
    ACTIONS(557), 1,
      sym__S,
    ACTIONS(559), 1,
      anon_sym_EQ,
    STATE(211), 1,
      sym__Eq,
  [2579] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      sym_PEReference,
  [2589] = 3,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
    STATE(290), 1,
      sym_PubidLiteral,
  [2599] = 3,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
    STATE(213), 1,
      sym_PubidLiteral,
  [2609] = 2,
    ACTIONS(573), 1,
      anon_sym_STAR,
    ACTIONS(571), 2,
      anon_sym_GT,
      sym__S,
  [2617] = 1,
    ACTIONS(401), 3,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym__S,
  [2623] = 3,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
    ACTIONS(577), 1,
      anon_sym_SQUOTE,
    STATE(199), 1,
      sym_SystemLiteral,
  [2633] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      sym_PEReference,
  [2643] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(445), 1,
      sym_Name,
    STATE(230), 1,
      sym_PEReference,
  [2653] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(579), 1,
      sym_Name,
    STATE(142), 1,
      sym_PEReference,
  [2663] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(473), 1,
      sym_Name,
    STATE(143), 1,
      sym_PEReference,
  [2673] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(581), 1,
      sym_Name,
    STATE(237), 1,
      sym_PEReference,
  [2683] = 3,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
    ACTIONS(577), 1,
      anon_sym_SQUOTE,
    STATE(243), 1,
      sym_SystemLiteral,
  [2693] = 3,
    ACTIONS(583), 1,
      anon_sym_GT,
    ACTIONS(585), 1,
      sym__S,
    STATE(194), 1,
      sym_NDataDecl,
  [2703] = 2,
    ACTIONS(589), 1,
      anon_sym_STAR,
    ACTIONS(587), 2,
      anon_sym_GT,
      sym__S,
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
  [2727] = 1,
    ACTIONS(599), 2,
      anon_sym_GT,
      sym__S,
  [2732] = 1,
    ACTIONS(601), 2,
      anon_sym_GT,
      sym__S,
  [2737] = 2,
    ACTIONS(603), 1,
      anon_sym_xml,
    ACTIONS(605), 1,
      sym_PITarget,
  [2744] = 2,
    ACTIONS(607), 1,
      anon_sym_LBRACK,
    ACTIONS(609), 1,
      sym__S,
  [2751] = 1,
    ACTIONS(611), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [2756] = 2,
    ACTIONS(613), 1,
      sym__S,
    ACTIONS(615), 1,
      anon_sym_QMARK_GT,
  [2763] = 2,
    ACTIONS(617), 1,
      sym__S,
    STATE(153), 1,
      sym__VersionInfo,
  [2770] = 1,
    ACTIONS(619), 2,
      anon_sym_GT,
      sym__S,
  [2775] = 1,
    ACTIONS(587), 2,
      anon_sym_GT,
      sym__S,
  [2780] = 1,
    ACTIONS(621), 2,
      anon_sym_GT,
      sym__S,
  [2785] = 2,
    ACTIONS(623), 1,
      anon_sym_LBRACK,
    ACTIONS(625), 1,
      sym__S,
  [2792] = 1,
    ACTIONS(459), 2,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
  [2797] = 2,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    ACTIONS(629), 1,
      sym__S,
  [2804] = 2,
    ACTIONS(631), 1,
      anon_sym_GT,
    ACTIONS(633), 1,
      sym__S,
  [2811] = 1,
    ACTIONS(635), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2816] = 2,
    ACTIONS(637), 1,
      anon_sym_GT,
    ACTIONS(639), 1,
      sym__S,
  [2823] = 2,
    ACTIONS(637), 1,
      anon_sym_GT,
    ACTIONS(641), 1,
      anon_sym_NDATA,
  [2830] = 1,
    ACTIONS(643), 2,
      anon_sym_GT,
      sym__S,
  [2835] = 1,
    ACTIONS(645), 2,
      anon_sym_GT,
      sym__S,
  [2840] = 2,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    ACTIONS(649), 1,
      sym__S,
  [2847] = 1,
    ACTIONS(651), 2,
      anon_sym_GT,
      sym__S,
  [2852] = 1,
    ACTIONS(653), 2,
      anon_sym_GT,
      sym__S,
  [2857] = 1,
    ACTIONS(655), 2,
      anon_sym_GT,
      sym__S,
  [2862] = 1,
    ACTIONS(657), 2,
      anon_sym_GT,
      sym__S,
  [2867] = 1,
    ACTIONS(659), 2,
      anon_sym_GT,
      sym__S,
  [2872] = 1,
    ACTIONS(661), 2,
      anon_sym_GT,
      sym__S,
  [2877] = 1,
    ACTIONS(663), 2,
      anon_sym_GT,
      sym__S,
  [2882] = 2,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    ACTIONS(667), 1,
      sym__S,
  [2889] = 2,
    ACTIONS(669), 1,
      anon_sym_PIPE,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
  [2896] = 1,
    ACTIONS(673), 2,
      anon_sym_GT,
      sym__S,
  [2901] = 1,
    ACTIONS(675), 2,
      anon_sym_GT,
      sym__S,
  [2906] = 2,
    ACTIONS(677), 1,
      sym_Name,
    ACTIONS(679), 1,
      sym__S,
  [2913] = 2,
    ACTIONS(681), 1,
      anon_sym_DQUOTE,
    ACTIONS(683), 1,
      anon_sym_SQUOTE,
  [2920] = 1,
    ACTIONS(685), 2,
      anon_sym_GT,
      sym__S,
  [2925] = 2,
    ACTIONS(687), 1,
      anon_sym_GT,
    ACTIONS(689), 1,
      sym__S,
  [2932] = 1,
    ACTIONS(687), 2,
      anon_sym_GT,
      sym__S,
  [2937] = 1,
    ACTIONS(595), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2942] = 1,
    ACTIONS(691), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [2947] = 1,
    ACTIONS(591), 2,
      anon_sym_GT,
      sym__S,
  [2952] = 2,
    ACTIONS(693), 1,
      anon_sym_GT,
    ACTIONS(695), 1,
      sym__S,
  [2959] = 2,
    ACTIONS(697), 1,
      sym__S,
    ACTIONS(699), 1,
      sym_Nmtoken,
  [2966] = 2,
    ACTIONS(583), 1,
      anon_sym_GT,
    ACTIONS(701), 1,
      sym__S,
  [2973] = 2,
    ACTIONS(703), 1,
      anon_sym_QMARK_GT,
    ACTIONS(705), 1,
      anon_sym_encoding,
  [2980] = 2,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    ACTIONS(669), 1,
      anon_sym_PIPE,
  [2987] = 2,
    ACTIONS(707), 1,
      anon_sym_GT,
    ACTIONS(709), 1,
      sym__S,
  [2994] = 1,
    ACTIONS(711), 2,
      anon_sym_GT,
      sym__S,
  [2999] = 2,
    ACTIONS(703), 1,
      anon_sym_QMARK_GT,
    ACTIONS(713), 1,
      sym__S,
  [3006] = 1,
    ACTIONS(715), 2,
      anon_sym_GT,
      sym__S,
  [3011] = 1,
    ACTIONS(529), 2,
      anon_sym_GT,
      sym__S,
  [3016] = 1,
    ACTIONS(393), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [3021] = 2,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    STATE(167), 1,
      sym_PEReference,
  [3028] = 2,
    ACTIONS(481), 1,
      anon_sym_GT,
    ACTIONS(717), 1,
      sym__S,
  [3035] = 2,
    ACTIONS(720), 1,
      sym__S,
    ACTIONS(722), 1,
      sym_Nmtoken,
  [3042] = 1,
    ACTIONS(724), 2,
      anon_sym_GT,
      sym__S,
  [3047] = 2,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(669), 1,
      anon_sym_PIPE,
  [3054] = 2,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    ACTIONS(728), 1,
      anon_sym_SQUOTE,
  [3061] = 2,
    ACTIONS(730), 1,
      anon_sym_GT,
    ACTIONS(732), 1,
      sym__S,
  [3068] = 1,
    ACTIONS(734), 2,
      anon_sym_GT,
      sym__S,
  [3073] = 1,
    ACTIONS(736), 2,
      anon_sym_GT,
      sym__S,
  [3078] = 1,
    ACTIONS(738), 2,
      anon_sym_GT,
      sym__S,
  [3083] = 2,
    ACTIONS(740), 1,
      sym__S,
    ACTIONS(742), 1,
      sym_Nmtoken,
  [3090] = 1,
    ACTIONS(744), 2,
      anon_sym_GT,
      sym__S,
  [3095] = 1,
    ACTIONS(746), 2,
      anon_sym_GT,
      sym__S,
  [3100] = 1,
    ACTIONS(748), 2,
      anon_sym_GT,
      sym__S,
  [3105] = 1,
    ACTIONS(750), 2,
      anon_sym_GT,
      sym__S,
  [3110] = 1,
    ACTIONS(752), 1,
      aux_sym_SystemLiteral_token2,
  [3114] = 1,
    ACTIONS(754), 1,
      sym_EncName,
  [3118] = 1,
    ACTIONS(756), 1,
      sym__S,
  [3122] = 1,
    ACTIONS(758), 1,
      sym__S,
  [3126] = 1,
    ACTIONS(531), 1,
      anon_sym_STAR,
  [3130] = 1,
    ACTIONS(760), 1,
      sym__S,
  [3134] = 1,
    ACTIONS(762), 1,
      anon_sym_EQ,
  [3138] = 1,
    ACTIONS(764), 1,
      sym_Name,
  [3142] = 1,
    ACTIONS(766), 1,
      anon_sym_SEMI,
  [3146] = 1,
    ACTIONS(768), 1,
      sym__S,
  [3150] = 1,
    ACTIONS(770), 1,
      sym__S,
  [3154] = 1,
    ACTIONS(772), 1,
      sym__S,
  [3158] = 1,
    ACTIONS(774), 1,
      sym__S,
  [3162] = 1,
    ACTIONS(699), 1,
      sym_Nmtoken,
  [3166] = 1,
    ACTIONS(776), 1,
      anon_sym_SEMI,
  [3170] = 1,
    ACTIONS(399), 1,
      anon_sym_PIPE,
  [3174] = 1,
    ACTIONS(593), 1,
      anon_sym_STAR,
  [3178] = 1,
    ACTIONS(778), 1,
      sym_VersionNum,
  [3182] = 1,
    ACTIONS(780), 1,
      anon_sym_QMARK_GT,
  [3186] = 1,
    ACTIONS(782), 1,
      sym_VersionNum,
  [3190] = 1,
    ACTIONS(784), 1,
      anon_sym_GT,
  [3194] = 1,
    ACTIONS(786), 1,
      sym__S,
  [3198] = 1,
    ACTIONS(788), 1,
      anon_sym_SQUOTE,
  [3202] = 1,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
  [3206] = 1,
    ACTIONS(790), 1,
      anon_sym_STAR,
  [3210] = 1,
    ACTIONS(792), 1,
      sym__S,
  [3214] = 1,
    ACTIONS(794), 1,
      anon_sym_QMARK_GT,
  [3218] = 1,
    ACTIONS(796), 1,
      anon_sym_DQUOTE,
  [3222] = 1,
    ACTIONS(798), 1,
      aux_sym_PubidLiteral_token2,
  [3226] = 1,
    ACTIONS(800), 1,
      sym_Nmtoken,
  [3230] = 1,
    ACTIONS(669), 1,
      anon_sym_PIPE,
  [3234] = 1,
    ACTIONS(802), 1,
      sym__S,
  [3238] = 1,
    ACTIONS(804), 1,
      anon_sym_LBRACK,
  [3242] = 1,
    ACTIONS(806), 1,
      anon_sym_PIPE,
  [3246] = 1,
    ACTIONS(808), 1,
      anon_sym_GT,
  [3250] = 1,
    ACTIONS(810), 1,
      aux_sym_PubidLiteral_token1,
  [3254] = 1,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
  [3258] = 1,
    ACTIONS(814), 1,
      sym_Nmtoken,
  [3262] = 1,
    ACTIONS(816), 1,
      anon_sym_version,
  [3266] = 1,
    ACTIONS(818), 1,
      sym__pi_content,
  [3270] = 1,
    ACTIONS(820), 1,
      anon_sym_GT,
  [3274] = 1,
    ACTIONS(822), 1,
      sym_Name,
  [3278] = 1,
    ACTIONS(824), 1,
      aux_sym_CharRef_token1,
  [3282] = 1,
    ACTIONS(824), 1,
      aux_sym_CharRef_token2,
  [3286] = 1,
    ACTIONS(796), 1,
      anon_sym_SQUOTE,
  [3290] = 1,
    ACTIONS(826), 1,
      sym__S,
  [3294] = 1,
    ACTIONS(689), 1,
      sym__S,
  [3298] = 1,
    ACTIONS(637), 1,
      anon_sym_GT,
  [3302] = 1,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
  [3306] = 1,
    ACTIONS(828), 1,
      anon_sym_DQUOTE,
  [3310] = 1,
    ACTIONS(830), 1,
      sym_Name,
  [3314] = 1,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
  [3318] = 1,
    ACTIONS(589), 1,
      anon_sym_STAR,
  [3322] = 1,
    ACTIONS(828), 1,
      anon_sym_SQUOTE,
  [3326] = 1,
    ACTIONS(832), 1,
      aux_sym_SystemLiteral_token1,
  [3330] = 1,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
  [3334] = 1,
    ACTIONS(836), 1,
      sym_EncName,
  [3338] = 1,
    ACTIONS(623), 1,
      anon_sym_LBRACK,
  [3342] = 1,
    ACTIONS(605), 1,
      sym_PITarget,
  [3346] = 1,
    ACTIONS(838), 1,
      anon_sym_SQUOTE,
  [3350] = 1,
    ACTIONS(838), 1,
      anon_sym_DQUOTE,
  [3354] = 1,
    ACTIONS(840), 1,
      anon_sym_SEMI,
  [3358] = 1,
    ACTIONS(842), 1,
      sym__S,
  [3362] = 1,
    ACTIONS(844), 1,
      sym__S,
  [3366] = 1,
    ACTIONS(846), 1,
      sym__S,
  [3370] = 1,
    ACTIONS(848), 1,
      sym__S,
  [3374] = 1,
    ACTIONS(850), 1,
      anon_sym_GT,
  [3378] = 1,
    ACTIONS(852), 1,
      ts_builtin_sym_end,
  [3382] = 1,
    ACTIONS(854), 1,
      sym__S,
  [3386] = 1,
    ACTIONS(856), 1,
      anon_sym_SEMI,
  [3390] = 1,
    ACTIONS(858), 1,
      anon_sym_SEMI,
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
    ACTIONS(872), 1,
      anon_sym_SEMI,
  [3422] = 1,
    ACTIONS(677), 1,
      sym_Name,
  [3426] = 1,
    ACTIONS(874), 1,
      sym_Name,
  [3430] = 1,
    ACTIONS(876), 1,
      aux_sym_CharRef_token1,
  [3434] = 1,
    ACTIONS(876), 1,
      aux_sym_CharRef_token2,
  [3438] = 1,
    ACTIONS(878), 1,
      sym_Name,
  [3442] = 1,
    ACTIONS(880), 1,
      sym_Name,
  [3446] = 1,
    ACTIONS(882), 1,
      aux_sym_CharRef_token1,
  [3450] = 1,
    ACTIONS(882), 1,
      aux_sym_CharRef_token2,
  [3454] = 1,
    ACTIONS(884), 1,
      sym_Name,
  [3458] = 1,
    ACTIONS(886), 1,
      sym_Name,
  [3462] = 1,
    ACTIONS(888), 1,
      aux_sym_CharRef_token1,
  [3466] = 1,
    ACTIONS(888), 1,
      aux_sym_CharRef_token2,
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
  [SMALL_STATE(13)] = 436,
  [SMALL_STATE(14)] = 464,
  [SMALL_STATE(15)] = 486,
  [SMALL_STATE(16)] = 514,
  [SMALL_STATE(17)] = 536,
  [SMALL_STATE(18)] = 564,
  [SMALL_STATE(19)] = 592,
  [SMALL_STATE(20)] = 620,
  [SMALL_STATE(21)] = 634,
  [SMALL_STATE(22)] = 659,
  [SMALL_STATE(23)] = 671,
  [SMALL_STATE(24)] = 683,
  [SMALL_STATE(25)] = 707,
  [SMALL_STATE(26)] = 719,
  [SMALL_STATE(27)] = 731,
  [SMALL_STATE(28)] = 753,
  [SMALL_STATE(29)] = 777,
  [SMALL_STATE(30)] = 801,
  [SMALL_STATE(31)] = 825,
  [SMALL_STATE(32)] = 849,
  [SMALL_STATE(33)] = 873,
  [SMALL_STATE(34)] = 885,
  [SMALL_STATE(35)] = 909,
  [SMALL_STATE(36)] = 922,
  [SMALL_STATE(37)] = 935,
  [SMALL_STATE(38)] = 948,
  [SMALL_STATE(39)] = 961,
  [SMALL_STATE(40)] = 986,
  [SMALL_STATE(41)] = 999,
  [SMALL_STATE(42)] = 1012,
  [SMALL_STATE(43)] = 1025,
  [SMALL_STATE(44)] = 1038,
  [SMALL_STATE(45)] = 1059,
  [SMALL_STATE(46)] = 1072,
  [SMALL_STATE(47)] = 1085,
  [SMALL_STATE(48)] = 1098,
  [SMALL_STATE(49)] = 1119,
  [SMALL_STATE(50)] = 1132,
  [SMALL_STATE(51)] = 1145,
  [SMALL_STATE(52)] = 1158,
  [SMALL_STATE(53)] = 1171,
  [SMALL_STATE(54)] = 1184,
  [SMALL_STATE(55)] = 1205,
  [SMALL_STATE(56)] = 1218,
  [SMALL_STATE(57)] = 1231,
  [SMALL_STATE(58)] = 1244,
  [SMALL_STATE(59)] = 1257,
  [SMALL_STATE(60)] = 1270,
  [SMALL_STATE(61)] = 1283,
  [SMALL_STATE(62)] = 1304,
  [SMALL_STATE(63)] = 1326,
  [SMALL_STATE(64)] = 1348,
  [SMALL_STATE(65)] = 1368,
  [SMALL_STATE(66)] = 1388,
  [SMALL_STATE(67)] = 1410,
  [SMALL_STATE(68)] = 1432,
  [SMALL_STATE(69)] = 1454,
  [SMALL_STATE(70)] = 1474,
  [SMALL_STATE(71)] = 1491,
  [SMALL_STATE(72)] = 1502,
  [SMALL_STATE(73)] = 1513,
  [SMALL_STATE(74)] = 1524,
  [SMALL_STATE(75)] = 1541,
  [SMALL_STATE(76)] = 1558,
  [SMALL_STATE(77)] = 1569,
  [SMALL_STATE(78)] = 1580,
  [SMALL_STATE(79)] = 1591,
  [SMALL_STATE(80)] = 1602,
  [SMALL_STATE(81)] = 1619,
  [SMALL_STATE(82)] = 1638,
  [SMALL_STATE(83)] = 1657,
  [SMALL_STATE(84)] = 1668,
  [SMALL_STATE(85)] = 1685,
  [SMALL_STATE(86)] = 1700,
  [SMALL_STATE(87)] = 1719,
  [SMALL_STATE(88)] = 1730,
  [SMALL_STATE(89)] = 1741,
  [SMALL_STATE(90)] = 1752,
  [SMALL_STATE(91)] = 1771,
  [SMALL_STATE(92)] = 1790,
  [SMALL_STATE(93)] = 1798,
  [SMALL_STATE(94)] = 1808,
  [SMALL_STATE(95)] = 1818,
  [SMALL_STATE(96)] = 1832,
  [SMALL_STATE(97)] = 1842,
  [SMALL_STATE(98)] = 1856,
  [SMALL_STATE(99)] = 1866,
  [SMALL_STATE(100)] = 1874,
  [SMALL_STATE(101)] = 1882,
  [SMALL_STATE(102)] = 1892,
  [SMALL_STATE(103)] = 1902,
  [SMALL_STATE(104)] = 1918,
  [SMALL_STATE(105)] = 1932,
  [SMALL_STATE(106)] = 1940,
  [SMALL_STATE(107)] = 1956,
  [SMALL_STATE(108)] = 1970,
  [SMALL_STATE(109)] = 1980,
  [SMALL_STATE(110)] = 1994,
  [SMALL_STATE(111)] = 2008,
  [SMALL_STATE(112)] = 2024,
  [SMALL_STATE(113)] = 2040,
  [SMALL_STATE(114)] = 2054,
  [SMALL_STATE(115)] = 2068,
  [SMALL_STATE(116)] = 2082,
  [SMALL_STATE(117)] = 2096,
  [SMALL_STATE(118)] = 2109,
  [SMALL_STATE(119)] = 2122,
  [SMALL_STATE(120)] = 2129,
  [SMALL_STATE(121)] = 2142,
  [SMALL_STATE(122)] = 2155,
  [SMALL_STATE(123)] = 2168,
  [SMALL_STATE(124)] = 2181,
  [SMALL_STATE(125)] = 2190,
  [SMALL_STATE(126)] = 2203,
  [SMALL_STATE(127)] = 2216,
  [SMALL_STATE(128)] = 2223,
  [SMALL_STATE(129)] = 2234,
  [SMALL_STATE(130)] = 2245,
  [SMALL_STATE(131)] = 2258,
  [SMALL_STATE(132)] = 2267,
  [SMALL_STATE(133)] = 2280,
  [SMALL_STATE(134)] = 2287,
  [SMALL_STATE(135)] = 2300,
  [SMALL_STATE(136)] = 2313,
  [SMALL_STATE(137)] = 2326,
  [SMALL_STATE(138)] = 2337,
  [SMALL_STATE(139)] = 2350,
  [SMALL_STATE(140)] = 2363,
  [SMALL_STATE(141)] = 2374,
  [SMALL_STATE(142)] = 2387,
  [SMALL_STATE(143)] = 2394,
  [SMALL_STATE(144)] = 2401,
  [SMALL_STATE(145)] = 2414,
  [SMALL_STATE(146)] = 2427,
  [SMALL_STATE(147)] = 2435,
  [SMALL_STATE(148)] = 2445,
  [SMALL_STATE(149)] = 2455,
  [SMALL_STATE(150)] = 2465,
  [SMALL_STATE(151)] = 2475,
  [SMALL_STATE(152)] = 2485,
  [SMALL_STATE(153)] = 2491,
  [SMALL_STATE(154)] = 2501,
  [SMALL_STATE(155)] = 2507,
  [SMALL_STATE(156)] = 2517,
  [SMALL_STATE(157)] = 2527,
  [SMALL_STATE(158)] = 2537,
  [SMALL_STATE(159)] = 2545,
  [SMALL_STATE(160)] = 2551,
  [SMALL_STATE(161)] = 2561,
  [SMALL_STATE(162)] = 2569,
  [SMALL_STATE(163)] = 2579,
  [SMALL_STATE(164)] = 2589,
  [SMALL_STATE(165)] = 2599,
  [SMALL_STATE(166)] = 2609,
  [SMALL_STATE(167)] = 2617,
  [SMALL_STATE(168)] = 2623,
  [SMALL_STATE(169)] = 2633,
  [SMALL_STATE(170)] = 2643,
  [SMALL_STATE(171)] = 2653,
  [SMALL_STATE(172)] = 2663,
  [SMALL_STATE(173)] = 2673,
  [SMALL_STATE(174)] = 2683,
  [SMALL_STATE(175)] = 2693,
  [SMALL_STATE(176)] = 2703,
  [SMALL_STATE(177)] = 2711,
  [SMALL_STATE(178)] = 2719,
  [SMALL_STATE(179)] = 2727,
  [SMALL_STATE(180)] = 2732,
  [SMALL_STATE(181)] = 2737,
  [SMALL_STATE(182)] = 2744,
  [SMALL_STATE(183)] = 2751,
  [SMALL_STATE(184)] = 2756,
  [SMALL_STATE(185)] = 2763,
  [SMALL_STATE(186)] = 2770,
  [SMALL_STATE(187)] = 2775,
  [SMALL_STATE(188)] = 2780,
  [SMALL_STATE(189)] = 2785,
  [SMALL_STATE(190)] = 2792,
  [SMALL_STATE(191)] = 2797,
  [SMALL_STATE(192)] = 2804,
  [SMALL_STATE(193)] = 2811,
  [SMALL_STATE(194)] = 2816,
  [SMALL_STATE(195)] = 2823,
  [SMALL_STATE(196)] = 2830,
  [SMALL_STATE(197)] = 2835,
  [SMALL_STATE(198)] = 2840,
  [SMALL_STATE(199)] = 2847,
  [SMALL_STATE(200)] = 2852,
  [SMALL_STATE(201)] = 2857,
  [SMALL_STATE(202)] = 2862,
  [SMALL_STATE(203)] = 2867,
  [SMALL_STATE(204)] = 2872,
  [SMALL_STATE(205)] = 2877,
  [SMALL_STATE(206)] = 2882,
  [SMALL_STATE(207)] = 2889,
  [SMALL_STATE(208)] = 2896,
  [SMALL_STATE(209)] = 2901,
  [SMALL_STATE(210)] = 2906,
  [SMALL_STATE(211)] = 2913,
  [SMALL_STATE(212)] = 2920,
  [SMALL_STATE(213)] = 2925,
  [SMALL_STATE(214)] = 2932,
  [SMALL_STATE(215)] = 2937,
  [SMALL_STATE(216)] = 2942,
  [SMALL_STATE(217)] = 2947,
  [SMALL_STATE(218)] = 2952,
  [SMALL_STATE(219)] = 2959,
  [SMALL_STATE(220)] = 2966,
  [SMALL_STATE(221)] = 2973,
  [SMALL_STATE(222)] = 2980,
  [SMALL_STATE(223)] = 2987,
  [SMALL_STATE(224)] = 2994,
  [SMALL_STATE(225)] = 2999,
  [SMALL_STATE(226)] = 3006,
  [SMALL_STATE(227)] = 3011,
  [SMALL_STATE(228)] = 3016,
  [SMALL_STATE(229)] = 3021,
  [SMALL_STATE(230)] = 3028,
  [SMALL_STATE(231)] = 3035,
  [SMALL_STATE(232)] = 3042,
  [SMALL_STATE(233)] = 3047,
  [SMALL_STATE(234)] = 3054,
  [SMALL_STATE(235)] = 3061,
  [SMALL_STATE(236)] = 3068,
  [SMALL_STATE(237)] = 3073,
  [SMALL_STATE(238)] = 3078,
  [SMALL_STATE(239)] = 3083,
  [SMALL_STATE(240)] = 3090,
  [SMALL_STATE(241)] = 3095,
  [SMALL_STATE(242)] = 3100,
  [SMALL_STATE(243)] = 3105,
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
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(116),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(145),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(294),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(302),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(37),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(326),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(13),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(285),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(286),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(287),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(330),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(17),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(323),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(324),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(325),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 6),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(331),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(332),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(333),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(30),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(327),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(328),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(329),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(32),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 7),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 8),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 6),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markupdecl, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 7),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 7),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementdecl, 7),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotationDecl, 7),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 8),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotationDecl, 8),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 8),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementdecl, 8),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 5),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 5),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 6),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 6),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 7),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 5),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 7),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 7),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__EntityDecl, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEDecl, 9),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 9),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 9),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 10),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEDecl, 10),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(64),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(228),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat2, 2),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat2, 2), SHIFT_REPEAT(322),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat2, 2), SHIFT_REPEAT(229),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(130),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(259),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(124),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(277),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat2, 2),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat2, 2), SHIFT_REPEAT(322),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(119),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(170),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(133),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(231),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(274),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat2, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 8),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3, .production_id = 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 7),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3, .production_id = 1),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT(21),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [852] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
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

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dtd(void) {
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
