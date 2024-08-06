//go:build !plugin

package cpon_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/cpon"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = `"Hello, World! // not a comment\n" + "something else"`
	expected = "(document (ERROR (string (string_content) (escape_sequence)) (UNEXPECTED ' ')) (string (string_content)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), cpon.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
