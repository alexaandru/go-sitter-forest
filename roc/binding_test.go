//go:build !plugin

package roc_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/roc"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
main=
  { aliceID, bobID, trudyID } = 
      initIDCount {
          aliceID: <- incID,
          bobID: <- incID,
          trudyID: <- incID,
      } |> extractState   
  aliceID
`
	expected = "(file (value_declaration (decl_left (identifier_pattern (identifier))) body: (expr_body declarations: (value_declaration (decl_left (record_pattern (record_field_pattern (field_name)) (record_field_pattern (field_name)) (record_field_pattern (field_name)))) body: (expr_body result: (bin_op_expr part: (function_call_expr caller: (variable_expr (identifier)) args: (record_expr (record_field_builder (field_name) (variable_expr (identifier))) (record_field_builder (field_name) (variable_expr (identifier))) (record_field_builder (field_name) (variable_expr (identifier))))) part: (operator) part: (variable_expr (identifier))))) result: (variable_expr (identifier)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), roc.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
