//go:build !plugin

package jsonc_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/jsonc"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
{
	// foo has comment,
	"foo": "something",

	/* bar has comment */
	"bar": 1,

	/**************************
	* everyone has a comment! *
	***************************/
	"baz": [1, 2, 3]
}
`
	expected = "(document (object (comment) (pair key: (string (string_content)) value: (string (string_content))) (comment) (pair key: (string (string_content)) value: (number)) (comment) (pair key: (string (string_content)) value: (array (number) (number) (number)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), jsonc.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
