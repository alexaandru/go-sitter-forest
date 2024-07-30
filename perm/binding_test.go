//go:build !plugin

package perm_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/perm"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `entity user {}

entity player {}

// this is a comment

entity organization {
    // create relation

    relation admin @user and @player
}
`
	expected = "(source_file (entity_definition name: (identifier) (open_brace) (close_brace)) (entity_definition name: (identifier) (open_brace) (close_brace)) (comment) (entity_definition name: (identifier) (open_brace) (comment) (relation_definition relation_name: (identifier) (relation_association association_name: (identifier)) (and_statement) (relation_association association_name: (identifier))) (close_brace)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), perm.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
