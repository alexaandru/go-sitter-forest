package bibtex_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/bibtex"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
@incollection{westfahl:space,
  author       = {Westfahl, Gary},
  title        = {The True Frontier},
  subtitle     = {Confronting and Avoiding the Realities of Space in {American}},
}`
	expected = "(document (entry ty: (entry_type) key: (key_brace) field: (field name: (identifier) value: (value (token (brace_word) (brace_word)))) field: (field name: (identifier) value: (value (token (brace_word) (brace_word) (brace_word)))) field: (field name: (identifier) value: (value (token (brace_word) (brace_word) (brace_word) (brace_word) (brace_word) (brace_word) (brace_word) (brace_word) (brace_word))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), bibtex.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
