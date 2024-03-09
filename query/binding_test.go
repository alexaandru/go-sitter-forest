//go:build !plugin

package query_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/query"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
(program
  (function_declaration
    name: (identifier) @function-name
    parameters: (parameter_list
      (parameter
        (identifier) @parameter-name
        (type_identifier) @parameter-type))))
`
	expected = "(program (named_node name: (identifier) (named_node name: (identifier) (field_definition name: (identifier) (named_node name: (identifier) (capture name: (identifier)))) (field_definition name: (identifier) (named_node name: (identifier) (named_node name: (identifier) (named_node name: (identifier) (capture name: (identifier))) (named_node name: (identifier) (capture name: (identifier)))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), query.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
