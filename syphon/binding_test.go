//go:build !plugin

package syphon_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/syphon"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `arr = ["H", "e", "l", "l", "o", ",", " ", "W", "o", "r", "l", "d", "!", "\n"]

i = 0

while i < length(arr) {
    print(arr[i])

    i += 1
}
`
	expected = "(module (assign target: (identifier) value: (array (string) (string) (string) (string) (string) (string) (string) (string) (string) (string) (string) (string) (string) (string))) (assign target: (identifier) value: (int)) (while condition: (binary_operation lhs: (identifier) rhs: (call (identifier) (arguments (identifier)))) (body (call (identifier) (arguments (subscript target: (identifier) index: (identifier)))) (assign target: (identifier) value: (int)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), syphon.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
