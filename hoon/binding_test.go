//go:build !plugin

package hoon_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/hoon"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
++  cap
  ~/  %cap
  |=  a=@
  ^-  ?(%2 %3)
  ?-  a
    %2        %2
    %3        %3
    ?(%0 %1)  !!
    *         $(a (div a 2))
  ==
`
	expected = "(source_file (Gap) (lark) (ERROR) (Gap) (name) (Gap) (sigfasTall (rune) (Gap) (term (name)) (Gap) (bartisTall (rune) (Gap) (wrapFace (name)) (wrapFace) (wrapFace (aura)) (Gap) (kethepTall (rune) (Gap) (typeUnion (term (number)) (term (number))) (Gap) (wuthepTall (rune) (Gap) (name) (Gap) (term (number)) (Gap) (term (number)) (Gap) (term (number)) (Gap) (term (number)) (Gap) (typeUnion (term (number)) (term (number))) (Gap) (zapzap (rune)) (Gap) (mold) (Gap) (resolveWingWithChanges (name) (name) (gateCall (name) (name) (number))) (Gap) (seriesTerminator))))) (Gap))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), hoon.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
