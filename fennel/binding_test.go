//go:build !plugin

package fennel_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/fennel"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = `(local bit (require :bit))`
	expected = "(program (local_form call: (symbol) (binding_pair lhs: (symbol_binding) rhs: (list call: (symbol) item: (string content: (string_content))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), fennel.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
