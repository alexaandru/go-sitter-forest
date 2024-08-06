//go:build !plugin

package just_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/just"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
set shell := ["sh", "-c"]
set windows-shell := ["powershell.exe", "-NoLogo", "-Command"]

alias s := serve

bt := '0'

export RUST_BACKTRACE_1 := bt

log := "warn"

foo_c := if "hello" == "goodbye" {
  "xyz"
} else if "a" == "a" {
  "abc"
} else {
  "123"
}

bar:
  @echo {{foo}}

shebang := if os() == 'windows' {
  'powershell.exe'
} else {
  '/usr/bin/env pwsh'
}
`
	expected = "(source_file (setting element: (string) element: (string)) (setting left: (identifier) element: (string) element: (string) element: (string)) (alias left: (identifier) right: (identifier)) (assignment left: (identifier) right: (expression (value (string)))) (export (assignment left: (identifier) right: (expression (value (identifier))))) (assignment left: (identifier) right: (expression (value (string)))) (assignment left: (identifier) right: (expression (if_expression (condition (expression (value (string))) (expression (value (string)))) body: (expression (value (string))) alternative: (else_if_clause (condition (expression (value (string))) (expression (value (string)))) body: (expression (value (string)))) alternative: (else_clause body: (expression (value (string))))))) (recipe (recipe_header name: (identifier)) (recipe_body (recipe_line (recipe_line_prefix) (text) (interpolation (expression (value (identifier))))))) (assignment left: (identifier) right: (expression (if_expression (condition (expression (value (function_call name: (identifier)))) (expression (value (string)))) body: (expression (value (string))) alternative: (else_clause body: (expression (value (string))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), just.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
