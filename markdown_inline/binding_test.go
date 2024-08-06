//go:build !plugin

package markdown_inline_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/markdown_inline"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = "**Hello _World_**"
	expected = "(inline (strong_emphasis (emphasis_delimiter) (emphasis_delimiter) (emphasis (emphasis_delimiter) (emphasis_delimiter)) (emphasis_delimiter) (emphasis_delimiter)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), markdown_inline.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
