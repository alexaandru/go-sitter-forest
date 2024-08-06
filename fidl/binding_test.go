//go:build !plugin

package fidl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/fidl"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
library textures;

type Color = struct {
    rgba uint32;
};
`
	expected = "(source_file (library (compound_identifier (identifier))) (declaration (layout_declaration (identifier) (inline_layout (layout_kind) (layout_body (struct_layout (struct_layout_member (member_field (identifier) (type_constructor (primitives_type))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), fidl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
