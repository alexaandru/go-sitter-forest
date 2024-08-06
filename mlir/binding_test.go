//go:build !plugin

package mlir_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/mlir"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
func @correct_number_of_regions() {
    "test.two_region_op"()(
      {"work"() : () -> ()},
      {"work"() : () -> ()}
    ) : () -> ()
    return
}
`
	expected = "(toplevel (ERROR (UNEXPECTED ' ') (UNEXPECTED 'r')) (operation rhs: (generic_operation (string_literal) (region (entry_block (operation rhs: (generic_operation (string_literal) (function_type))))) (region (entry_block (operation rhs: (generic_operation (string_literal) (function_type))))) (function_type))) (operation rhs: (custom_operation (func_dialect))) (ERROR))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), mlir.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
