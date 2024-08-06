//go:build !plugin

package systemverilog_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/systemverilog"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `module tb_top ();

   reg clk;
   reg resetn; 
   reg d;
   wire q;
   
   // Instantiate the design
   d_ff  d_ff0 (	.clk (clk),
   	       		.resetn (resetn),
   	       		.d (d),
   	       		.q (q));
   
   // Create a clock
   always #10 clk <= ~clk;
   
   initial begin
   	resetn <= 0;
   	d <= 0;
   	
   	#10 resetn <= 1;
   	#5      d <= 1;
   	#8      d <= 0;
   	#2      d <= 1;
   	#10     d <= 0;
   end
endmodule`
	expected = "(source_file (module_declaration (module_nonansi_header (module_keyword) name: (simple_identifier) (list_of_ports)) (module_item (data_declaration (data_type_or_implicit (data_type (integer_vector_type))) (list_of_variable_decl_assignments (variable_decl_assignment name: (simple_identifier))))) (module_item (data_declaration (data_type_or_implicit (data_type (integer_vector_type))) (list_of_variable_decl_assignments (variable_decl_assignment name: (simple_identifier))))) (module_item (data_declaration (data_type_or_implicit (data_type (integer_vector_type))) (list_of_variable_decl_assignments (variable_decl_assignment name: (simple_identifier))))) (module_item (net_declaration (net_type) (list_of_net_decl_assignments (net_decl_assignment (simple_identifier))))) (comment) (module_item (module_instantiation instance_type: (simple_identifier) (hierarchical_instance (name_of_instance instance_name: (simple_identifier)) (list_of_port_connections (named_port_connection port_name: (simple_identifier) connection: (expression (primary (hierarchical_identifier (simple_identifier))))) (named_port_connection port_name: (simple_identifier) connection: (expression (primary (hierarchical_identifier (simple_identifier))))) (named_port_connection port_name: (simple_identifier) connection: (expression (primary (hierarchical_identifier (simple_identifier))))) (named_port_connection port_name: (simple_identifier) connection: (expression (primary (hierarchical_identifier (simple_identifier))))))))) (comment) (module_item (always_construct (always_keyword) (statement (statement_item (procedural_timing_control_statement (delay_control (delay_value (unsigned_number))) (statement_or_null (statement (statement_item (nonblocking_assignment (variable_lvalue (hierarchical_identifier (simple_identifier))) (expression operator: (unary_operator) argument: (primary (hierarchical_identifier (simple_identifier))))))))))))) (module_item (initial_construct (statement_or_null (statement (statement_item (seq_block (statement_or_null (statement (statement_item (nonblocking_assignment (variable_lvalue (hierarchical_identifier (simple_identifier))) (expression (primary (primary_literal (integral_number (decimal_number (unsigned_number)))))))))) (statement_or_null (statement (statement_item (nonblocking_assignment (variable_lvalue (hierarchical_identifier (simple_identifier))) (expression (primary (primary_literal (integral_number (decimal_number (unsigned_number)))))))))) (statement_or_null (statement (statement_item (procedural_timing_control_statement (delay_control (delay_value (unsigned_number))) (statement_or_null (statement (statement_item (nonblocking_assignment (variable_lvalue (hierarchical_identifier (simple_identifier))) (expression (primary (primary_literal (integral_number (decimal_number (unsigned_number)))))))))))))) (statement_or_null (statement (statement_item (procedural_timing_control_statement (delay_control (delay_value (unsigned_number))) (statement_or_null (statement (statement_item (nonblocking_assignment (variable_lvalue (hierarchical_identifier (simple_identifier))) (expression (primary (primary_literal (integral_number (decimal_number (unsigned_number)))))))))))))) (statement_or_null (statement (statement_item (procedural_timing_control_statement (delay_control (delay_value (unsigned_number))) (statement_or_null (statement (statement_item (nonblocking_assignment (variable_lvalue (hierarchical_identifier (simple_identifier))) (expression (primary (primary_literal (integral_number (decimal_number (unsigned_number)))))))))))))) (statement_or_null (statement (statement_item (procedural_timing_control_statement (delay_control (delay_value (unsigned_number))) (statement_or_null (statement (statement_item (nonblocking_assignment (variable_lvalue (hierarchical_identifier (simple_identifier))) (expression (primary (primary_literal (integral_number (decimal_number (unsigned_number)))))))))))))) (statement_or_null (statement (statement_item (procedural_timing_control_statement (delay_control (delay_value (unsigned_number))) (statement_or_null (statement (statement_item (nonblocking_assignment (variable_lvalue (hierarchical_identifier (simple_identifier))) (expression (primary (primary_literal (integral_number (decimal_number (unsigned_number))))))))))))))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), systemverilog.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
