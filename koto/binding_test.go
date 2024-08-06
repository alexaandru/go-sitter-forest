//go:build !plugin

package koto_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/koto"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `print 'Hello, World!'
check! Hello, World!

square = |n| n * n
print! '8 squared is {square 8}'
check! 8 squared is 64

print! (2, 4, 6, 8)
  .each square
  .to_list()
check! [4, 16, 36, 64]
`
	expected = "(module (chain start: (identifier) (call (string))) (chain start: (identifier) (ERROR) (call (identifier) (chain start: (identifier) (ERROR) (call (assign (identifier) (function (args (arg (variable (identifier)))) body: (binary_op (identifier) (identifier)))))))) (chain start: (identifier) (ERROR) (call (string (chain start: (identifier) (call (number)))))) (chain start: (identifier) (ERROR) (call (chain start: (identifier) (call (chain start: (identifier) (call (number))))))) (chain start: (identifier) (ERROR) (call (chain start: (tuple (number) (number) (number) (number)) lookup: (identifier) (call (chain start: (identifier) lookup: (identifier) call: (tuple)))))) (chain start: (identifier) (ERROR) (call (list (number) (number) (number) (number)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), koto.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
