//go:build !plugin

package lox_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/lox"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `print 1;

// Block Statement
{
    var a = 1;
}

if (1 < 2) {
    print 3;
} else {
    print 4;
}

// While Statement
while (1 < 2) {
    print 3;
}

for (var i = 0; i < 10; i = i + 1) {
    print 3;
}

break;

continue;

return 1;

// Function Declaration
fun add(x, y) {
    return x + y;
}
`
	expected = "(program (print_statement (number)) (comment) (block_statement (variable_declaration name: (identifier) initialiser: (number))) (if_statement condition: (binary_expression left: (number) right: (number)) then: (block_statement (print_statement (number))) else: (block_statement (print_statement (number)))) (comment) (while_statement condition: (binary_expression left: (number) right: (number)) body: (block_statement (print_statement (number)))) (for_statement initialiser: (variable_declaration name: (identifier) initialiser: (number)) condition: (binary_expression left: (identifier) right: (number)) update: (assignment_expression left: (identifier) right: (binary_expression left: (identifier) right: (number))) body: (block_statement (print_statement (number)))) (break_statement) (continue_statement) (return_statement (number)) (comment) (function_declaration name: (identifier) parameters: (parameters (identifier) (identifier)) body: (block_statement (return_statement (binary_expression left: (identifier) right: (identifier))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), lox.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
