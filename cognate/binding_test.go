//go:build !plugin

package cognate_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/cognate"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `~~
~~ Hello
~~
Print + 1 2; then Print Four for me ;
ABC 1; ~~ Blah
Let A be something;
Def TheName (FnCall Aa Bb Cc;):
`
	expected = "(source_file (line_comment) (line_comment) (line_comment) (statement (identifier) (identifier) (number) (number)) (inline_comment) (statement (identifier) (identifier) (inline_comment) (inline_comment)) (statement (identifier) (number)) (line_comment) (statement (identifier) (identifier) (inline_comment) (inline_comment)) (statement (identifier) (identifier) (block (statement (identifier) (identifier) (identifier) (identifier)))) (ERROR (UNEXPECTED ':')))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), cognate.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
