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
	expected = "(program (comment) (left_assignment name: (identifier) value: (function_definition (formal_parameters (identifier)) (brace_list (if condition: (binary left: (identifier) right: (float)) consequence: (brace_list (call function: (identifier) arguments: (arguments (identifier)))) alternative: (brace_list (call function: (identifier) arguments: (arguments (binary left: (call function: (identifier) arguments: (arguments (binary left: (identifier) right: (float)))) right: (call function: (identifier) arguments: (arguments (binary left: (identifier) right: (float)))))))))))))"
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
