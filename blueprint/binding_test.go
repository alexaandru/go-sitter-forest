package blueprint_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/blueprint"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
Window {
  title: bind other.title bidirectional inverted;
  // ^ property
  //      ^ keyword
  //                 ^ property
  //                        ^ keyword
  //                                     ^ keyword
  title: 456;
  // ^ property
  clicked => $something();
}
`
	expected = "(source_file (object_definition (object) (block (property_definition (property_name) (property_binding (object_id) (property_name))) (comment) (comment) (comment) (comment) (comment) (property_definition (property_name) (number)) (comment) (signal_binding (signal_name (property_name)) (function (identifier (object_id)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), blueprint.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
