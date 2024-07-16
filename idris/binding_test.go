//go:build !plugin

package idris_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/idris"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `fact : Expr ctxt (TyFun TyInt TyInt)
fact = Lam (If (Op (==) (Var Stop) (Val 0))
               (Val 1)
               (Op (*) (App fact (Op (-) (Var Stop) (Val 1)))
                       (Var Stop)))

main : IO ()
main = do putStr "Enter a number: "
          x <- getLine
          printLn (interp [] fact (cast x))
`
	expected = "(idris (signature name: (loname) (type_name (caname)) (type_name (loname)) (type_parens (type_name (caname)) (type_name (caname)) (type_name (caname)))) (function (lhs (funvar subject: (loname))) (rhs (exp_name (caname)) (exp_parens (exp_name (caname)) (exp_parens (exp_name (caname)) (exp_parens (exp_op)) (exp_parens (exp_name (caname)) (exp_name (caname))) (exp_parens (exp_name (caname)) (exp_literal (integer)))) (exp_parens (exp_name (caname)) (exp_literal (integer))) (exp_parens (exp_name (caname)) (exp_parens (exp_op)) (exp_parens (exp_name (caname)) (exp_name (loname)) (exp_parens (exp_name (caname)) (exp_parens (exp_op)) (exp_parens (exp_name (caname)) (exp_name (caname))) (exp_parens (exp_name (caname)) (exp_literal (integer))))) (exp_parens (exp_name (caname)) (exp_name (caname))))))) (signature name: (loname) (type_name (caname)) (type_parens)) (function (lhs (funvar subject: (loname))) (rhs (exp_do (statement (exp_name (loname)) (exp_literal (string))) (statement (bind_pattern (pat_name (loname)) (bind_exp (exp_name (loname))))) (statement (exp_name (loname)) (exp_parens (exp_name (loname)) (exp_list) (exp_name (loname)) (exp_parens (exp_name (loname)) (exp_name (loname)))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), idris.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
