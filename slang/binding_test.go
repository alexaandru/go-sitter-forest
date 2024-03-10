//go:build !plugin

package slang_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/slang"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
void main() {
  int a;
  var a = 1; // OK, a is an int.
  var b = float3(0, 1, 2); // OK, b is a float3.
  var a : int = 1; // OK.
  var b : int; // OK.
  let a = 5; // OK, a is int.
  let b : int = 5; // OK.
}

interface IFoo
{
    int myMethod(float arg);
};

extension IFoo
{
    int bar() { return 0; }
};
`
	expected = "(translation_unit (primitive_type) (function_definition declarator: (function_declarator declarator: (identifier) parameters: (parameter_list)) body: (compound_statement (declaration type: (primitive_type) declarator: (identifier)) (declaration type: (placeholder_type_specifier) declarator: (init_declarator declarator: (identifier) value: (number_literal))) (comment) (declaration type: (placeholder_type_specifier) declarator: (init_declarator declarator: (identifier) value: (call_expression function: (identifier) arguments: (argument_list (number_literal) (number_literal) (number_literal))))) (comment) (declaration type: (placeholder_type_specifier) declarator: (init_declarator declarator: (type_hinted_declarator (identifier) (type_hint (primitive_type))) value: (number_literal))) (comment) (declaration type: (placeholder_type_specifier) declarator: (type_hinted_declarator (identifier) (type_hint (primitive_type)))) (comment) (declaration type: (placeholder_type_specifier) declarator: (init_declarator declarator: (identifier) value: (number_literal))) (comment) (declaration type: (placeholder_type_specifier) declarator: (init_declarator declarator: (type_hinted_declarator (identifier) (type_hint (primitive_type))) value: (number_literal))) (comment))) (interface_specifier name: (type_identifier) body: (field_declaration_list (field_declaration type: (primitive_type) declarator: (function_declarator declarator: (field_identifier) parameters: (parameter_list (parameter_declaration type: (primitive_type) declarator: (identifier))))))) (extension_specifier name: (type_identifier) body: (field_declaration_list (function_definition type: (primitive_type) declarator: (function_declarator declarator: (field_identifier) parameters: (parameter_list)) body: (compound_statement (return_statement (number_literal)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), slang.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
