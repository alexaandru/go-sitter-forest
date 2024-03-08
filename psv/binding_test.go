package psv_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/psv"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = `foo|"bar" | baz            |         42`
	expected = "(document (row (field (text)) (field (text)) (field (text)) (field (number))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), psv.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
