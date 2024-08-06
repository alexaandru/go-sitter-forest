//go:build !plugin

package haskell_persistent_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/haskell_persistent"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = "Whatever, I have no idea what should be here, so an error will do for now"
	expected = "(persistent_definitions (ERROR (module) (comma) (UNEXPECTED ' ') (type_name (type_variable)) (attribute_name) (attribute_name) (attribute_name) (attribute_name) (attribute_name) (attribute_name) (comma)) (entity_definition name: (type_name (type_variable)) (attributes (attribute_name) (attribute_name) (attribute_name) (attribute_name) (attribute_name) (attribute_name))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), haskell_persistent.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
