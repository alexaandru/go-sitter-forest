//go:build !plugin

package starlark_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/starlark"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
def main():
    return [
        {
            "container": {
                "image": "debian:latest",
            },
            "script": "make",
        },
    ]
`
	expected = "(module (function_definition name: (identifier) parameters: (parameters) body: (block (return_statement (list (dictionary (pair key: (string (string_start) (string_content) (string_end)) value: (dictionary (pair key: (string (string_start) (string_content) (string_end)) value: (string (string_start) (string_content) (string_end))))) (pair key: (string (string_start) (string_content) (string_end)) value: (string (string_start) (string_content) (string_end)))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), starlark.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
