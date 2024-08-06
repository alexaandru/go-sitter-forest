//go:build !plugin

package gren_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/gren"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `module App exposing (Msg(Increment, Decrement, Reset), Other(..))

type Long = Float

type Msg
  = ViewUpdate ViewModal
  | OffersUpdate OffersModal
  | UsersUpdate a UsersModal a
`
	expected = "(source_file (module module_name: (module_name) exposing: (exposing (type_with_constructors name: (identifier) constructor: (identifier) constructor: (identifier) constructor: (identifier)) (type_with_constructors name: (identifier) constructor: (spread)))) (type_definition name: (Identifier) value: (primative)) (type_definition name: (Identifier) value: (custom_type name: (identifier) args: (identifier)) value: (custom_type name: (identifier) args: (identifier)) value: (custom_type name: (identifier) args: (identifier) args: (identifier) args: (identifier))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), gren.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
