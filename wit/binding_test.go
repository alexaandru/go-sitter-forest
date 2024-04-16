//go:build !plugin

package wit_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/wit"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `interface Example {
    type alias = string;
    func doSomething() -> bool;
}
`
	expected = "(source_file (interface name: (identifier) (type_definition type_name: (identifier) type: (type)) (function_declaration function_name: (identifier) return_type: (type))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), wit.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
