//go:build !plugin

package scfg_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/scfg"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
{
	"I have no clue what scfg even is"
}
`
	expected = "(config (ERROR) (directive (directive_name (word (dquote_word)))) (ERROR))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), scfg.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
