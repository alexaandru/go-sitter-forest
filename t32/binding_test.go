package t32_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/t32"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
PRIVATE &password
ENTRY &password

ENTRY %LINE &salt

IF "&password"==""
(
    ECHO "Failed to provide password."
    ENDDO
)
ELSE
(
    PRIVATE &pass

    &pass=FALSE()
    WHILE !&pass
    (
        GOSUB verify_password "&password"
        RETURNVALUES &pass
        WAIT 10.ms
    )

    IF !&pass
        GOTO fail
    ELSE
    (
        GOSUB start_debug
    )
)

LOCAL &num

&num = 2.

RePeaT &num PRINT "Password: &password"
`
	expected = "(script (macro_definition command: (identifier) macro: (macro)) (parameter_declaration command: (identifier) macro: (macro)) (parameter_declaration command: (identifier) (identifier) macro: (macro)) (if_block command: (identifier) condition: (binary_expression left: (string (macro)) right: (string)) (block (command_expression command: (identifier) arguments: (argument_list (string))) (command_expression command: (identifier))) (else_block command: (identifier) (block (macro_definition command: (identifier) macro: (macro)) (assignment_expression left: (macro) right: (call_expression function: (identifier) arguments: (argument_list))) (while_block command: (identifier) condition: (unary_expression argument: (macro)) (block (subroutine_call_expression command: (identifier) subroutine: (identifier) arguments: (argument_list (string (macro)))) (parameter_declaration command: (identifier) macro: (macro)) (command_expression command: (identifier) arguments: (argument_list (time))))) (if_block command: (identifier) condition: (unary_expression argument: (macro)) (command_expression command: (identifier) arguments: (argument_list (identifier))) (else_block command: (identifier) (block (subroutine_call_expression command: (identifier) subroutine: (identifier)))))))) (macro_definition command: (identifier) macro: (macro)) (assignment_expression left: (macro) right: (integer)) (repeat_block command: (identifier) condition: (macro) (command_expression command: (identifier) arguments: (argument_list (string (macro))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), t32.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
