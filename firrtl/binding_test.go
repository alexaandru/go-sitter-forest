package firrtl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/firrtl"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = ""
	expected = "IMPLEMENT ME"
)

func TestGrammar(t *testing.T) {
	t.Skip("TODO: no clue about this one")
	n, err := sitter.ParseCtx(context.Background(), []byte(code), firrtl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
