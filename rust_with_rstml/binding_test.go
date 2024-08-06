//go:build !plugin

package rust_with_rstml_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/rust_with_rstml"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `view! {
  <div />
}

fn main() {
   println!("Hello, world!");
}
`
	expected = "(source_file (macro_invocation macro: (identifier) (delim_nodes (self_closing_element_node name: (node_identifier (identifier))))) (function_item name: (identifier) parameters: (parameters) body: (block (expression_statement (macro_invocation macro: (identifier) (token_tree (string_literal (string_content))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), rust_with_rstml.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
