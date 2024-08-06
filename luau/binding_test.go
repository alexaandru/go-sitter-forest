//go:build !plugin

package luau_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/luau"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
--!strict

function ispositive(x)
    return x > 0
end

print(ispositive(1))
print(ispositive("2"))
`
	expected = "(chunk (comment content: (comment_content)) (function_declaration name: (identifier) parameters: (parameters (parameter (identifier))) body: (block (return_statement (expression_list (binary_expression left: (identifier) right: (number)))))) (function_call name: (identifier) arguments: (arguments (function_call name: (identifier) arguments: (arguments (number))))) (function_call name: (identifier) arguments: (arguments (function_call name: (identifier) arguments: (arguments (string content: (string_content)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), luau.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
