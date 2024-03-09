//go:build !plugin

package typescript_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/typescript"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = "let a : number = 1;"
	expected = "(program (lexical_declaration (variable_declarator name: (identifier) type: (type_annotation (predefined_type)) value: (number))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), typescript.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
