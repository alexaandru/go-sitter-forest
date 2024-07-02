//go:build !plugin

package prolog_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/prolog"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `lag(g, f) :-
    {[Test],
      [se_other_thing-Test]}.`
	expected = "(source_file (clause_term (operator_notation (functional_notation function: (atom) (open_ct) (arg_list (atom) (arg_list_separator (comma)) (atom)) (close)) operator: (binary_operator) (curly_bracketed_notation (open_curly) (operator_notation (list_notation (open_list) (variable_term) (close_list)) operator: (comma) (list_notation (open_list) (operator_notation (atom) operator: (binary_operator) (variable_term)) (close_list))) (close_curly))) (end)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), prolog.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
