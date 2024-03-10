//go:build !plugin

package haskell_persistent_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/haskell_persistent"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = ""
	expected = "IMPLEMENT ME"
)

func TestGrammar(t *testing.T) {
	t.Skip("TODO: no idea what Haskell persistent is")
	n, err := sitter.ParseCtx(context.Background(), []byte(code), haskell_persistent.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
