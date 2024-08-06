//go:build !plugin

package aiken_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/aiken"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = `validator {
  fn hello_world(datum, redeemer, context) -> Bool {
    let must_say_hello =
      redeemer == "Hello, World!"

    let must_be_signed =
      list.has(
        context.transaction.extra_signatories,
        datum.owner,
      )

    must_say_hello? && must_be_signed?
  }
}
`
	expected = "(source_file (validator (function (identifier) (function_arguments (function_argument (identifier)) (function_argument (identifier)) (function_argument (identifier))) (type_definition (type_identifier)) (expression (assignment (let_assignment (identifier) (expression (bin_op (expression (identifier)) (binary_operator) (expression (bytes (string_inner)))))))) (expression (assignment (let_assignment (identifier) (expression (call (field_access (identifier) (field_identifier)) (call_arguments (call_argument (expression (field_access (identifier) (field_identifier)))) (ERROR (UNEXPECTED 't')) (call_argument (expression (field_access (identifier) (field_identifier)))))))))) (expression (trace_if_false (expression (bin_op (expression (trace_if_false (expression (identifier)))) (binary_operator) (expression (identifier)))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), aiken.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
