package tsx_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/tsx"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = "<foo />"
	expected = "(program (expression_statement (jsx_self_closing_element name: (identifier))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), tsx.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
