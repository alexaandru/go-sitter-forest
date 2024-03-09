//go:build !plugin

package dart_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/dart"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
main() {
  // A standard for loop
  for (var i = 0; i < 3; i++) {
    print(i);
  }
}`
	expected = "(program (function_signature name: (identifier) (formal_parameter_list)) (function_body (block (comment) (for_statement (for_loop_parts init: (local_variable_declaration (initialized_variable_definition (inferred_type) name: (identifier) value: (decimal_integer_literal))) condition: (relational_expression (identifier) (relational_operator) (decimal_integer_literal)) update: (postfix_expression (assignable_expression (identifier)) (postfix_operator (increment_operator)))) body: (block (expression_statement (identifier) (selector (argument_part (arguments (argument (identifier)))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), dart.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
