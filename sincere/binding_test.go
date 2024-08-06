//go:build !plugin

package sincere_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/sincere"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `import io;

main :: (args: $[string]) -> i32 {
    io.print("Hello, World!\n");
    return 0;
}
`
	expected = "(source_file (function_definition name: (identifier) (ERROR) (parameter name: (identifier) type: (array_t type: (string_t))) return_type: (signed_int_t) body: (block (access lhs: (identifier) rhs: (call callable: (identifier) (argument value: (string_literal (string_literal_fragment) (escape_sequence))))) (return_statement (integer_literal)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), sincere.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
