package php_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/php"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = "<?php print(1);"
	expected = "(program (php_tag) (expression_statement (print_intrinsic (parenthesized_expression (integer)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), php.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
