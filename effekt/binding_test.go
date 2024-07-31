//go:build !plugin

package effekt_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/effekt"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
record Position [A, B](line: List[A], col: Int, index: Int)

type Locations = List[SomeLocation]

type List[A] {
  Nil();
  Cons(head: A, tail: List[A])
}

def foo() = {}

interface FileNotFound {
  def FileNotFound(path: String): Unit
}

effect FileNotFound[A](path: String, msg: A): Unit
`
	expected = "(source_file (record_item name: (type_identifier) type_parameters: (type_parameters (type_identifier) (type_identifier)) body: (field_item_list (field_declaration name: (field_identifier) type: (generic_type (type_identifier) type_arguments: (type_arguments (type_identifier)))) (field_declaration name: (field_identifier) type: (primitive_type)) (field_declaration name: (field_identifier) type: (primitive_type)))) (type_item name: (type_identifier) assignment: (type_assignment (generic_type (type_identifier) type_arguments: (type_arguments (type_identifier))))) (type_item name: (type_identifier) type_parameters: (type_parameters (type_identifier)) body: (type_variant_list (type_variant name: (type_identifier) body: (field_item_list)) (type_variant name: (type_identifier) body: (field_item_list (field_declaration name: (field_identifier) type: (type_identifier)) (field_declaration name: (field_identifier) type: (generic_type (type_identifier) type_arguments: (type_arguments (type_identifier)))))))) (function_item name: (identifier) parameters: (parameters) body: (expression_statement (block))) (interface_item name: (type_identifier) body: (declaration_list (function_item name: (identifier) parameters: (parameters (parameter pattern: (identifier) type: (primitive_type))) return_type: (return_type type: (primitive_type))))) (effect_item name: (type_identifier) type_parameters: (type_parameters (type_identifier)) parameters: (parameters (parameter pattern: (identifier) type: (primitive_type)) (parameter pattern: (identifier) type: (type_identifier))) return_type: (return_type type: (primitive_type))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), effekt.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
