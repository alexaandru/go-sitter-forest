package templ_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/templ"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
package main

templ Hello(name string) {
  <div>Hello, { name }</div>
}

templ Greeting(person Person) {
  <div class="greeting">
    @Hello(person.Name)
  </div>
}
`
	expected = "(source_file (package_clause (package_identifier)) (component_declaration name: (component_identifier) (parameter_list (parameter_declaration name: (identifier) type: (type_identifier))) (component_block (element (tag_start name: (element_identifier)) (element_text) (expression (identifier)) (tag_end name: (element_identifier))))) (component_declaration name: (component_identifier) (parameter_list (parameter_declaration name: (identifier) type: (type_identifier))) (component_block (element (tag_start name: (element_identifier) (attribute name: (attribute_name) value: (quoted_attribute_value (attribute_value)))) (component_import name: (component_identifier) arguments: (argument_list (selector_expression operand: (identifier) field: (field_identifier)))) (tag_end name: (element_identifier))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), templ.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
