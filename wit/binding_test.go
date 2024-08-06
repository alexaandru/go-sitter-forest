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
	expected = "(source_file (interface_item name: (id) (ERROR (UNEXPECTED 'x')) body: (interface_body interface_items: (interface_items typedef: (typedef_item (type_item alias: (id) type: (ty)))) (ERROR (id) (UNEXPECTED 'd')))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), wit.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
