package c_sharp_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/c_sharp"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = "using static System.Math;"
	expected = "(compilation_unit (using_directive name: (qualified_name qualifier: (identifier) name: (identifier))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), c_sharp.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
