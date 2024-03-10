//go:build !plugin

package scheme_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/scheme"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
(define WINDOW-WIDTH 150)
(define WINDOW-HEIGHT 180)

; A world is a number.
; Its display is a blue disk of that size.
; show-world : world -> image
(define (show-world diameter)
  (circle diameter "solid" "blue"))
"Examples of show-world:"
(show-world 1) "should be a blue dot"
(show-world 20) "should be" (circle 20 "solid" "blue")

"Now let's start the animation!"

(big-bang WINDOW-WIDTH WINDOW-HEIGHT 1 10)
(on-update-event show-world)
`
	expected = "(program (list (symbol) (symbol) (number)) (list (symbol) (symbol) (number)) (comment) (comment) (comment) (list (symbol) (list (symbol) (symbol)) (list (symbol) (symbol) (string) (string))) (string) (list (symbol) (number)) (string) (list (symbol) (number)) (string) (list (symbol) (number) (string) (string)) (string) (list (symbol) (symbol) (symbol) (number) (number)) (list (symbol) (symbol)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), scheme.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
