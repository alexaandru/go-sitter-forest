//go:build !plugin

package verilog_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/verilog"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
package mypkg;

module add_sub (x, y, z, sign);
  parameter WIDTH = 8;
  parameter W2 = 8 * WIDTH;

  input [WIDTH-1:0] x, y;
  output carry;
  output [WIDTH-1:0] z;
  input sign;
`
	expected = "(ERROR (simple_identifier) (package_or_generate_item_declaration (net_declaration (simple_identifier) (list_of_net_decl_assignments (net_decl_assignment (simple_identifier)) (ERROR (output_symbol)) (net_decl_assignment (simple_identifier)) (net_decl_assignment (simple_identifier)) (net_decl_assignment (simple_identifier))) (ERROR))) (package_or_generate_item_declaration (parameter_declaration (list_of_param_assignments (param_assignment (parameter_identifier (simple_identifier)) (constant_param_expression (constant_mintypmax_expression (constant_expression (constant_primary (primary_literal (integral_number (decimal_number (unsigned_number)))))))))))) (package_or_generate_item_declaration (parameter_declaration (list_of_param_assignments (param_assignment (parameter_identifier (simple_identifier)) (constant_param_expression (constant_mintypmax_expression (constant_expression (constant_expression (constant_primary (primary_literal (integral_number (decimal_number (unsigned_number)))))) (constant_expression (constant_primary (parameter_identifier (simple_identifier))))))))))) (package_or_generate_item_declaration (data_declaration (data_type_or_implicit1 (data_type (simple_identifier) (packed_dimension (constant_range (constant_expression (constant_expression (constant_primary (parameter_identifier (simple_identifier)))) (constant_expression (constant_primary (primary_literal (integral_number (decimal_number (unsigned_number))))))) (constant_expression (constant_primary (primary_literal (integral_number (decimal_number (unsigned_number)))))))))) (list_of_variable_decl_assignments (variable_decl_assignment (simple_identifier)) (variable_decl_assignment (simple_identifier))))) (package_or_generate_item_declaration (net_declaration (simple_identifier) (list_of_net_decl_assignments (net_decl_assignment (simple_identifier))))) (package_or_generate_item_declaration (data_declaration (data_type_or_implicit1 (data_type (simple_identifier) (packed_dimension (constant_range (constant_expression (constant_expression (constant_primary (parameter_identifier (simple_identifier)))) (constant_expression (constant_primary (primary_literal (integral_number (decimal_number (unsigned_number))))))) (constant_expression (constant_primary (primary_literal (integral_number (decimal_number (unsigned_number)))))))))) (list_of_variable_decl_assignments (variable_decl_assignment (simple_identifier))))) (package_or_generate_item_declaration (net_declaration (simple_identifier) (list_of_net_decl_assignments (net_decl_assignment (simple_identifier))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), verilog.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
