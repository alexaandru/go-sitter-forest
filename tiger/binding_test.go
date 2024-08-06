//go:build !plugin

package tiger_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/tiger"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
let
  class A extends Object {}

  type B = class extends A {
    var a := 12

    method meth() : int = self.a
  }

  var object := new B
in
  object.a := 27;

  object.meth()
end
`
	expected = "(source_file (let_expression declarations: (class_declaration name: (identifier) (extends_qualifier super: (type_identifier))) declarations: (type_declaration name: (identifier) value: (class_type (extends_qualifier super: (type_identifier)) fields: (field_declaration name: (identifier) (operator) value: (integer_literal)) fields: (method_declaration name: (identifier) parameters: (parameters) return_type: (type_identifier) body: (record_value record: (identifier) field: (field_identifier))))) declarations: (variable_declaration name: (identifier) (operator) value: (new_expression class: (type_identifier))) body: (assignment_expression left: (record_value record: (identifier) field: (field_identifier)) (operator) right: (integer_literal)) body: (method_call object: (identifier) method: (identifier))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), tiger.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
