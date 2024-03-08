package cuda_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/cuda"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
__global__ void cuda_hello(){
    printf("Hello World from GPU!\n");
}

int main() {
    cuda_hello<<<1,1>>>(); 
    return 0;
}`
	expected = "(translation_unit (function_definition type: (primitive_type) declarator: (function_declarator declarator: (identifier) parameters: (parameter_list)) body: (compound_statement (expression_statement (call_expression function: (identifier) arguments: (argument_list (string_literal (string_content) (escape_sequence))))))) (function_definition type: (primitive_type) declarator: (function_declarator declarator: (identifier) parameters: (parameter_list)) body: (compound_statement (expression_statement (call_expression function: (identifier) (kernel_call_syntax (number_literal) (number_literal)) arguments: (argument_list))) (return_statement (number_literal)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), cuda.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
