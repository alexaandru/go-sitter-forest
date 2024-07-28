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
	expected = "(source_file (entity_definition name: (identifier) (opening_brace) (closing_brace)) (entity_definition name: (identifier) (opening_brace) (closing_brace)) (comment) (entity_definition name: (identifier) (opening_brace) (comment) (relation_definition name: (identifier) (relation_association name: (identifier))) (ERROR (and_statement) (UNEXPECTED 'p')) (closing_brace)))"
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
