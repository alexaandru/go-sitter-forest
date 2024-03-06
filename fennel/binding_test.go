package fennel_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/fennel"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = `(local bit (require :bit))`
	expected = "(program (list call: (symbol) item: (symbol) item: (list call: (symbol) item: (string content: (string_content)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), fennel.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
