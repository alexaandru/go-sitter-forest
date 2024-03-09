//go:build !plugin

package slint_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/slint"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
global Palette := {
    property<color> primary: blue;
    property<color> secondary: green;
}

BoxWithLabel := GridLayout {
    Row {
        Text { text: "label text here"; }
    }
    Row {
        @children
    }
}
`
	expected = "(sourcefile (global_definition name: (user_type_identifier) (global_block (property type: (type (builtin_type_identifier)) name: (simple_identifier) binding: (expression (simple_identifier))) (property type: (type (builtin_type_identifier)) name: (simple_identifier) binding: (expression (simple_identifier))))) (component_definition name: (user_type_identifier) base_type: (user_type_identifier) (block (component type: (user_type_identifier) (block (component type: (user_type_identifier) (block (property_assignment property: (simple_identifier) value: (expression (value (string_value)))))))) (component type: (user_type_identifier) (block (children_identifier))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), slint.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
