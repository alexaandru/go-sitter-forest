//go:build !plugin

package ott_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ott"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `metavar a {{ tex \alpha }}, b, c ::=
indexvar i, j ::=

grammar

type, t :: 'ty_' ::=
  | a                   ::  :: var
  | </ ti // -> // i /> ::  :: arrow

defns
typing :: 'ty_' ::=
`
	expected = "(source_file (metavardefn (string_desc (string) (homomorphism name: (hom_name) body: (hom_body))) (string_desc (string)) (string_desc (string))) (metavardefn (string_desc (string)) (string_desc (string))) (grammar_rule (string_desc (string)) (string_desc (string)) (namespace_prefix) (production element: (string) production_name: (production_name)) (production element: (string) element: (string) element: (comprehension_bound (string)) production_name: (production_name))) (defnclass class_name: (defnclass_name) namespace_prefix: (namespace_prefix)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), ott.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
