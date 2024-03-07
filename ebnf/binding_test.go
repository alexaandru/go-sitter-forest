package ebnf_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/ebnf"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
digit excluding zero = "1" | "2" | "3" | "4" | "5" | "6" | "7" | "8" | "9" ;
digit                = "0" | digit excluding zero ;

twelve                          = "1", "2" ;
two hundred one                 = "2", "0", "1" ;
three hundred twelve            = "3", twelve ;
twelve thousand two hundred one = twelve, two hundred one ;
`
	expected = "(syntax (syntax_rule name: (identifier) (ERROR (identifier) (identifier)) definition: (binary_expression left: (binary_expression left: (binary_expression left: (binary_expression left: (binary_expression left: (binary_expression left: (binary_expression left: (binary_expression left: (terminal) right: (terminal)) right: (terminal)) right: (terminal)) right: (terminal)) right: (terminal)) right: (terminal)) right: (terminal)) right: (terminal))) (syntax_rule name: (identifier) definition: (binary_expression left: (terminal) right: (identifier)) (ERROR (identifier) (identifier))) (syntax_rule name: (identifier) definition: (binary_expression left: (terminal) right: (terminal))) (ERROR (identifier) (identifier)) (syntax_rule name: (identifier) definition: (binary_expression left: (binary_expression left: (terminal) right: (terminal)) right: (terminal))) (ERROR (identifier) (identifier)) (syntax_rule name: (identifier) definition: (binary_expression left: (terminal) right: (identifier))) (ERROR (identifier) (identifier) (identifier) (identifier)) (syntax_rule name: (identifier) definition: (binary_expression left: (identifier) right: (identifier)) (ERROR (identifier) (identifier))))"
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
