//go:build !plugin

package eex_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/eex"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
<%= if true do %>
  A truthful statement
<% else %>
  A false statement
<% end %>
`
	expected = "(fragment (directive (partial_expression)) (text) (directive (expression)) (text) (directive (partial_expression)) (text))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), eex.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
