package nqc_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/nqc"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
task main()
{
 OnFwd(OUT_A);
 OnFwd(OUT_C);
 Wait(400);
 OnRev(OUT_A+OUT_C);
 Wait(400);
 Off(OUT_A+OUT_C);
}
`
	expected = "(translation_unit (task_definition (identifier) parameters: (parameter_list) body: (compound_statement (expression_statement (call_expression function: (identifier) arguments: (argument_list (identifier)))) (expression_statement (call_expression function: (identifier) arguments: (argument_list (identifier)))) (expression_statement (call_expression function: (identifier) arguments: (argument_list (number_literal)))) (expression_statement (call_expression function: (identifier) arguments: (argument_list (binary_expression left: (identifier) right: (identifier))))) (expression_statement (call_expression function: (identifier) arguments: (argument_list (number_literal)))) (expression_statement (call_expression function: (identifier) arguments: (argument_list (binary_expression left: (identifier) right: (identifier))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), nqc.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
