//go:build !plugin

package sus_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/sus"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = `TODO: no clue how sus looks like ¯\_(ツ)_/¯`
	expected = "(source_file (ERROR (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (UNEXPECTED 175) (identifier) (identifier) (identifier) (UNEXPECTED 175)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), sus.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
