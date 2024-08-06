//go:build !plugin

package risor_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/risor"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
for _, value := range work(5) {
	print("received:", value)
}
`
	expected = "(source_file (for_statement (range_clause left: (expression_list (identifier) (identifier)) right: (call_expression function: (identifier) arguments: (argument_list (int_literal)))) body: (block (expression_statement (call_expression function: (identifier) arguments: (argument_list (string) (identifier)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), risor.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
