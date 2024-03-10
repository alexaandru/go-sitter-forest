//go:build !plugin

package nim_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/nim"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
const
  NimbleStableCommit = "168416290e49023894fc26106799d6f1fc964a2d" # master
  # examples of possible values: #head, #ea82b54, 1.2.3
  FusionStableHash = "#372ee4313827ef9f2ea388840f7d6b46c2b1b014"
  ChecksumsStableCommit = "b4c73320253f78e3a265aec6d9e8feb83f97c77b"

when defined(gcc) and defined(windows):
  when defined(x86):
    {.link: "icons/koch.res".}
  else:
    {.link: "icons/koch_icon.o".}
`
	expected = "(source_file (const_section (variable_declaration (symbol_declaration_list (symbol_declaration name: (identifier))) value: (interpreted_string_literal (string_content))) (comment (comment_content)) (comment (comment_content)) (variable_declaration (symbol_declaration_list (symbol_declaration name: (identifier))) value: (interpreted_string_literal (string_content))) (variable_declaration (symbol_declaration_list (symbol_declaration name: (identifier))) value: (interpreted_string_literal (string_content)))) (when condition: (infix_expression left: (call function: (identifier) (argument_list (identifier))) right: (call function: (identifier) (argument_list (identifier)))) consequence: (statement_list (when condition: (call function: (identifier) (argument_list (identifier))) consequence: (statement_list (pragma_statement (pragma_list (colon_expression left: (identifier) right: (interpreted_string_literal (string_content)))))) alternative: (else_branch consequence: (statement_list (pragma_statement (pragma_list (colon_expression left: (identifier) right: (interpreted_string_literal (string_content)))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), nim.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
