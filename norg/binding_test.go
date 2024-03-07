package norg_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/norg"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = ""
	expected = "IMPLEMENT ME"
)

func TestGrammar(t *testing.T) {
	t.Skip("TODO")
	n, err := sitter.ParseCtx(context.Background(), []byte(code), norg.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
