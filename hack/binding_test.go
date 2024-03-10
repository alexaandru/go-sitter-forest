//go:build !plugin

package hack_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/hack"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = "$var = $arg ==> async { return $arg; }(1, ...vec[1,2,3]);"
	expected = "(script (expression_statement (binary_expression left: (variable) right: (lambda_expression (parameters (parameter name: (variable))) body: (call_expression function: (awaitable_expression (compound_statement (return_statement (variable)))) (arguments (argument (integer)) (argument (variadic_modifier) (array (array_type) (integer) (integer) (integer)))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), hack.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
