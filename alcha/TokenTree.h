/*------------------------------------------------------------------------------

Copyright (C) John-Philip Taylor
jpt13653903@gmail.com
--------------------------------------------------------------------------------

This is a binary search tree to optimise the scanner.  It facilitates the
greedy match operation.  The tree is only balanced once, so something like
a red-black tree is not required.

It consists of a balanced BST of the first character, each containing a
balanced sub-tree of the next character, etc.
------------------------------------------------------------------------------*/

#ifndef TokenTree_h
#define TokenTree_h
//------------------------------------------------------------------------------

#include <stdio.h>
#include <stdint.h>

#include "TokenType.h"
#include "debug_macros.h"
#include "parser.h"
#include "alloc.h"
//------------------------------------------------------------------------------

typedef struct TokenTreeTag{
    void* root;
} TokenTree;

TokenTree* token_tree_alcha_new();
void       token_tree_alcha_free(TokenTree* this);

// Insert all the items, then balance it once.  Do not add more items after.
void token_tree_alcha_insert (TokenTree* this, const char* pattern, TokenType type);
void token_tree_alcha_balance(TokenTree* this);

// Finds the longest match and returns the token type (-1 if nothing found)
TokenType token_tree_alcha_match(TokenTree* this, TSLexer* lexer);
//------------------------------------------------------------------------------

#endif
//------------------------------------------------------------------------------

