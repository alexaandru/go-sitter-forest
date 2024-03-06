package clojure_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/clojure"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
(defn fibonacci [n]
  (if (or (= n 0) (= n 1))
    n
    (+ (fibonacci (- n 1)) (fibonacci (- n 2)))))
`
	expected = "(source (list_lit value: (sym_lit name: (sym_name)) value: (sym_lit name: (sym_name)) value: (vec_lit value: (sym_lit name: (sym_name))) value: (list_lit value: (sym_lit name: (sym_name)) value: (list_lit value: (sym_lit name: (sym_name)) value: (list_lit value: (sym_lit name: (sym_name)) value: (sym_lit name: (sym_name)) value: (num_lit)) value: (list_lit value: (sym_lit name: (sym_name)) value: (sym_lit name: (sym_name)) value: (num_lit))) value: (sym_lit name: (sym_name)) value: (list_lit value: (sym_lit name: (sym_name)) value: (list_lit value: (sym_lit name: (sym_name)) value: (list_lit value: (sym_lit name: (sym_name)) value: (sym_lit name: (sym_name)) value: (num_lit))) value: (list_lit value: (sym_lit name: (sym_name)) value: (list_lit value: (sym_lit name: (sym_name)) value: (sym_lit name: (sym_name)) value: (num_lit)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), clojure.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
