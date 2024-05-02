//go:build !plugin

package solidity_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/solidity"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
pragma solidity 0.4;
pragma solidity >=0.5.0 <0.7.0;

library a {}
library b {}
library c {}
contract test {
    function f(uint a, uint b);
    function g(uint c);
}
contract c {
    event e(uint[10] a, bytes7[8] indexed b, c[3] x);
}
contract c {
    function f() {
        uint8[10 * 2] x;
    }
}
`
	expected = "(source_file (pragma_directive (solidity_pragma_token version_constraint: (solidity_version))) (pragma_directive (solidity_pragma_token version_constraint: (solidity_version_comparison_operator) version_constraint: (solidity_version) version_constraint: (solidity_version_comparison_operator) version_constraint: (solidity_version))) (library_declaration name: (identifier) body: (contract_body)) (library_declaration name: (identifier) body: (contract_body)) (library_declaration name: (identifier) body: (contract_body)) (contract_declaration name: (identifier) body: (contract_body (function_definition name: (identifier) (parameter type: (type_name (primitive_type)) name: (identifier)) (parameter type: (type_name (primitive_type)) name: (identifier))) (function_definition name: (identifier) (parameter type: (type_name (primitive_type)) name: (identifier))))) (contract_declaration name: (identifier) body: (contract_body (event_definition name: (identifier) (event_parameter type: (type_name (type_name (primitive_type)) (expression (number_literal))) name: (identifier)) (event_parameter type: (type_name (type_name (primitive_type)) (expression (number_literal))) name: (identifier)) (event_parameter type: (type_name (type_name (user_defined_type (identifier))) (expression (number_literal))) name: (identifier))))) (contract_declaration name: (identifier) body: (contract_body (function_definition name: (identifier) body: (function_body (variable_declaration_statement (variable_declaration type: (type_name (type_name (primitive_type)) (expression (binary_expression left: (expression (number_literal)) operator: (binary_operator) right: (expression (number_literal))))) name: (identifier))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), solidity.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
