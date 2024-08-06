//go:build !plugin

package vhdl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/vhdl"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
/*------------------------------------------------------------------------------
Header block comment
------------------------------------------------------------------------------*/

library IEEE;
    use IEEE.std_logic_1164.all;
    use IEEE.numeric_std.all;

library work;
    use work.MyConstants.all;
    use work.MyRegisters.all;
--------------------------------------------------------------------------------

package interfaces is
  type streaming_bus is record               -- the record definition
    data  : std_logic_vector(7 downto 0);
    valid : std_logic;
    ready : std_logic;
  end record;

  view streaming_master of streaming_bus is  -- the mode view of the record
    valid, data : out;
    ready       : in;
  end view;

  alias streaming_slave is streaming_master'converse;

  function MyFunc (x: integer) return real;
end interfaces;
--------------------------------------------------------------------------------

package body interfaces is
  function MyFunc (x: integer) return real is
    variable a, b, c: integer;
  begin
    return real(x + a) / real(b*c);
  end function MyFunc;
end package body interfaces;
--------------------------------------------------------------------------------

entity Processor is
  generic(CLK_FREQ : integer);
  port(
    clk, rst : in   std_logic;
    adc_data : view streaming_slave;
    ddc_data : view streaming_master
  );
end entity Processor;
--------------------------------------------------------------------------------

