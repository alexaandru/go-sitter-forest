//go:build !plugin

package bass_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/bass"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
(from (linux/alpine)
  ($ echo "Hello, world!"))
`
	expected = "(source (list (symbol) (list (path)) (list (symbol) (symbol) (string (string_fragment)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), bass.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
