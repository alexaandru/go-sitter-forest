//go:build !plugin

package phpdoc_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/phpdoc"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
/**
 * Calculates sum of squares of an array
 *
 * Loops over each element in the array, squares it, and adds it to 
 * total. Returns total.
 * 
 * This function can also be implemented using array_reduce();
 * 
 * @param array $arr
 * @return int
 * @throws Exception If element in array is not an integer
 */
`
	expected = "(document (description (text) (text) (ERROR (name)) (text)) (tag (tag_name) (primitive_type) (variable_name (name))) (tag (tag_name) (primitive_type)) (tag (tag_name) (named_type (name)) (description (text))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), phpdoc.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
