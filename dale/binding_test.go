//go:build !plugin

package dale_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/dale"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `(import cstdio)
(import cstdlib)

(def Point (struct intern ((x int) (y int))))

(def + (fn intern Point ((a Point) (b Point))
  (let ((r Point ((x (+ (@: a x) (@: b x)))
                  (y (+ (@: a y) (@: b y))))))
    (return r))))

(def main (fn extern-c int (void)
  (let ((a Point ((x 1) (y 2)))
        (b Point ((x 3) (y 4)))
        (c Point (+ a b)))
    (printf "%d %d\n" (@: c x) (@: c y)))))
`
	expected = "(source_file (list (symbol) (symbol)) (list (symbol) (symbol)) (list (symbol) (symbol) (list (symbol) (symbol) (list (list (symbol) (symbol)) (list (symbol) (symbol))))) (list (symbol) (symbol) (list (symbol) (symbol) (symbol) (list (list (symbol) (symbol)) (list (symbol) (symbol))) (list (symbol) (list (list (symbol) (symbol) (list (list (symbol) (list (symbol) (list (symbol) (symbol) (symbol)) (list (symbol) (symbol) (symbol)))) (list (symbol) (list (symbol) (list (symbol) (symbol) (symbol)) (list (symbol) (symbol) (symbol))))))) (list (symbol) (symbol))))) (list (symbol) (symbol) (list (symbol) (symbol) (symbol) (list (symbol)) (list (symbol) (list (list (symbol) (symbol) (list (list (symbol) (number)) (list (symbol) (number)))) (list (symbol) (symbol) (list (list (symbol) (number)) (list (symbol) (number)))) (list (symbol) (symbol) (list (symbol) (symbol) (symbol)))) (list (symbol) (string) (list (symbol) (symbol) (symbol)) (list (symbol) (symbol) (symbol)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), dale.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
