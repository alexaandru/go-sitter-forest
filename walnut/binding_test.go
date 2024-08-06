//go:build !plugin

package walnut_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/walnut"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `  either:
      all:
          a = "mcbob"
          b = "bob"
      all:
          b = "bill"
          a = "bob"
  a = "mcbob"
`
	expected = "(module (either_statement (block (all_statement (block (unification lhs: (expression (primary_expression (identifier))) rhs: (expression (primary_expression (string (string_start) (string_content) (string_end))))) (unification lhs: (expression (primary_expression (identifier))) rhs: (expression (primary_expression (string (string_start) (string_content) (string_end))))))) (all_statement (block (unification lhs: (expression (primary_expression (identifier))) rhs: (expression (primary_expression (string (string_start) (string_content) (string_end))))) (unification lhs: (expression (primary_expression (identifier))) rhs: (expression (primary_expression (string (string_start) (string_content) (string_end))))))))) (unification lhs: (expression (primary_expression (identifier))) rhs: (expression (primary_expression (string (string_start) (string_content) (string_end))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), walnut.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
