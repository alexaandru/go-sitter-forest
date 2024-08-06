//go:build !plugin

package ralph_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ralph"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `Abstract Contract Math() {
    @using(updateFields = false)
    pub fn normalizeAmount(amount: U256, decimals: U256) -> (U256) {
        if (decimals > 8) {
            return amount / (10 ** (decimals - 8))
        }
        return amount
    }

    @using(updateFields = false)
    pub fn deNormalizeAmount(amount: U256, decimals: U256) -> (U256) {
        if (decimals > 8) {
            return amount * (10 ** (decimals - 8))
        }
        let x = 8 - decimals
        return amount
    }
}
`
	expected = "(source_file (contract (type_identifier) (args_def) (func (annotation (identifier) (annotation_field (identifier) (bool))) (func_id (identifier)) (args_def (arg_def (identifier) (primitive_type)) (arg_def (identifier) (primitive_type))) (return_type (bracket_return_type (primitive_type))) (if_else_stmt (if_branch_stmt (binary_expr left: (identifier) operator: (op_gt) right: (typed_num (integer))) (block (return_stmt (binary_expr left: (identifier) operator: (op_div) right: (paren_expr (binary_expr left: (typed_num (integer)) operator: (op_exp) right: (paren_expr (binary_expr left: (identifier) operator: (op_sub) right: (typed_num (integer))))))))))) (return_stmt (identifier))) (func (annotation (identifier) (annotation_field (identifier) (bool))) (func_id (identifier)) (args_def (arg_def (identifier) (primitive_type)) (arg_def (identifier) (primitive_type))) (return_type (bracket_return_type (primitive_type))) (if_else_stmt (if_branch_stmt (binary_expr left: (identifier) operator: (op_gt) right: (typed_num (integer))) (block (return_stmt (binary_expr left: (identifier) operator: (op_mul) right: (paren_expr (binary_expr left: (typed_num (integer)) operator: (op_exp) right: (paren_expr (binary_expr left: (identifier) operator: (op_sub) right: (typed_num (integer))))))))))) (let_declaration (var_declaration (named_var (identifier))) let_value: (binary_expr left: (typed_num (integer)) operator: (op_sub) right: (identifier))) (return_stmt (identifier)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), ralph.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
