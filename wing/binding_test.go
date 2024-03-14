//go:build !plugin

package wing_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/wing"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
bring cloud;

resource Lock {
  counter: cloud.Counter;
  new() {
    this.counter = new cloud.Counter();
  }

  pub inflight var is_locked: bool;

  inflight new() {
    this.is_locked = false;
  }
}
`
	expected = "(source (import_statement module_name: (identifier)) (expression_statement (struct_literal type: (custom_type object: (type_identifier)) (ERROR (identifier)) fields: (struct_literal_member (identifier) (reference (nested_identifier object: (reference (reference_identifier)) accessor_type: (accessor) property: (member_identifier)))) (MISSING \"}\"))) (ERROR (parameter_list)) (variable_assignment_statement name: (lvalue (nested_identifier object: (reference (reference_identifier)) accessor_type: (accessor) property: (member_identifier))) operator: (assignment_operator) value: (new_expression class: (custom_type object: (type_identifier) fields: (type_identifier)) args: (argument_list))) (ERROR (access_modifier) (inflight_specifier) (identifier)) (expression_statement (reference (reference_identifier)) (ERROR)) (ERROR (closure_modifiers (inflight_specifier)) (ERROR (identifier)) (parameter_list)) (variable_assignment_statement name: (lvalue (nested_identifier object: (reference (reference_identifier)) accessor_type: (accessor) property: (member_identifier))) operator: (assignment_operator) value: (bool)) (ERROR))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), wing.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
