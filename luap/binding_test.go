package luap_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/luap"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = `"^[+-]?%d+$"`
	expected = "(pattern (character) (character) (set (character) (character) (zero_or_one)) (class_pattern (class) (one_or_more)) (character) (character))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), luap.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
