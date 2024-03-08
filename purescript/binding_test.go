package purescript_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/purescript"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
import Prelude
import Effect.Console (log)

greet :: String -> String
greet name = "Hello, " <> name <> "!"

main = log (greet "World")
`
	expected = "(purescript (import module: (qualified_module (module))) (import module: (qualified_module (module) (module)) imports: (import_list (import_item (var_import (variable))))) (signature name: (variable) (type_infix (type_name (type)) (type_operator) (type_name (type)))) (function name: (variable) patterns: (patterns (pat_name (variable))) rhs: (exp_infix (exp_infix (exp_literal (string)) (operator) (exp_name (variable))) (operator) (exp_literal (string)))) (function name: (variable) rhs: (exp_apply (exp_name (variable)) (exp_parens (exp_apply (exp_name (variable)) (exp_literal (string)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), purescript.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
