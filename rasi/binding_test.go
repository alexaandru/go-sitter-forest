//go:build !plugin

package rasi_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/rasi"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
* {
    alternate-active-foreground: @active-foreground;
    active-background:           rgba ( 39, 40, 34, 0 % );
    selected-active-background:  rgba ( 20, 20, 17, 100 % );
}
window {
    background-color: @background;
    border:           1;
    padding:          5;
}
mainbox {
    border:  0;
    padding: 0;
}
`
	expected = "(stylesheet (rule_set selectors: (selectors (global_selector)) body: (block (declaration (property_name) value: (reference_value name: (identifier))) (declaration (property_name) value: (rgb_color (integer_value) (integer_value) (integer_value) (percentage))) (declaration (property_name) value: (rgb_color (integer_value) (integer_value) (integer_value) (percentage (integer_value)))))) (rule_set selectors: (selectors (id_selector widget: (identifier))) body: (block (declaration (property_name) value: (reference_value name: (identifier))) (declaration (property_name) value: (integer_value)) (declaration (property_name) value: (integer_value)))) (rule_set selectors: (selectors (id_selector widget: (identifier))) body: (block (declaration (property_name) value: (distance_value)) (declaration (property_name) value: (distance_value)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), rasi.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
