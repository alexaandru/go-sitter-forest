package java_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/java"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = "import java.io.*;"
	expected = "(program (import_declaration (scoped_identifier scope: (identifier) name: (identifier)) (asterisk)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), java.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
