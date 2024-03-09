//go:build !plugin

package regex_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/regex"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = `[-a-zA-Z0-9@:%._\+~#=]{2,256}\.[a-z]{2,6}\b([-a-zA-Z0-9@:%_\+.~#?&//=]*)`
	expected = "(pattern (term (character_class (class_character) (class_range (class_character) (class_character)) (class_range (class_character) (class_character)) (class_range (class_character) (class_character)) (class_character) (class_character) (class_character) (class_character) (class_character) (identity_escape) (class_character) (class_character) (class_character)) (count_quantifier (decimal_digits) (decimal_digits)) (identity_escape) (character_class (class_character) (class_character) (class_character)) (count_quantifier (decimal_digits) (decimal_digits)) (boundary_assertion) (anonymous_capturing_group (pattern (term (character_class (class_character) (class_range (class_character) (class_character)) (class_range (class_character) (class_character)) (class_range (class_character) (class_character)) (class_character) (class_character) (class_character) (class_character) (identity_escape) (class_character) (class_character) (class_character) (class_character) (class_character) (class_character) (class_character) (class_character)) (zero_or_more))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), regex.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
