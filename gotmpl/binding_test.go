//go:build !plugin

package gotmpl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/gotmpl"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = "{{ .Hello }} World"
	expected = "(template (field name: (identifier)) (text))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), gotmpl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
