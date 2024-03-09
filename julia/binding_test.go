//go:build !plugin

package julia_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/julia"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
function mandelbrot(a)
    z = 0
    for i=1:50
        z = z^2 + a
    end
    return z
end
`
	expected = "(source_file (function_definition name: (identifier) parameters: (parameter_list (identifier)) (assignment (identifier) (operator) (integer_literal)) (for_statement (for_binding (identifier) (range_expression (integer_literal) (integer_literal))) (assignment (identifier) (operator) (binary_expression (binary_expression (identifier) (operator) (integer_literal)) (operator) (identifier)))) (return_statement (identifier))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), julia.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
