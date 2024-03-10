//go:build !plugin

package kotlin_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/kotlin"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `import java.time.LocalDateTime

fun main(args: Array<String>) {

	val current = LocalDateTime.now()

	println("Current Date and Time is: $current")
}
`
	expected = `(source_file (import_list (import_header (identifier (simple_identifier) (simple_identifier) (simple_identifier)))) (function_declaration (simple_identifier) (parameter (simple_identifier) (user_type (type_identifier) (type_arguments (type_projection (user_type (type_identifier)))))) (function_body (statements (property_declaration (variable_declaration (simple_identifier)) (call_expression (navigation_expression (simple_identifier) (navigation_suffix (simple_identifier))) (call_suffix (value_arguments)))) (call_expression (simple_identifier) (call_suffix (value_arguments (value_argument (line_string_literal (interpolated_identifier))))))))))`
)

func TestGrammar(t *testing.T) {
	t.Skip("TODO: fix me")
	n, err := sitter.ParseCtx(context.Background(), []byte(code), kotlin.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
