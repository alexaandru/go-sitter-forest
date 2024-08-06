//go:build !plugin

package smith_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/smith"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
Slice = fn(T: type) -> type {
    struct {
        data: ptr(T),
        len: usize,
    }
}

main = fn() -> i32 {
    42
}

id = fn(x: i32) -> i32 {
    x
}

add = fn(x: i32, y: i32) -> i32 {
    x + y
}

id = fn(T: type, x: T) -> T {
    x
}

sum_of_squares = fn(x: i32, y: i32) -> i32 {
    x2 = x * x
    y2 = y * y
    x2 + y2
}

main()
`
	expected = "(source_file (statement (variable_definition pattern: (pattern_expression (identifier)) value: (expression (function_definition parameters: (function_parameters (function_parameter pattern: (pattern_expression (identifier)) type: (expression (identifier)))) return_type: (expression (unary_operation (negative) (ERROR (greater)) (expression (identifier)))) body: (block (statement (expression (struct_definition (struct_fields (struct_field name: (identifier) type: (expression (function_call function: (expression (identifier)) arguments: (function_arguments (expression (identifier)))))) (struct_field name: (identifier) type: (expression (identifier)))))))))))) (statement (variable_definition pattern: (pattern_expression (identifier)) value: (expression (function_definition return_type: (expression (unary_operation (negative) (ERROR (greater)) (expression (identifier)))) body: (block (statement (expression (integer_literal)))))))) (statement (variable_definition pattern: (pattern_expression (identifier)) value: (expression (function_definition parameters: (function_parameters (function_parameter pattern: (pattern_expression (identifier)) type: (expression (identifier)))) return_type: (expression (unary_operation (negative) (ERROR (greater)) (expression (identifier)))) body: (block (statement (expression (identifier)))))))) (statement (variable_definition pattern: (pattern_expression (identifier)) value: (expression (function_definition parameters: (function_parameters (function_parameter pattern: (pattern_expression (identifier)) type: (expression (identifier))) (function_parameter pattern: (pattern_expression (identifier)) type: (expression (identifier)))) return_type: (expression (unary_operation (negative) (ERROR (greater)) (expression (identifier)))) body: (block (statement (expression (binary_operation left: (expression (identifier)) operator: (add) right: (expression (identifier)))))))))) (statement (variable_definition pattern: (pattern_expression (identifier)) value: (expression (function_definition parameters: (function_parameters (function_parameter pattern: (pattern_expression (identifier)) type: (expression (identifier))) (function_parameter pattern: (pattern_expression (identifier)) type: (expression (identifier)))) return_type: (expression (unary_operation (negative) (ERROR (greater)) (expression (identifier)))) body: (block (statement (expression (identifier)))))))) (statement (variable_definition pattern: (pattern_expression (identifier)) value: (expression (function_definition parameters: (function_parameters (function_parameter pattern: (pattern_expression (identifier)) type: (expression (identifier))) (function_parameter pattern: (pattern_expression (identifier)) type: (expression (identifier)))) return_type: (expression (unary_operation (negative) (ERROR (greater)) (expression (identifier)))) body: (block (statement (variable_definition pattern: (pattern_expression (identifier)) value: (expression (binary_operation left: (expression (identifier)) operator: (multiply) right: (expression (identifier)))))) (statement (variable_definition pattern: (pattern_expression (identifier)) value: (expression (binary_operation left: (expression (identifier)) operator: (multiply) right: (expression (identifier)))))) (statement (expression (binary_operation left: (expression (identifier)) operator: (add) right: (expression (identifier)))))))))) (statement (expression (function_call function: (expression (identifier))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), smith.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
