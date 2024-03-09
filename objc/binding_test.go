//go:build !plugin

package objc_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/objc"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
    }
    return 0;
}
`
	expected = "(translation_unit (preproc_include path: (system_lib_string)) (function_definition type: (primitive_type) declarator: (function_declarator declarator: (identifier) parameters: (parameter_list (parameter_declaration type: (primitive_type) declarator: (identifier)) (parameter_declaration (type_qualifier) type: (primitive_type) declarator: (pointer_declarator declarator: (array_declarator declarator: (identifier)))))) body: (compound_statement (compound_statement (comment) (expression_statement (call_expression function: (identifier) arguments: (argument_list (string_literal (string_content)))))) (return_statement (number_literal)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), objc.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
