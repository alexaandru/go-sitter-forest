//go:build !plugin

package rstml_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/rstml"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `<delimiters attribute-name attribute:name attribute::name />
<values string="Hello, world" true false=false number=0 call=function::call() />
<closures numbers=move |_| x * x * x * x reactive=move |_| count() />
<conditional value=if computation() { "true" } else { "false" } />

<{ let block = "In node name position"; } />
<div>{ let block = "In node position"; }</div>
<div { let block = "In attribute position"; } />
<div key={ let block = "In attribute value position"; } />

<Component<Type> />
<qualified::Component<qualified::Type> />
<Component<Generic<Type>> />
`
	expected = "(source_file (self_closing_element_node name: (node_identifier (identifier)) attribute: (node_identifier (identifier) (identifier)) attribute: (node_identifier (identifier) (identifier)) attribute: (node_identifier (identifier) (identifier))) (self_closing_element_node name: (node_identifier (identifier)) attribute: (node_attribute name: (node_identifier (identifier)) value: (rust_expression (string_literal (string_content)))) attribute: (node_identifier (identifier)) attribute: (node_attribute name: (node_identifier (identifier)) value: (rust_expression (boolean_literal))) attribute: (node_attribute name: (node_identifier (identifier)) value: (rust_expression (integer_literal))) attribute: (node_attribute name: (node_identifier (identifier)) value: (rust_expression (call_expression function: (scoped_identifier path: (identifier) name: (identifier)) arguments: (arguments))))) (self_closing_element_node name: (node_identifier (identifier)) attribute: (node_attribute name: (node_identifier (identifier)) value: (rust_expression (closure_expression parameters: (closure_parameters) body: (binary_expression left: (binary_expression left: (binary_expression left: (identifier) right: (identifier)) right: (identifier)) right: (identifier))))) attribute: (node_attribute name: (node_identifier (identifier)) value: (rust_expression (closure_expression parameters: (closure_parameters) body: (call_expression function: (identifier) arguments: (arguments)))))) (self_closing_element_node name: (node_identifier (identifier)) attribute: (node_attribute name: (node_identifier (identifier)) value: (rust_expression (if_expression condition: (call_expression function: (identifier) arguments: (arguments)) consequence: (block (string_literal (string_content))) alternative: (else_clause (block (string_literal (string_content)))))))) (self_closing_element_node (block (let_declaration pattern: (identifier) value: (string_literal (string_content))))) (element_node open_tag: (open_tag name: (node_identifier (identifier))) (block (let_declaration pattern: (identifier) value: (string_literal (string_content)))) close_tag: (close_tag name: (node_identifier (identifier)))) (self_closing_element_node name: (node_identifier (identifier)) attribute: (block (let_declaration pattern: (identifier) value: (string_literal (string_content))))) (self_closing_element_node name: (node_identifier (identifier)) attribute: (node_attribute name: (node_identifier (identifier)) value: (rust_expression (block (let_declaration pattern: (identifier) value: (string_literal (string_content))))))) (self_closing_element_node name: (generic_identifier (node_identifier (identifier)) (type_identifier))) (self_closing_element_node name: (generic_identifier (node_identifier (identifier) (identifier)) (scoped_type_identifier path: (identifier) name: (type_identifier)))) (self_closing_element_node name: (generic_identifier (node_identifier (identifier)) (generic_type type: (type_identifier) type_arguments: (type_arguments (type_identifier))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), rstml.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
