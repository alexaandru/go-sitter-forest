//go:build !plugin

package css_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/css"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = `p { color: red; }`
	expected = "(stylesheet (rule_set (selectors (tag_name)) (block (declaration (property_name) (plain_value)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), css.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
