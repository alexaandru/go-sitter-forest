//go:build !plugin

package haskell_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/haskell"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
module Main where

-- Function to calculate factorial
factorial :: Integer -> Integer
factorial 0 = 1
factorial n = n * factorial (n - 1)
`
	expected = "(haskell module: (module) (where) (comment) (signature name: (variable) type: (fun (type_name (type)) (type_name (type)))) (function name: (variable) patterns: (patterns (pat_literal (integer))) rhs: (exp_literal (integer))) (function name: (variable) patterns: (patterns (pat_name (variable))) rhs: (exp_infix (exp_name (variable)) (operator) (exp_apply (exp_name (variable)) (exp_parens (exp_infix (exp_name (variable)) (operator) (exp_literal (integer))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), haskell.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
