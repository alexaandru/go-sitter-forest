//go:build !plugin

package djot_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/djot"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `This is some text.

## My next heading

Text.

> a blockquote.

- one

  - two
  - three

[link](http://example.com){title="Go to my website"}

| a | b |
| - | - |
| 1 | 2 |
`
	expected = "(document (paragraph) (section (heading2 (marker) (content)) (section_content (paragraph) (block_quote (block_quote_marker) (content (paragraph))) (list (list_item (list_marker_dash) (list_item_content (paragraph) (list (list_item (list_marker_dash) (list_item_content (paragraph))) (list_item (list_marker_dash) (list_item_content (paragraph))))))) (paragraph (inline_link (link_text) (inline_link_destination)) (inline_attribute (args (key_value (key) (value))))) (table (table_row (table_cell) (table_cell)) (table_row (table_cell) (table_cell)) (table_row (table_cell) (table_cell))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), djot.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
