//go:build !plugin

package cpp_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/cpp"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = "int a = 2;"
	expected = "(translation_unit (declaration type: (primitive_type) declarator: (init_declarator declarator: (identifier) value: (number_literal))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), cpp.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
