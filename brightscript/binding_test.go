//go:build !plugin

package brightscript_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/brightscript"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `function init() as void
  m.top.spinInterval = 0.75
  'Set observable
  m.top.observeField("visible", "onTopVisibilityChanged")
  onPosterChanged()
end function

'* onParentVisibilityChanged()
function onParentVisibilityChanged() as void
  updateAlignment()
  toggleSpinner(m.parent.visible)
end function

'* onTopVisibilityChanged()
function onTopVisibilityChanged() as void
  toggleSpinner(m.top.visible)
end function

'* toggleSpinner(isActive)
function toggleSpinner(isActive = false) as boolean
  if(isActive = true)
    m.top.control = "start"
  else
    m.top.control = "stop"
  end if
  return isActive
end function
`
	expected = "(source_file (function_statement (function_start) name: (identifier) parameters: (parameter_list) return_type: (return_type type: (type_specifier)) body: (block (assignment_statement left: (variable_declarator (prefix_exp (prefix_exp (identifier)) (identifier)) (identifier)) right: (literal (number))) (comment) (function_call function: (prefix_exp (prefix_exp (prefix_exp (identifier)) (identifier)) (identifier)) arguments: (parenthesized_expression (literal (string value: (string_contents))) (literal (string value: (string_contents))))) (function_call function: (prefix_exp (identifier)) arguments: (parenthesized_expression))) (end_statement (end_function))) (comment) (function_statement (function_start) name: (identifier) parameters: (parameter_list) return_type: (return_type type: (type_specifier)) body: (block (function_call function: (prefix_exp (identifier)) arguments: (parenthesized_expression)) (function_call function: (prefix_exp (identifier)) arguments: (parenthesized_expression (prefix_exp (prefix_exp (prefix_exp (identifier)) (identifier)) (identifier))))) (end_statement (end_function))) (comment) (function_statement (function_start) name: (identifier) parameters: (parameter_list) return_type: (return_type type: (type_specifier)) body: (block (function_call function: (prefix_exp (identifier)) arguments: (parenthesized_expression (prefix_exp (prefix_exp (prefix_exp (identifier)) (identifier)) (identifier))))) (end_statement (end_function))) (comment) (function_statement (function_start) name: (identifier) parameters: (parameter_list (parameter name: (identifier) (literal (boolean)))) return_type: (return_type type: (type_specifier)) body: (block (if_statement (multi_line_if (if_start) (prefix_exp (left_paren) (binary_expression (comparison_expression left: (prefix_exp (identifier)) right: (literal (boolean)))) (right_paren)) (if_block (assignment_statement left: (variable_declarator (prefix_exp (prefix_exp (identifier)) (identifier)) (identifier)) right: (literal (string value: (string_contents)))) (else_clause consequence: (assignment_statement left: (variable_declarator (prefix_exp (prefix_exp (identifier)) (identifier)) (identifier)) right: (literal (string value: (string_contents))))) (end_statement (end_if))))) (return_statement value: (prefix_exp (identifier)))) (end_statement (end_function))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), brightscript.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
