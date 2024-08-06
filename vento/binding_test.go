//go:build !plugin

package vento_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/vento"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
<header>
  {{ if printName }}
  <h1>{{ (await getUser(34)).name |> toUpperCase }}</h1>
  {{ /if }}
</header>
`
	expected = "(template (content) (tag (keyword) (code)) (content) (tag (code) (filter (code))) (content) (tag (keyword)) (content))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), vento.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
