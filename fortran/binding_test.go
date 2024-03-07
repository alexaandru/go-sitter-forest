package fortran_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/fortran"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
MODULE BoundingBox_Method
USE GlobalData, ONLY: DFP, I4B, LGT, stdout
USE BaseType, ONLY: BoundingBox_
IMPLICIT NONE

PRIVATE

INTERFACE
  MODULE PURE SUBROUTINE initiate_1(obj, nsd, lim)
    CLASS(BoundingBox_), INTENT(INOUT) :: obj
    !! Instance of bounding box
    INTEGER(I4B), INTENT(IN) :: NSD
    !! Spatial dimension
    REAL(DFP), INTENT(IN) :: lim(6)
    !! Extent of bounding box
  END SUBROUTINE initiate_1
END INTERFACE
`
	expected = "(translation_unit (ERROR (module_statement (name)) (use_statement (module_name) (included_items (identifier) (identifier) (identifier) (identifier))) (use_statement (module_name) (included_items (identifier))) (implicit_statement (none)) (private_statement) (interface (interface_statement) (subroutine (subroutine_statement (procedure_qualifier) (procedure_qualifier) name: (name) parameters: (parameters (identifier) (identifier) (identifier))) (variable_declaration (derived_type (type_name)) (type_qualifier) (identifier)) (comment) (variable_declaration (intrinsic_type) (size (argument_list (identifier))) (type_qualifier) (identifier)) (comment) (variable_declaration (intrinsic_type) (size (argument_list (identifier))) (type_qualifier) (call_expression (identifier) (argument_list (number_literal)))) (comment) (end_subroutine_statement (name))) (end_interface_statement))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), fortran.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
