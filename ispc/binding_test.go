//go:build !plugin

package ispc_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ispc"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
static inline int mandel(float c_re, float c_im, int count) {
    float z_re = c_re, z_im = c_im;
    int i;
    for (i = 0; i < count; ++i) {
        if (z_re * z_re + z_im * z_im > 4.)
            break;

        float new_re = z_re*z_re - z_im*z_im;
        float new_im = 2.f * z_re * z_im;
        unmasked {
            z_re = c_re + new_re;
            z_im = c_im + new_im;
        }
    }

    return i;
}
`
	expected = "(translation_unit (function_definition (storage_class_specifier) (storage_class_specifier) type: (primitive_type) declarator: (function_declarator declarator: (identifier) parameters: (parameter_list (parameter_declaration type: (primitive_type) declarator: (identifier)) (parameter_declaration type: (primitive_type) declarator: (identifier)) (parameter_declaration type: (primitive_type) declarator: (identifier)))) body: (compound_statement (declaration type: (primitive_type) declarator: (init_declarator declarator: (identifier) value: (identifier)) declarator: (init_declarator declarator: (identifier) value: (identifier))) (declaration type: (primitive_type) declarator: (identifier)) (for_statement initializer: (assignment_expression left: (identifier) right: (number_literal)) condition: (binary_expression left: (identifier) right: (identifier)) update: (update_expression argument: (identifier)) body: (compound_statement (if_statement condition: (parenthesized_expression (binary_expression left: (binary_expression left: (binary_expression left: (identifier) right: (identifier)) right: (binary_expression left: (identifier) right: (identifier))) right: (number_literal))) consequence: (break_statement)) (declaration type: (primitive_type) declarator: (init_declarator declarator: (identifier) value: (binary_expression left: (binary_expression left: (identifier) right: (identifier)) right: (binary_expression left: (identifier) right: (identifier))))) (declaration type: (primitive_type) declarator: (init_declarator declarator: (identifier) value: (binary_expression left: (binary_expression left: (number_literal) right: (identifier)) right: (identifier)))) (unmasked_statement body: (compound_statement (expression_statement (assignment_expression left: (identifier) right: (binary_expression left: (identifier) right: (identifier)))) (expression_statement (assignment_expression left: (identifier) right: (binary_expression left: (identifier) right: (identifier)))))))) (return_statement (identifier)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), ispc.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
