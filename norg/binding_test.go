//go:build !plugin

package norg_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/norg"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
* Universe
  ** Colors
     *** Red
         Well, red yeah!
     *** Blue
         Yes, blue too!
`
	expected = "(document (heading1 (heading1_prefix) title: (paragraph_segment) content: (heading2 (heading2_prefix) title: (paragraph_segment) content: (heading3 (heading3_prefix) title: (paragraph_segment) content: (paragraph (paragraph_segment))) content: (heading3 (heading3_prefix) title: (paragraph_segment) content: (paragraph (paragraph_segment))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), norg.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