architecture Behaviour of Processor is
  signal clk, rst        : std_logic;
  signal bus_in, bus_out : streaming_bus;

  type IntArray is array 1 to 3 of integer;
  constant integers    : IntArray   := (123, 7#1645#, 13#AC83#);
  variable reals       : RealArray  := (123.456, 7#16.45#e7, 13#AC.83#);
  signal   logic       : LogicArray := ("1010", b"01101", sx"123ABC", d"123456");
  signal   sized_logic : LogicArray := (5b"01101", 24sx"123ABC", 20d"123456");
  constant strings     : String     := "Hello World!!!";
begin
  producer : entity work.source port map(clk, rst, bus_in);
  consumer : entity work.sink   port map(clk, rst, bus_out);

  bus_in.ready <= bus_out.ready;

  digital_downconverter: process(clk) is
    variable temp : integer;
  begin
    if(rising_edge(clk)) then
      if(reset) then
        bus_out <= (data => (others => 'X'), valid => '0');
      else
        if(bus_out.ready) then
          -- TODO: Implement the DDC
          bus_out.data  <= bus_in.data;
          bus_out.valid <= bus_in.valid;
        else
          bus_out.valid <= '0';
        end if;
      end if;
    end if;
  end process digital_downconverter;
end Behaviour;
--------------------------------------------------------------------------------
`
	expected = "(design_file (block_comment (comment_content)) (design_unit (library_clause (logical_name_list library: (library_namespace))) (use_clause (selected_name_list (selected_name library: (library_namespace) package: (identifier) (ALL)))) (use_clause (selected_name_list (selected_name library: (library_namespace) package: (identifier) (ALL)))) (library_clause (logical_name_list library: (library_namespace))) (use_clause (selected_name_list (selected_name library: (library_namespace) package: (identifier) (ALL)))) (use_clause (selected_name_list (selected_name library: (library_namespace) package: (identifier) (ALL)))) (line_comment (comment_content)) (package_declaration package: (identifier) (package_declaration_body (type_declaration type: (identifier) (record_type_definition (line_comment (comment_content)) (element_declaration (identifier_list (identifier)) (subtype_indication type: (name (library_type) (parenthesis_group (association_or_range_list (simple_range (simple_expression (decimal_integer)) (simple_expression (decimal_integer)))))))) (element_declaration (identifier_list (identifier)) (subtype_indication type: (name (library_type)))) (element_declaration (identifier_list (identifier)) (subtype_indication type: (name (library_type)))) (end_record))) (mode_view_declaration view: (identifier) (subtype_indication type: (name (identifier))) (mode_view_body (line_comment (comment_content)) (mode_view_element_definition (record_element_list (identifier) (identifier)) (mode)) (mode_view_element_definition (record_element_list (identifier)) (mode))) (end_view)) (alias_declaration (identifier) (name (identifier) (attribute attribute: (attribute_mode_view)))) (subprogram_declaration (function_specification function: (identifier) (parameter_list_specification (interface_list (interface_declaration (identifier_list (identifier)) (simple_mode_indication (subtype_indication type: (name (library_type))))))) type: (name (library_type))))) (end_package package: (identifier)))) (line_comment (comment_content)) (design_unit (package_definition package: (identifier) (package_definition_body (subprogram_definition (function_specification function: (identifier) (parameter_list_specification (interface_list (interface_declaration (identifier_list (identifier)) (simple_mode_indication (subtype_indication type: (name (library_type))))))) type: (name (library_type))) (subprogram_head (variable_declaration (identifier_list (identifier) (identifier) (identifier)) (subtype_indication type: (name (library_type))))) (sequential_block (return_statement (conditional_or_unaffected_expression (simple_expression (simple_expression (name (library_type) (parenthesis_group (association_or_range_list (association_element (conditional_expression (simple_expression (simple_expression (name (identifier))) (adding_operator) (simple_expression (name (identifier)))))))))) (multiplying_operator) (simple_expression (name (library_type) (parenthesis_group (association_or_range_list (association_element (conditional_expression (simple_expression (simple_expression (name (identifier))) (multiplying_operator) (simple_expression (name (identifier)))))))))))))) (subprogram_end function: (identifier)))) (end_package_body package: (identifier)))) (line_comment (comment_content)) (design_unit (entity_declaration entity: (identifier) (entity_head (generic_clause (interface_list (interface_declaration (identifier_list generic: (identifier)) (simple_mode_indication (subtype_indication type: (name (library_type))))))) (port_clause (interface_list (interface_declaration (identifier_list (identifier) (identifier)) (simple_mode_indication (mode) (subtype_indication type: (name (library_type))))) (interface_declaration (identifier_list (identifier)) (record_mode_view_indication view: (name (identifier)))) (interface_declaration (identifier_list (identifier)) (record_mode_view_indication view: (name (identifier))))))) (end_entity entity: (identifier)))) (line_comment (comment_content)) (design_unit (architecture_definition architecture: (identifier) entity: (name (identifier)) (architecture_head (signal_declaration (identifier_list (identifier) (identifier)) (subtype_indication type: (name (library_type)))) (signal_declaration (identifier_list (identifier) (identifier)) (subtype_indication type: (name (identifier)))) (type_declaration type: (identifier) (array_type_definition (index_constraint (simple_range (simple_expression (decimal_integer)) (simple_expression (decimal_integer)))) (subtype_indication type: (name (library_type))))) (constant_declaration (identifier_list constant: (identifier)) (subtype_indication type: (name (identifier))) (initialiser (variable_assignment) (conditional_expression (simple_expression (parenthesis_expression (element_association_list (element_association (conditional_expression (simple_expression (decimal_integer)))) (element_association (conditional_expression (simple_expression (based_literal (based_base) (based_integer))))) (element_association (conditional_expression (simple_expression (based_literal (based_base) (based_integer))))))))))) (variable_declaration (identifier_list (identifier)) (subtype_indication type: (name (identifier))) (initialiser (variable_assignment) (conditional_expression (simple_expression (parenthesis_expression (element_association_list (element_association (conditional_expression (simple_expression (decimal_float)))) (element_association (conditional_expression (simple_expression (based_literal (based_base) (based_float))))) (element_association (conditional_expression (simple_expression (based_literal (based_base) (based_float))))))))))) (signal_declaration (identifier_list (identifier)) (subtype_indication type: (name (identifier))) (initialiser (variable_assignment) (conditional_expression (simple_expression (parenthesis_expression (element_association_list (element_association (conditional_expression (simple_expression (string_literal_std_logic)))) (element_association (conditional_expression (simple_expression (bit_string_literal (bit_string_base) (bit_string_value))))) (element_association (conditional_expression (simple_expression (bit_string_literal (bit_string_base) (bit_string_value))))) (element_association (conditional_expression (simple_expression (bit_string_literal (bit_string_base) (bit_string_value))))))))))) (signal_declaration (identifier_list (identifier)) (subtype_indication type: (name (identifier))) (initialiser (variable_assignment) (conditional_expression (simple_expression (parenthesis_expression (element_association_list (element_association (conditional_expression (simple_expression (bit_string_literal (bit_string_length) (bit_string_base) (bit_string_value))))) (element_association (conditional_expression (simple_expression (bit_string_literal (bit_string_length) (bit_string_base) (bit_string_value))))) (element_association (conditional_expression (simple_expression (bit_string_literal (bit_string_length) (bit_string_base) (bit_string_value))))))))))) (constant_declaration (identifier_list constant: (identifier)) (subtype_indication type: (name (library_type))) (initialiser (variable_assignment) (conditional_expression (simple_expression (string_literal)))))) (concurrent_block (component_instantiation_statement (label_declaration (label)) (instantiated_unit library: (library_namespace) entity: (name (identifier))) (port_map_aspect (association_list (association_element (conditional_expression (simple_expression (name (identifier))))) (association_element (conditional_expression (simple_expression (name (identifier))))) (association_element (conditional_expression (simple_expression (name (identifier)))))))) (component_instantiation_statement (label_declaration (label)) (instantiated_unit library: (library_namespace) entity: (name (identifier))) (port_map_aspect (association_list (association_element (conditional_expression (simple_expression (name (identifier))))) (association_element (conditional_expression (simple_expression (name (identifier))))) (association_element (conditional_expression (simple_expression (name (identifier)))))))) (concurrent_simple_signal_assignment (name (identifier) (selection (identifier))) (signal_assignment) (waveform (waveform_element (simple_expression (name (identifier) (selection (identifier))))))) (process_statement (label_declaration (label)) (sensitivity_specification (sensitivity_list (name (identifier)))) (process_head (variable_declaration (identifier_list (identifier)) (subtype_indication type: (name (library_type))))) (sequential_block (if_statement_block (if_statement (simple_expression (parenthesis_expression (element_association_list (element_association (conditional_expression (simple_expression (name (library_function) (parenthesis_group (association_or_range_list (association_element (conditional_expression (simple_expression (name (identifier)))))))))))))) (if_statement_body (if_statement_block (if_statement (simple_expression (parenthesis_expression (element_association_list (element_association (conditional_expression (simple_expression (name (identifier)))))))) (if_statement_body (simple_waveform_assignment (name (identifier)) (signal_assignment) (waveform (waveform_element (simple_expression (parenthesis_expression (element_association_list (element_association (simple_expression (name (identifier))) (conditional_expression (simple_expression (parenthesis_expression (element_association_list (element_association (OTHERS) (conditional_expression (simple_expression (name (library_constant_std_logic)))))))))) (element_association (simple_expression (name (identifier))) (conditional_expression (simple_expression (name (library_constant_std_logic)))))))))))) (else_statement (if_statement_body (if_statement_block (if_statement (simple_expression (parenthesis_expression (element_association_list (element_association (conditional_expression (simple_expression (name (identifier) (selection (identifier))))))))) (line_comment (comment_content)) (if_statement_body (simple_waveform_assignment (name (identifier) (selection (identifier))) (signal_assignment) (waveform (waveform_element (simple_expression (name (identifier) (selection (identifier))))))) (simple_waveform_assignment (name (identifier) (selection (identifier))) (signal_assignment) (waveform (waveform_element (simple_expression (name (identifier) (selection (identifier)))))))) (else_statement (if_statement_body (simple_waveform_assignment (name (identifier) (selection (identifier))) (signal_assignment) (waveform (waveform_element (simple_expression (name (library_constant_std_logic))))))))) (end_if))))) (end_if)))) (end_if))) (end_process (label)))) (end_architecture architecture: (identifier)))) (line_comment (comment_content)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), vhdl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
