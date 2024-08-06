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
	expected = "(source (import_statement module_name: (identifier)) (ERROR (custom_type object: (type_identifier)) (ERROR (identifier)) (identifier) (ERROR (nested_identifier object: (reference (reference_identifier)) accessor_type: (accessor) property: (member_identifier))) (ERROR) (ERROR (nested_identifier object: (reference (reference_identifier)) accessor_type: (accessor) property: (member_identifier))) (custom_type object: (type_identifier) fields: (type_identifier)) (ERROR (phase_specifier) (reassignable)) (identifier) (ERROR (identifier) (closure_modifiers (phase_specifier)) (ERROR) (parameter_list)) (nested_identifier object: (reference (reference_identifier)) accessor_type: (accessor) property: (member_identifier))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), wing.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
