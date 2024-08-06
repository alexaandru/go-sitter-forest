//go:build !plugin

package hocon_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/hocon"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
{
    "foo" : { "a" : 42 },
    "foo" : { "b" : 43 }
}
`
	expected = "(document (object (pair (path (string)) (value (object (pair (path (string)) (value (number)))))) (pair (path (string)) (value (object (pair (path (string)) (value (number))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), hocon.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
