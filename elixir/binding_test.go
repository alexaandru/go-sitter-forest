//go:build !plugin

package elixir_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/elixir"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = `"hello" <> " world"`
	expected = "(source (binary_operator left: (string (quoted_content)) right: (string (quoted_content))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), elixir.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
