//go:build !plugin

package glint_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/glint"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `;; SYNTAX TEST
   "I am a string";
`
	expected = "(source_file (comment) (string))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), glint.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
