//go:build !plugin

package eds_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/eds"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = ""
	expected = "IMPLEMENT ME"
)

func TestGrammar(t *testing.T) {
	t.Skip("TODO: no clue about this one")
	n, err := sitter.ParseCtx(context.Background(), []byte(code), eds.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
