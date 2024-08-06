//go:build !plugin

package lua_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/lua"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = `print("Hello World!")`
	expected = "(chunk (function_call name: (identifier) arguments: (arguments (string content: (string_content)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), lua.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
