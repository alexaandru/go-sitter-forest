package toml_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/toml"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = `key = "value"`
	expected = "(document (pair (bare_key) (string)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), toml.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
