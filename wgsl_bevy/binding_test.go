//go:build !plugin

package wgsl_bevy_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/wgsl_bevy"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
use bevy::prelude::*;

fn main() {
    App::new().run();
}
`
	expected = "(source_file (ERROR (identifier) (identifier) (identifier)) (function_declaration name: (identifier) body: (compound_statement (ERROR (lhs_expression (identifier) (ERROR (identifier)) (postfix_expression (identifier)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), wgsl_bevy.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
