#include "parser.h"
#include <wctype.h>

enum TokenType {
  AFX_COMMENT,
};

void *tree_sitter_fusion_external_scanner_create() { return NULL; }
void tree_sitter_fusion_external_scanner_destroy(void *p) {}
void tree_sitter_fusion_external_scanner_reset(void *p) {}
unsigned tree_sitter_fusion_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_fusion_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance_fusion(TSLexer *lexer) { lexer->advance_fusion(lexer, false); }
static void skip_fusion(TSLexer *lexer) { lexer->advance_fusion(lexer, true); }
static void mark_end(TSLexer *lexer) { lexer->mark_end(lexer); }

static bool scan_afx_comment(TSLexer *lexer) {
    if (lexer->lookahead != '<') return false;
    advance_fusion(lexer);
    if (lexer->lookahead != '!') return false;
    advance_fusion(lexer);
    if (lexer->lookahead != '-') return false;
    advance_fusion(lexer);
    if (lexer->lookahead != '-') return false;
    advance_fusion(lexer);

    unsigned dashes = 0;
    while (lexer->lookahead) {
      switch (lexer->lookahead) {
        case '-':
          ++dashes;
          break;
        case '>':
          if (dashes >= 2) {
            lexer->result_symbol = AFX_COMMENT;
            advance_fusion(lexer);
            mark_end(lexer);
            return true;
          }
        default:
          dashes = 0;
      }
      advance_fusion(lexer);
    }
    return false;
}

bool tree_sitter_fusion_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  if(valid_symbols[AFX_COMMENT]) {
    return scan_afx_comment(lexer);
  }
  return false;
}

