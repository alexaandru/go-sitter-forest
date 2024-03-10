//go:build !plugin

package nim_format_string_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/nim_format_string"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = `&"""{"abc":>4}"""`
	expected = "(source_file (string_literal (matching_curlies opening_curly: (opening_curly) nim_expression: (nim_expression) format_specifiers: (format_specifiers colon: (colon) fill_align: (fill_align) min_width: (min_width)) closing_curly: (closing_curly))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), nim_format_string.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
