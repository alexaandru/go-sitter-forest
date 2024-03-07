package jsonnet_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/jsonnet"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = `local my_function(x, y=10) = x + y;`
	expected = "(document (local_bind (local) (bind function: (id) params: (params (param identifier: (id)) (param identifier: (id) value: (number))) body: (binary left: (id) operator: (additive) right: (id))) (id (MISSING _ident))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), jsonnet.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
