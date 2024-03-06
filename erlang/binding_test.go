package erlang_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/erlang"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
-module(main).
-export([start/0, factorial/1, fibonacci/1]).
`
	expected = "(source_file forms_only: (module_attribute name: (atom)) forms_only: (export_attribute funs: (fa fun: (atom) arity: (arity value: (integer))) funs: (fa fun: (atom) arity: (arity value: (integer))) funs: (fa fun: (atom) arity: (arity value: (integer)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), erlang.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
