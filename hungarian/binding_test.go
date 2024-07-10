//go:build !plugin

package hungarian_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/hungarian"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = `G_bName`
	expected = "(identifier (prefix) (body))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), hungarian.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
