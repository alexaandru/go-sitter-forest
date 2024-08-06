//go:build !plugin

package lexc_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/lexc"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `Multichar_Symbols
%<x%>

;
! <- punctuation.delimiter

LEXICON Root
X ;

LEXICON X
x:y Z "weight: 3" ;
a:b C "hi" ;
<[ 1 | 2 | 3 ]+> # ;

LEXICON Punct
<[ %& | %= ]+> PUNCT ; ! Use/MT
`
	expected = "(source_file (multichar_symbols (multichar_symbols_header) (alphabet_symbol)) (ERROR (semicolon)) (comment) (lexicon (lexicon_start) name: (lexicon_name) (lexicon_line continuation: (lexicon_name) (semicolon))) (lexicon (lexicon_start) name: (lexicon_name) (lexicon_line left: (lexicon_string) (colon) right: (lexicon_string) continuation: (lexicon_name) gloss: (gloss) (semicolon)) (lexicon_line left: (lexicon_string) (colon) right: (lexicon_string) continuation: (lexicon_name) gloss: (gloss) (semicolon)) (lexicon_line whole: (regex (expression (expression (expression (expression (expression (symbol)) (union) (expression (symbol))) (union) (expression (symbol)))) (plus))) continuation: (lexicon_name) (semicolon))) (lexicon (lexicon_start) name: (lexicon_name) (lexicon_line whole: (regex (expression (expression (expression (expression (symbol)) (union) (expression (symbol)))) (plus))) continuation: (lexicon_name) (semicolon))) (comment))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), lexc.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
