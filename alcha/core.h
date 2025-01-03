#ifndef core_h
#define core_h
//------------------------------------------------------------------------------

#include "TokenType.h"
//------------------------------------------------------------------------------

static void register_keywords(TokenTree* token_tree)
{
    token_tree_alcha_insert(token_tree, "void",       KEYWORD);
    token_tree_alcha_insert(token_tree, "auto",       KEYWORD);

    token_tree_alcha_insert(token_tree, "pin",        KEYWORD);
    token_tree_alcha_insert(token_tree, "net",        KEYWORD);

    token_tree_alcha_insert(token_tree, "byte",       KEYWORD);
    token_tree_alcha_insert(token_tree, "char",       KEYWORD);
    token_tree_alcha_insert(token_tree, "num",        KEYWORD);

    token_tree_alcha_insert(token_tree, "true",       KEYWORD);
    token_tree_alcha_insert(token_tree, "false",      KEYWORD);

    token_tree_alcha_insert(token_tree, "class",      KEYWORD);
    token_tree_alcha_insert(token_tree, "enum",       KEYWORD);
    token_tree_alcha_insert(token_tree, "struct",     KEYWORD);
    token_tree_alcha_insert(token_tree, "group",      KEYWORD);
    token_tree_alcha_insert(token_tree, "alias",      KEYWORD);

    token_tree_alcha_insert(token_tree, "input",      KEYWORD);
    token_tree_alcha_insert(token_tree, "output",     KEYWORD);

    token_tree_alcha_insert(token_tree, "public",     KEYWORD);
    token_tree_alcha_insert(token_tree, "private",    KEYWORD);
    token_tree_alcha_insert(token_tree, "protected",  KEYWORD);

    token_tree_alcha_insert(token_tree, "if",         KEYWORD);
    token_tree_alcha_insert(token_tree, "else",       KEYWORD);
    token_tree_alcha_insert(token_tree, "for",        KEYWORD);
    token_tree_alcha_insert(token_tree, "in",         KEYWORD);
    token_tree_alcha_insert(token_tree, "while",      KEYWORD);
    token_tree_alcha_insert(token_tree, "loop",       KEYWORD);

    token_tree_alcha_insert(token_tree, "switch",     KEYWORD);
    token_tree_alcha_insert(token_tree, "case",       KEYWORD);
    token_tree_alcha_insert(token_tree, "default",    KEYWORD);

    token_tree_alcha_insert(token_tree, "import",     KEYWORD);
    token_tree_alcha_insert(token_tree, "as",         KEYWORD);

    token_tree_alcha_insert(token_tree, "return",     KEYWORD);
    token_tree_alcha_insert(token_tree, "break",      KEYWORD);
    token_tree_alcha_insert(token_tree, "continue",   KEYWORD);

    token_tree_alcha_insert(token_tree, "func",       KEYWORD);
    token_tree_alcha_insert(token_tree, "inline",     KEYWORD);
    token_tree_alcha_insert(token_tree, "operator",   KEYWORD);

    token_tree_alcha_insert(token_tree, "rtl",        KEYWORD);
    token_tree_alcha_insert(token_tree, "fsm",        KEYWORD);
    token_tree_alcha_insert(token_tree, "hdl",        KEYWORD);

    token_tree_alcha_insert(token_tree, "stimulus",   KEYWORD);
    token_tree_alcha_insert(token_tree, "emulate",    KEYWORD);
    token_tree_alcha_insert(token_tree, "sequence",   KEYWORD);
    token_tree_alcha_insert(token_tree, "assert",     KEYWORD);
    token_tree_alcha_insert(token_tree, "wait",       KEYWORD);

    token_tree_alcha_insert(token_tree, "posedge",    KEYWORD);
    token_tree_alcha_insert(token_tree, "negedge",    KEYWORD);

    token_tree_alcha_insert(token_tree, "coverbins",  KEYWORD);
    token_tree_alcha_insert(token_tree, "covergroup", KEYWORD);
}
//------------------------------------------------------------------------------

static void register_constants(TokenTree* token_tree)
{
    token_tree_alcha_insert(token_tree, "pi",          BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "e",           BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "i",           BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "j",           BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "__YEAR__",    BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "__MONTH__",   BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "__DAY__",     BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "__HOUR__",    BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "__MINUTE__",  BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "__SECOND__",  BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "__WEEKDAY__", BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "__YEARDAY__", BUILTIN_CONST);
}
//------------------------------------------------------------------------------

static void register_specials(TokenTree* token_tree)
{
    token_tree_alcha_insert(token_tree, "__FILE__",      BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "__LINE__",      BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "__DATE__",      BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "__TIME__",      BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "__CLASS__",     BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "__FUNCTION__",  BUILTIN_CONST);
    token_tree_alcha_insert(token_tree, "__NAMESPACE__", BUILTIN_CONST);
}
//------------------------------------------------------------------------------

static void register_functions(TokenTree* token_tree)
{
    token_tree_alcha_insert(token_tree, "sin",        BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "cos",        BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "tan",        BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "asin",       BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "acos",       BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "atan",       BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "sinh",       BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "cosh",       BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "tanh",       BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "asinh",      BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "acosh",      BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "atanh",      BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "log",        BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "log2",       BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "log10",      BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "exp",        BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "pow",        BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "round",      BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "fix",        BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "floor",      BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "ceil",       BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "rand",       BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "real",       BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "imag",       BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "abs",        BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "angle",      BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "fft",        BUILTIN_FUNC);

    token_tree_alcha_insert(token_tree, "read",       BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "write",      BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "append",     BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "textread",   BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "textwrite",  BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "textappend", BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "print",      BUILTIN_FUNC);

    token_tree_alcha_insert(token_tree, "finally",    BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "hdl_map",    BUILTIN_FUNC);

    token_tree_alcha_insert(token_tree, "eval",       BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "shell",      BUILTIN_FUNC);

    token_tree_alcha_insert(token_tree, "rose",       BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "fell",       BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "stable",     BUILTIN_FUNC);
    token_tree_alcha_insert(token_tree, "past",       BUILTIN_FUNC);
}
//------------------------------------------------------------------------------

static void register_variables(TokenTree* token_tree)
{
    token_tree_alcha_insert(token_tree, "_",      BUILTIN_VARIABLE);
    token_tree_alcha_insert(token_tree, "this",   BUILTIN_VARIABLE);
    token_tree_alcha_insert(token_tree, "result", BUILTIN_VARIABLE);
}
//------------------------------------------------------------------------------

void register_alcha_core(TokenTree* token_tree)
{
    register_keywords (token_tree);
    register_constants(token_tree);
    register_specials (token_tree);
    register_functions(token_tree);
    register_variables(token_tree);
}
//------------------------------------------------------------------------------

#endif
//------------------------------------------------------------------------------

