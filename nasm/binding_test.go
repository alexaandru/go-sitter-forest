package nasm_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/nasm"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
	SECTION .data		; data section
msg:	db "Hello World",10	; the string to print, 10=cr
len:	equ $-msg		; "$" means "here"
				; len is a value, not an address

	SECTION .text		; code section
        global main		; make label available to linker 
main:				; standard  gcc  entry point
	
	mov	edx,len		; arg3, length of string to print
	mov	ecx,msg		; arg2, pointer to string
	mov	ebx,1		; arg1, where to write, screen
	mov	eax,4		; write sysout command to int 80 hex
	int	0x80		; interrupt 80 hex, call kernel
	
	mov	ebx,0		; exit code, 0=normal
	mov	eax,1		; exit command to kernel
	int	0x80		; interrupt 80 hex, call kernel
`
	expected = "(source_file (assembl_directive_sections name: (word)) (comment) (source_line (label name: (word)) (instruction (pseudo_instruction_dx (string_literal) (number_literal)))) (comment) (source_line (label name: (word)) (instruction (pseudo_instruction_equ_command (binary_expression left: (line_here_token) right: (word))))) (comment) (comment) (assembl_directive_sections name: (word)) (comment) (assembl_directive_symbols name: (word)) (comment) (source_line (label name: (word))) (comment) (source_line (instruction (actual_instruction instruction: (word) operands: (operands (operand (register)) (operand (word)))))) (comment) (source_line (instruction (actual_instruction instruction: (word) operands: (operands (operand (register)) (operand (word)))))) (comment) (source_line (instruction (actual_instruction instruction: (word) operands: (operands (operand (register)) (operand (number_literal)))))) (comment) (source_line (instruction (actual_instruction instruction: (word) operands: (operands (operand (register)) (operand (number_literal)))))) (comment) (source_line (instruction (actual_instruction instruction: (word) operands: (operands (operand (number_literal)))))) (comment) (source_line (instruction (actual_instruction instruction: (word) operands: (operands (operand (register)) (operand (number_literal)))))) (comment) (source_line (instruction (actual_instruction instruction: (word) operands: (operands (operand (register)) (operand (number_literal)))))) (comment) (source_line (instruction (actual_instruction instruction: (word) operands: (operands (operand (number_literal)))))) (comment))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), nasm.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
