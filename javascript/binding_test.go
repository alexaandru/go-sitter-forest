//go:build !plugin

package javascript_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/javascript"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = "let a = 1"
	expected = "(program (lexical_declaration (variable_declarator name: (identifier) value: (number))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), javascript.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
