//go:build !plugin

package bitbake_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/bitbake"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
inherit buildhistory rm_work

inherit ${VARNAME}

VARIABLE = ""
VARIABLE:someoverride = "myclass"

python () {
    if condition == value:
        d.setVar('VARIABLE', 'myclass')
    else:
        d.setVar('VARIABLE', '')
}
`
	expected = "(recipe (inherit_directive (inherit_path) (inherit_path)) (inherit_directive (variable_expansion (identifier))) (variable_assignment (identifier) (literal (string))) (variable_assignment (identifier) (override (identifier)) (literal (string (string_content)))) (anonymous_python_function (block (if_statement condition: (comparison_operator (python_identifier) (python_identifier)) consequence: (block (expression_statement (call function: (attribute object: (python_identifier) attribute: (python_identifier)) arguments: (argument_list (python_string (string_start) (string_content) (string_end)) (python_string (string_start) (string_content) (string_end)))))) alternative: (else_clause body: (block (expression_statement (call function: (attribute object: (python_identifier) attribute: (python_identifier)) arguments: (argument_list (python_string (string_start) (string_content) (string_end)) (python_string (string_start) (string_end)))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), bitbake.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
