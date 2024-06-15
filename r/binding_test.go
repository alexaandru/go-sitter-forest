//go:build !plugin

package r_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/r"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
# Function to calculate Fibonacci sequence
fibonacci <- function(n) {
    if (n <= 1) {
        return(n)
    } else {
        return(fibonacci(n - 1) + fibonacci(n - 2))
    }
}
`
	expected = "(program (comment) (binary_operator lhs: (identifier) rhs: (function_definition parameters: (parameters parameter: (parameter name: (identifier))) body: (braced_expression body: (if_statement condition: (binary_operator lhs: (identifier) rhs: (float)) consequence: (braced_expression body: (call function: (return) arguments: (arguments argument: (argument value: (identifier))))) alternative: (braced_expression body: (call function: (return) arguments: (arguments argument: (argument value: (binary_operator lhs: (call function: (identifier) arguments: (arguments argument: (argument value: (binary_operator lhs: (identifier) rhs: (float))))) rhs: (call function: (identifier) arguments: (arguments argument: (argument value: (binary_operator lhs: (identifier) rhs: (float)))))))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), r.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
