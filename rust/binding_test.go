package rust_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/rust"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = "mod one;"
	expected = "(source_file (mod_item name: (identifier)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), rust.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
