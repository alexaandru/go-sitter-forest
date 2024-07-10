//go:build !plugin

package koan_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/koan"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = "let x = [1, 2, 3, 4] + 2 * 3;"
	expected = "(source_file (let_definition (identifier) (binary_expr (array_lit (number) (number) (number) (number)) (binary_expr (number) (number)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), koan.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
