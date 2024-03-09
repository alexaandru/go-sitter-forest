//go:build !plugin

package gleam_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/gleam"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
fn record_with_fun_field(record) {
  let foo = Bar(baz: fn(x) { x + 1 })
  foo.baz(41)
  record.foobar("hello")

  string.replace("hello", "l", "o")
}
`
	expected = "(source_file (function name: (identifier) parameters: (function_parameters (function_parameter name: (identifier))) body: (function_body (let pattern: (identifier) value: (record name: (constructor_name) arguments: (arguments (argument label: (label) value: (anonymous_function parameters: (function_parameters (function_parameter name: (identifier))) body: (function_body (binary_expression left: (identifier) right: (integer)))))))) (function_call function: (field_access record: (identifier) field: (label)) arguments: (arguments (argument value: (integer)))) (function_call function: (field_access record: (identifier) field: (label)) arguments: (arguments (argument value: (string (quoted_content))))) (function_call function: (field_access record: (identifier) field: (label)) arguments: (arguments (argument value: (string (quoted_content))) (argument value: (string (quoted_content))) (argument value: (string (quoted_content))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), gleam.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
