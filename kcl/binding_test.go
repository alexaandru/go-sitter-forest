//go:build !plugin

package kcl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/kcl"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `a: int = 1
b: str = "s"
c: float = 1.0
d: bool = True

schema Person:
    firstName: str = "John"

import k8s.api

if True: a = 1
`
	expected = "(module (assignment left: (dotted_name (identifier)) type: (type (basic_type)) right: (integer)) (assignment left: (dotted_name (identifier)) type: (type (basic_type)) right: (string (string_start) (string_content) (string_end))) (assignment left: (dotted_name (identifier)) type: (type (basic_type)) right: (float)) (assignment left: (dotted_name (identifier)) type: (type (basic_type)) right: (true)) (schema_statement name: (identifier) body: (block (assignment left: (dotted_name (identifier)) type: (type (basic_type)) right: (string (string_start) (string_content) (string_end))))) (import_statement name: (dotted_name (identifier) (identifier))) (if_statement condition: (true) consequence: (block (assignment left: (dotted_name (identifier)) right: (integer)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), kcl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
