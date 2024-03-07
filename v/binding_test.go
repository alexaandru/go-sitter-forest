package v_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/v"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
module main

import v_tree_sitter.tree_sitter
import tree_sitter_v

fn main() {
	mut p := tree_sitter.new_parser[tree_sitter_v.NodeType](tree_sitter_v.type_factory)
	p.set_language(tree_sitter_v.language)

	code := 'fn main() {}'
	tree := p.parse_string(source: code)
	root := tree.root_node()

	println(root)

	fc := root.first_child()?

	if fc.type_name == .function_declaration {
		if name_node := fc.child_by_field_name('name') {
			println('Found function: ${name_node.text(code)}')
			println('Position: ${name_node.range()}')
			println('Line: ${name_node.start_point().row}')
		}
	}
}
`
	expected = "(source_file (module_clause (identifier)) (import_list (import_declaration (import_spec (import_path (import_name (identifier)) (import_name (identifier))))) (import_declaration (import_spec (import_path (import_name (identifier)))))) (function_declaration name: (identifier) signature: (signature parameters: (parameter_list)) body: (block (simple_statement (var_declaration var_list: (expression_list (mutable_expression (mutability_modifiers) (reference_expression (identifier)))) expression_list: (expression_list (call_expression name: (selector_expression operand: (reference_expression (identifier)) field: (reference_expression (identifier))) type_parameters: (type_parameters (plain_type (qualified_type module: (reference_expression (identifier)) name: (type_reference_expression (identifier))))) arguments: (argument_list (argument (selector_expression operand: (reference_expression (identifier)) field: (reference_expression (identifier))))))))) (simple_statement (call_expression name: (selector_expression operand: (reference_expression (identifier)) field: (reference_expression (identifier))) arguments: (argument_list (argument (selector_expression operand: (reference_expression (identifier)) field: (reference_expression (identifier))))))) (simple_statement (var_declaration var_list: (expression_list (reference_expression (identifier))) expression_list: (expression_list (literal (interpreted_string_literal))))) (simple_statement (var_declaration var_list: (expression_list (reference_expression (identifier))) expression_list: (expression_list (call_expression name: (selector_expression operand: (reference_expression (identifier)) field: (reference_expression (identifier))) arguments: (argument_list (argument (keyed_element key: (field_name (reference_expression (identifier))) value: (reference_expression (identifier))))))))) (simple_statement (var_declaration var_list: (expression_list (reference_expression (identifier))) expression_list: (expression_list (call_expression name: (selector_expression operand: (reference_expression (identifier)) field: (reference_expression (identifier))) arguments: (argument_list))))) (simple_statement (call_expression name: (reference_expression (identifier)) arguments: (argument_list (argument (reference_expression (identifier)))))) (simple_statement (var_declaration var_list: (expression_list (reference_expression (identifier))) expression_list: (expression_list (option_propagation_expression (call_expression name: (selector_expression operand: (reference_expression (identifier)) field: (reference_expression (identifier))) arguments: (argument_list)))))) (simple_statement (if_expression condition: (binary_expression left: (selector_expression operand: (reference_expression (identifier)) field: (reference_expression (identifier))) right: (enum_fetch (reference_expression (identifier)))) block: (block (simple_statement (if_expression guard: (var_declaration var_list: (expression_list (reference_expression (identifier))) expression_list: (expression_list (call_expression name: (selector_expression operand: (reference_expression (identifier)) field: (reference_expression (identifier))) arguments: (argument_list (argument (literal (interpreted_string_literal))))))) block: (block (simple_statement (call_expression name: (reference_expression (identifier)) arguments: (argument_list (argument (literal (interpreted_string_literal (string_interpolation (interpolation_opening) (interpolation_expression (call_expression name: (selector_expression operand: (reference_expression (identifier)) field: (reference_expression (identifier))) arguments: (argument_list (argument (reference_expression (identifier)))))) (interpolation_closing)))))))) (simple_statement (call_expression name: (reference_expression (identifier)) arguments: (argument_list (argument (literal (interpreted_string_literal (string_interpolation (interpolation_opening) (interpolation_expression (call_expression name: (selector_expression operand: (reference_expression (identifier)) field: (reference_expression (identifier))) arguments: (argument_list))) (interpolation_closing)))))))) (simple_statement (call_expression name: (reference_expression (identifier)) arguments: (argument_list (argument (literal (interpreted_string_literal (string_interpolation (interpolation_opening) (interpolation_expression (selector_expression operand: (call_expression name: (selector_expression operand: (reference_expression (identifier)) field: (reference_expression (identifier))) arguments: (argument_list)) field: (reference_expression (identifier)))) (interpolation_closing)))))))))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), v.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
