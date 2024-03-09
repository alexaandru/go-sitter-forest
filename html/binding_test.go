//go:build !plugin

package html_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/html"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = "<HTML><BODY><P>Hello World</P></BODY></HTML>"
	expected = "(document (element (start_tag (tag_name)) (element (start_tag (tag_name)) (element (start_tag (tag_name)) (text) (end_tag (tag_name))) (end_tag (tag_name))) (end_tag (tag_name))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), html.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
