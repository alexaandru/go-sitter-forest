package Go_test

import (
	"context"
	"testing"

	Go "github.com/alexaandru/go-tree-sitter-parsers/go"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
package main

import (
	"fmt"
)

// Interface definition
type Speaker interface {
	Speak() string
}

// Method definition for the Person struct
func (p Person) Speak() string {
	return fmt.Sprintf("Hello, my name is %s and I am %d years old.", p.Name, p.Age)
}
`
	expected = "(source_file (package_clause (package_identifier)) (import_declaration (import_spec_list (import_spec path: (interpreted_string_literal)))) (comment) (type_declaration (type_spec name: (type_identifier) type: (interface_type (method_spec name: (field_identifier) parameters: (parameter_list) result: (type_identifier))))) (comment) (method_declaration receiver: (parameter_list (parameter_declaration name: (identifier) type: (type_identifier))) name: (field_identifier) parameters: (parameter_list) result: (type_identifier) body: (block (return_statement (expression_list (call_expression function: (selector_expression operand: (identifier) field: (field_identifier)) arguments: (argument_list (interpreted_string_literal) (selector_expression operand: (identifier) field: (field_identifier)) (selector_expression operand: (identifier) field: (field_identifier)))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), Go.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
