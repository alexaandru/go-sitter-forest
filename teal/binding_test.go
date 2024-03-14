//go:build !plugin

package teal_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/teal"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
global record MyPointType
   x: number
   y: number
end

global record MyCompositeType
   center: MyPointType
end
`
	expected = "(program (record_declaration name: (identifier) record_body: (record_body (field key: (identifier) type: (simple_type name: (identifier))) (field key: (identifier) type: (simple_type name: (identifier))))) (record_declaration name: (identifier) record_body: (record_body (field key: (identifier) type: (simple_type name: (identifier))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), teal.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
