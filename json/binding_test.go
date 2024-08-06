//go:build !plugin

package json_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/json"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
{
  "name": "John Doe",
  "age": 30
}
`
	expected = "(document (object (pair key: (string (string_content)) value: (string (string_content))) (pair key: (string (string_content)) value: (number))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), json.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
