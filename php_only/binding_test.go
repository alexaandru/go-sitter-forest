package php_only_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/php_only"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = "print(1);"
	expected = "(program (expression_statement (print_intrinsic (parenthesized_expression (integer)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), php_only.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
