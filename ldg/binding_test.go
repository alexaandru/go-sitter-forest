//go:build !plugin

package ldg_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ldg"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = `TODO: no clue how this language looks like`
	expected = "(chunk (ERROR (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), ldg.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
