//go:build !plugin

package luap_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/luap"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = `"^[+-]?%d+$"`
	expected = "(pattern (character) (character) (set (character) (character) (zero_or_one)) (class_pattern (class) (one_or_more)) (character) (character))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), luap.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
