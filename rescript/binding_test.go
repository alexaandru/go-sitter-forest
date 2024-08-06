//go:build !plugin

package rescript_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/rescript"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `module Button = {
  @react.component
  let make = (~count) => {
    let times = switch count {
    | 1 => "once"
    | 2 => "twice"
    | n => n->Int.toString ++ " times"
    }
    let text = "Click me " + times"

    <button> {text->React.string} </button>
  }
}
`
	expected = "(source_file (module_declaration (module_binding name: (module_identifier) definition: (block (decorator (decorator_identifier)) (let_declaration (let_binding pattern: (value_identifier) body: (function parameters: (formal_parameters (parameter (labeled_parameter (value_identifier)))) body: (block (let_declaration (let_binding pattern: (value_identifier) body: (switch_expression (value_identifier) (switch_match pattern: (number) body: (sequence_expression (expression_statement (string (string_fragment))))) (switch_match pattern: (number) body: (sequence_expression (expression_statement (string (string_fragment))))) (switch_match pattern: (value_identifier) body: (sequence_expression (expression_statement (binary_expression left: (pipe_expression (value_identifier) (value_identifier_path (module_identifier) (value_identifier))) right: (string (string_fragment))))))))) (let_declaration (let_binding pattern: (value_identifier) body: (binary_expression left: (string (string_fragment)) right: (value_identifier)))) (ERROR) (expression_statement (jsx_element open_tag: (jsx_opening_element name: (jsx_identifier)) (block (expression_statement (pipe_expression (value_identifier) (value_identifier_path (module_identifier) (value_identifier))))) close_tag: (jsx_closing_element name: (jsx_identifier))))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), rescript.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
