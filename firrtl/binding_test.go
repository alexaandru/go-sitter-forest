//go:build !plugin

package firrtl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/firrtl"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `circuit SimpleAdder :
  module SimpleAdder :
    input a : UInt<8>
    input b : UInt<8>
    output c : UInt<8>

    c <= add(a, b)
`
	expected = "(source_file (circuit (identifier) (module (identifier) (port (dir) (identifier) (type (number (number)))) (port (dir) (identifier) (type (number (number)))) (port (dir) (identifier) (type (number (number)))) (connection (identifier) (primitive_operation (primop) (identifier) (identifier))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), firrtl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
