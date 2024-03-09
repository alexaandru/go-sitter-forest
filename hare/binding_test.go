//go:build !plugin

package hare_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/hare"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
use fmt;

export fn main() void = {
	const greetings = [
		"Hello, world!",
		"¡Hola Mundo!",
		"Γειά σου Κόσμε!",
		"Привіт, світ!",
		"こんにちは世界！",
	];
	for (let i = 0z; i < len(greetings); i += 1) {
		fmt::println(greetings[i])!;
	};
};
`
	expected = "(module (imports (use_statement (identifier))) (declarations (function_declaration name: (identifier) returns: (builtin_type) body: (block (const_declaration (identifier) (array_literal (string (string_content)) (string (string_content)) (string (string_content)) (string (string_content)) (string (string_content)))) (expression_statement (for_statement (let_expression (identifier) (number (integer_suffix))) condition: (binary_expression left: (identifier) right: (call_expression callee: (identifier) (identifier))) afterthought: (update_expression (identifier) (number)) body: (block (expression_statement (error_assertion_expression (call_expression callee: (scoped_type_identifier path: (identifier) name: (identifier)) (index_expression (identifier) (identifier))))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), hare.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
