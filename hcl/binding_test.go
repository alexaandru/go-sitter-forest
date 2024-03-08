package hcl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/hcl"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = `image_id = "abc123"`
	expected = "(config_file (body (attribute (identifier) (expression (literal_value (string_lit (quoted_template_start) (template_literal) (quoted_template_end)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), hcl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
