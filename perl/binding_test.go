package perl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/perl"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
# Function to calculate Fibonacci sequence
sub fibonacci {
    my ($n) = @_;
    return $n <= 1 ? $n : fibonacci($n - 1) + fibonacci($n - 2);
}
`
	expected = "(source_file (comment) (subroutine_declaration_statement name: (bareword) body: (block (expression_statement (assignment_expression left: (variable_declaration variables: (scalar (varname))) right: (array (varname)))) (expression_statement (return_expression (conditional_expression condition: (relational_expression left: (scalar (varname)) right: (number)) consequent: (scalar (varname)) alternative: (binary_expression left: (function_call_expression function: (function) (indirect_object (scalar (varname))) arguments: (unary_expression operand: (number))) right: (function_call_expression function: (function) (indirect_object (scalar (varname))) arguments: (unary_expression operand: (number))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), perl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
