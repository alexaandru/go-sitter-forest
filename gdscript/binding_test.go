//go:build !plugin

package gdscript_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/gdscript"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
var p = func(): if true: pass else: pass

# If stmts can be inline. (They do not eval to their last expr.)
t(func(): if true: 'string' else: 100)

var p = func(): if true: print(1); print(2) else: print(3); print(4)
`
	expected = "(source (variable_statement name: (name) value: (lambda (parameters) (ERROR (identifier) (pass_statement)) (body (pass_statement)))) (comment) (expression_statement (call (identifier) (arguments (lambda (parameters) (ERROR (identifier) (string)) (body (expression_statement (integer))))))) (variable_statement name: (name) value: (lambda (parameters) (body (expression_statement (call (identifier) (ERROR) (arguments (integer)))) (expression_statement (call (call (identifier) (arguments (integer))) (ERROR) (arguments (integer)))) (expression_statement (call (identifier) (arguments (integer))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), gdscript.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
