package python_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/python"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = "print(1)"
	expected = "(module (expression_statement (call function: (identifier) arguments: (argument_list (integer)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), python.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
