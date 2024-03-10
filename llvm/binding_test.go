//go:build !plugin

package llvm_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/llvm"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
; Declare the string constant as a global constant.
@.str = private unnamed_addr constant [13 x i8] c"hello world\0A\00"

; External declaration of the puts function
declare i32 @puts(i8* nocapture) nounwind

; Definition of main function
define i32 @main() {   ; i32()*
  ; Convert [13 x i8]* to i8*...
  %cast210 = getelementptr [13 x i8], [13 x i8]* @.str, i64 0, i64 0

  ; Call puts function to write out the string to stdout.
  call i32 @puts(i8* %cast210)
  ret i32 0
}
`
	expected = "(module (comment) (global_global (global_var) (linkage (linkage_aux)) (unnamed_addr) (type_and_value (type (array_type (array_vector_body (number) (type (type_keyword))))) (value (cstring)))) (comment) (declare (function_header (type (type_keyword)) name: (global_var) arguments: (argument_list (argument (type (type_keyword)) (param_or_return_attrs (attribute_name)))) (attribute (attribute_name)))) (comment) (define (function_header (type (type_keyword)) name: (global_var) arguments: (argument_list)) body: (function_body (comment) (comment) (instruction (local_var) (instruction_getelementptr (type_and_value (type (array_type (array_vector_body (number) (type (type_keyword)))))) (type_and_value (type (array_type (array_vector_body (number) (type (type_keyword))))) (value (var (global_var)))) (type_and_value (type (type_keyword)) (value (number))) (type_and_value (type (type_keyword)) (value (number))))) (comment) (instruction (instruction_call (type (type_keyword)) callee: (value (var (global_var))) arguments: (argument_list (argument (type (type_keyword)) (value (var (local_var))))))) (instruction (instruction_ret (type_and_value (type (type_keyword)) (value (number))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), llvm.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
