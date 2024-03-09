//go:build !plugin

package agda_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/agda"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
module Introduction.Basics where

postulate
  N : Set
  z : N
  s : N -> N
`
	expected = "(source_file (module (module_name (qid))) (postulate (function (lhs (function_name (atom (qid)))) (rhs (expr (atom (SetN))))) (function (lhs (function_name (atom (qid)))) (rhs (expr (atom (qid))))) (function (lhs (function_name (atom (qid)))) (rhs (expr (atom (qid)) (expr (atom (qid)))))) (MISSING _dedent)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), agda.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
