//go:build !plugin

package ebnf_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ebnf"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
digit_excluding_zero = "1" | "2" | "3" | "4" | "5" | "6" | "7" | "8" | "9" ;
digit                = "0" | digit_excluding_zero ;

twelve                          = "1", "2" ;
two_hundred_one                 = "2", "0", "1" ;
three_hundred_twelve            = "3", twelve ;
twelve_thousand_two_hundred_one = twelve, two_hundred_one ;
`
	expected = "(syntax (syntax_rule name: (identifier) definition: (binary_expression left: (binary_expression left: (binary_expression left: (binary_expression left: (binary_expression left: (binary_expression left: (binary_expression left: (binary_expression left: (terminal) right: (terminal)) right: (terminal)) right: (terminal)) right: (terminal)) right: (terminal)) right: (terminal)) right: (terminal)) right: (terminal))) (syntax_rule name: (identifier) definition: (binary_expression left: (terminal) right: (identifier))) (syntax_rule name: (identifier) definition: (binary_expression left: (terminal) right: (terminal))) (syntax_rule name: (identifier) definition: (binary_expression left: (binary_expression left: (terminal) right: (terminal)) right: (terminal))) (syntax_rule name: (identifier) definition: (binary_expression left: (terminal) right: (identifier))) (syntax_rule name: (identifier) definition: (binary_expression left: (identifier) right: (identifier))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), ebnf.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
