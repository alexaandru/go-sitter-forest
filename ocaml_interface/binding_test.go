package ocaml_interface_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/ocaml_interface"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = `class type interface = object method method_I_want : int end`
	expected = "(compilation_unit (class_type_definition (class_type_binding name: (class_type_name) body: (class_body_type (method_specification (method_name) (type_constructor_path (type_constructor)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), ocaml_interface.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
