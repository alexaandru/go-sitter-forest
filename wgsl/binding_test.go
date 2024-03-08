package wgsl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/wgsl"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
var a: i32 = 2;
var i: i32 = 0;
loop {
  let step: i32 = 1;

  if i % 2 == 0 { continue; }

  a = a * 2;

  continuing {
    i = i + step;
    if i >= 4 { break; } // Invalid.  Use break-if instead.
  }
}
`
	expected = "(source_file (global_variable_declaration (variable_declaration (variable_identifier_declaration name: (identifier) type: (type_declaration))) (const_expression (const_literal (int_literal)))) (global_variable_declaration (variable_declaration (variable_identifier_declaration name: (identifier) type: (type_declaration))) (const_expression (const_literal (int_literal)))) (ERROR (identifier)) (global_constant_declaration (variable_identifier_declaration name: (identifier) type: (type_declaration)) (const_expression (const_literal (int_literal)))) (ERROR (identifier) (identifier) (int_literal) (int_literal)) (ERROR (identifier) (identifier) (int_literal)) (ERROR (identifier) (identifier) (identifier) (identifier)) (ERROR (identifier) (identifier) (int_literal)) (ERROR (line_comment)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), wgsl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
