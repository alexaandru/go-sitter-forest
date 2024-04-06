//go:build !plugin

package calc_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/calc"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = `10-+10*10`
	expected = "(expression (binary_expression left: (expression (number)) right: (expression (binary_expression left: (expression (number)) right: (expression (number))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), calc.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
