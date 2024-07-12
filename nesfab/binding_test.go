//go:build !plugin

package nesfab_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/nesfab"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `fn for() U
    expression
    expression

fn baz() UUU[10]
    expression
`
	expected = "(program (function_definition (identifier) (type (scalar_type (integer_type))) (block (indent) (expression) (expression) (dedent))) (function_definition (identifier) (type (array_type (typed_element_array_type (scalar_type (integer_type)) (numeric_literal)))) (block (indent) (expression) (dedent))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), nesfab.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
