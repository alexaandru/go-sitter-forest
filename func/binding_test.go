package FunC_test

import (
	"context"
	"testing"

	FunC "github.com/alexaandru/go-sitter-forest/func"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
;; Standard library for funC
;;

forall X -> tuple cons(X head, tuple tail) asm "CONS";
forall X -> (X, tuple) uncons(tuple list) asm "UNCONS";
forall X -> (tuple, X) list_next(tuple list) asm( -> 1 0) "UNCONS";
forall X -> X car(tuple list) asm "CAR";
tuple cdr(tuple list) asm "CDR";
tuple empty_tuple() asm "NIL";
`
	expected = "(translation_unit (comment) (comment) (function_definition type_variables: (type_variables_list (type_identifier (type_identifier))) return_type: (primitive_type) name: (function_name) arguments: (parameter_list (parameter_declaration type: (type_identifier (type_identifier)) name: (parameter)) (parameter_declaration type: (primitive_type) name: (parameter))) asm_body: (asm_function_body (asm_specifier) (asm_instruction (asm_instruction)))) (function_definition type_variables: (type_variables_list (type_identifier (type_identifier))) return_type: (tensor_type (type_identifier (type_identifier)) (primitive_type)) name: (function_name) arguments: (parameter_list (parameter_declaration type: (primitive_type) name: (parameter))) asm_body: (asm_function_body (asm_specifier) (asm_instruction (asm_instruction)))) (function_definition type_variables: (type_variables_list (type_identifier (type_identifier))) return_type: (tensor_type (primitive_type) (type_identifier (type_identifier))) name: (function_name) arguments: (parameter_list (parameter_declaration type: (primitive_type) name: (parameter))) asm_body: (asm_function_body (asm_specifier (number) (number)) (asm_instruction (asm_instruction)))) (function_definition type_variables: (type_variables_list (type_identifier (type_identifier))) return_type: (type_identifier (type_identifier)) name: (function_name) arguments: (parameter_list (parameter_declaration type: (primitive_type) name: (parameter))) asm_body: (asm_function_body (asm_specifier) (asm_instruction (asm_instruction)))) (function_definition return_type: (primitive_type) name: (function_name) arguments: (parameter_list (parameter_declaration type: (primitive_type) name: (parameter))) asm_body: (asm_function_body (asm_specifier) (asm_instruction (asm_instruction)))) (function_definition return_type: (primitive_type) name: (function_name) arguments: (parameter_list) asm_body: (asm_function_body (asm_specifier) (asm_instruction (asm_instruction)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), FunC.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
