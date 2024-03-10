//go:build !plugin

package markdown_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/markdown"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
# Example

Lorem Impsum Sicut Markdown Exemplii

## A Chapter

And **some more** [stuff](./stuff.txt) in here.
`
	expected = "(document (section) (section (atx_heading (atx_h1_marker) heading_content: (inline)) (paragraph (inline)) (section (atx_heading (atx_h2_marker) heading_content: (inline)) (paragraph (inline)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), markdown.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
