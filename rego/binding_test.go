package rego_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/rego"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
v { "hello" == "world" }

t2 {
    x := 42
    y := 41
    x > y
}
`
	expected = "(source_file (ERROR (keyword) (open_curly) (keyword) (keyword) (close_curly) (keyword) (number) (open_curly) (keyword) (assignment) (number) (keyword) (assignment) (number) (keyword) (keyword) (close_curly)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), rego.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
