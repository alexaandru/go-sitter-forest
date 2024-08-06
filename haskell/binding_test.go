//go:build !plugin

package haskell_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/haskell"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
module Main where

-- Function to calculate factorial
factorial :: Integer -> Integer
factorial 0 = 1
factorial n = n * factorial (n - 1)
`
	expected = "(haskell (header module: (module (module_id))) (comment) declarations: (declarations (signature name: (variable) type: (function parameter: (name) result: (name))) (function name: (variable) patterns: (patterns (literal (integer))) match: (match expression: (literal (integer)))) (function name: (variable) patterns: (patterns (variable)) match: (match expression: (infix left_operand: (variable) operator: (operator) right_operand: (apply function: (variable) argument: (parens expression: (infix left_operand: (variable) operator: (operator) right_operand: (literal (integer))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), haskell.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
