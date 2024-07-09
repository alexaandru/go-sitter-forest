//go:build !plugin

package circom_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/circom"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `pragma circom 2.0.0;

template A(){
   signal input in;
   signal output outA; 
   outA <== in;
}

template B(){
   //Declaration of signals
   signal output out;
   out <== 0;
   component comp = A();
   comp.in <== 0;
   out <== comp.outA;
}

component main = B();
`
	expected = "(source_file (pragma_directive (circom_pragma_token (circom_version))) (template_definition name: (identifier) (parameter_list) (template_body (variable_declaration_statement (signal (signal_visability)) (identifier)) (variable_declaration_statement (signal (signal_visability)) (identifier)) (expression_statement (assignment_expression (identifier) (identifier))))) (template_definition name: (identifier) (parameter_list) (template_body (comment) (variable_declaration_statement (signal (signal_visability)) (identifier)) (expression_statement (assignment_expression (identifier) (int))) (variable_declaration_statement (component) (identifier) value: (call_expression (identifier))) (expression_statement (assignment_expression (member_expression object: (identifier) property: (property_identifier)) (int))) (expression_statement (member_expression object: (assignment_expression (identifier) (identifier)) property: (property_identifier))))) (main_component_definition (call_expression (identifier))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), circom.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
