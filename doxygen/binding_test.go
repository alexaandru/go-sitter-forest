//go:build !plugin

package doxygen_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/doxygen"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
/**
 * @{ \name Five Gods constants.
 */
/**
 * \brief Five Gods constants.
 *
 * These five constants represent the five gods.
 */
`
	expected = "(document (ERROR (tag (tag_name)) (tag (tag_name) (description))) (brief_header (tag_name) (brief_description)) (description))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), doxygen.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
