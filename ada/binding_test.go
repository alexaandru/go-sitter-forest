//go:build !plugin

package ada_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ada"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = `with Ada.Text_IO; use Ada.Text_IO;`
	expected = "(compilation (compilation_unit (with_clause (selected_component prefix: (identifier) selector_name: (identifier)))) (compilation_unit (use_clause (selected_component prefix: (identifier) selector_name: (identifier)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), ada.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
