package commonlisp_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/commonlisp"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
(defun factorial (n)
  (if (= n 0)
      1
      (* n (factorial (- n 1)))))
`
	expected = "(source (list_lit (defun (defun_header keyword: (defun_keyword) function_name: (sym_lit) lambda_list: (list_lit value: (sym_lit))) value: (list_lit value: (sym_lit) value: (list_lit value: (sym_lit) value: (sym_lit) value: (num_lit)) value: (num_lit) value: (list_lit value: (sym_lit) value: (sym_lit) value: (list_lit value: (sym_lit) value: (list_lit value: (sym_lit) value: (sym_lit) value: (num_lit))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), commonlisp.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
