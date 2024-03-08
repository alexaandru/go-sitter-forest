package authzed_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/authzed"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
definition user {}

definition resource {
	relation manager: user | usergroup#member | usergroup#manager
	relation viewer: user  | usergroup#member | usergroup#manager

	permission manage = manager
	permission view = viewer + manager
}
`
	expected = "(source_file (definition (definition_literal) name: (identifier) body: (block)) (definition (definition_literal) name: (identifier) body: (block (relation relation: (relation_literal) relation_name: (identifier) relation_expression: (rel_expression (identifier) (pipe_literal) (identifier) (hash_literal) (identifier) (pipe_literal) (identifier) (hash_literal) (identifier))) (relation relation: (relation_literal) relation_name: (identifier) relation_expression: (rel_expression (identifier) (pipe_literal) (identifier) (hash_literal) (identifier) (pipe_literal) (identifier) (hash_literal) (identifier))) (permission permission: (permission_literal) param_name: (identifier) permission_expresssion: (perm_expression (identifier) (identifier))) (permission permission: (permission_literal) param_name: (identifier) permission_expresssion: (perm_expression (identifier) (identifier) (plus_literal) (identifier))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), authzed.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
