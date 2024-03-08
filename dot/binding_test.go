package dot_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/dot"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
digraph G {
    A [label="Node A"];
    B [label="Node B"];
    C [label="Node C"];
    A -> B;
    B -> C;
    C -> A;
}
`
	expected = "(source_file id: (id (identifier)) block: (block (stmt_list (node_stmt (node_id (id (identifier))) (attr_list (attribute name: (id (identifier)) (operator) value: (id (string_literal))))) (node_stmt (node_id (id (identifier))) (attr_list (attribute name: (id (identifier)) (operator) value: (id (string_literal))))) (node_stmt (node_id (id (identifier))) (attr_list (attribute name: (id (identifier)) (operator) value: (id (string_literal))))) (edge_stmt (node_id (id (identifier))) (edgeop) (node_id (id (identifier)))) (edge_stmt (node_id (id (identifier))) (edgeop) (node_id (id (identifier)))) (edge_stmt (node_id (id (identifier))) (edgeop) (node_id (id (identifier)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), dot.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
