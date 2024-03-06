package ada_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/ada"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = `with Ada.Text_IO; use Ada.Text_IO;`
	expected = "(compilation (compilation_unit (with_clause (selected_component prefix: (identifier) selector_name: (identifier)))) (compilation_unit (use_clause (selected_component prefix: (identifier) selector_name: (identifier)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), ada.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
