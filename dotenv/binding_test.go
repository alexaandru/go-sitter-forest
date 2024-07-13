//go:build !plugin

package dotenv_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/dotenv"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `# Sample dotenv file
SIMPLE=xyz123
INTERPOLATED="Multiple\nLines and variable substitution: ${SIMPLE}"
NON_INTERPOLATED='raw text without variable interpolation'
MULTILINE = """
long text here,
e.g. a private SSH key
"""
`
	expected = "(source_file (comment) (variable name: (identifier) value: (value (raw_value))) (variable name: (identifier) value: (value (string_interpolated (escape_sequence) (interpolated_variable (identifier))))) (variable name: (identifier) value: (value (string_literal))) (variable name: (identifier) value: (value (string_interpolated))) (ERROR (UNEXPECTED 'l') (identifier) (UNEXPECTED 'k')))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), dotenv.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
