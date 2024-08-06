//go:build !plugin

package todolang_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/todolang"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `todo {foo}

todo {
	(bar)
}

todo {(baz) (baz) (baz)}
`
	expected = "(source_file (todo_definition (block (chars))) (todo_definition (block (chars))) (todo_definition (block (chars))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), todolang.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
