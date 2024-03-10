//go:build !plugin

package awk_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/awk"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = `{ if($3 == "B6") print $0;}`
	expected = "(program (rule (block (if_statement condition: (binary_exp left: (field_ref (number)) right: (string)) (print_statement (field_ref (number)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), awk.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
