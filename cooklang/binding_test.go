//go:build !plugin

package cooklang_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/cooklang"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
DRIED HERBS AND SPICES
    dried oregano                 3 tbsp
    dried sage                    1 tsp
    pepper                        1 pinch
    salt                          25 g, 2 pinches`
	expected = "(recipe (step) (step) (step) (step) (step))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), cooklang.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
