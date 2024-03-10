//go:build !plugin

package kdl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/kdl"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
contents {
  section "First section" {
    paragraph "This is the first paragraph"
    paragraph "This is the second paragraph"
  }
}
`
	expected = "(document (node (identifier) children: (node_children (node (identifier) (node_field (value (string (string_fragment)))) children: (node_children (node (identifier) (node_field (value (string (string_fragment))))) (node (identifier) (node_field (value (string (string_fragment))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), kdl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
