//go:build !plugin

package ocaml_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ocaml"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = `print_endline "Hello World!"`
	expected = "(compilation_unit (expression_item (application_expression function: (value_path (value_name)) argument: (string (string_content)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), ocaml.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
