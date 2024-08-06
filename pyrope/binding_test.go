//go:build !plugin

package pyrope_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/pyrope"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `let f1 = fun(xx:A) -> (yy:Foo) {}
let f2 = proc(xx:A) -> (yy) {}

var x1:fun(x:A) -> (y:[3]B) = _  // y is array type of 3 elements of B

let accumulate = fun (...a, acc:fun(a,b)->(_:bool)) -> total {
  total = a[0]
  for i in a[1..] {
    total = acc(total,i)
  }
  ret total
}

let add  = fun (a:string,b:string) { ret a ++ b }
   add ++= fun (a:int   ,b:int   ) { ret a +  b }

cassert accumulate(1,2,3, acc=add) == 6
cassert accumulate("a","b","c", acc=add).total == "abc"

let x= accumulate(true,false,true, acc=add) // compile error, 'add' does not have a valid function
`
	expected = "(description (statement (assignment_or_declaration_statement decl: (var_or_let_or_reg) lvalue: (complex_identifier (identifier)) operator: (assignment_operator) rvalue: (lambda func_type: (fun_tok) (function_definition input: (arg_list (arg_item_list (arg_item (typed_identifier identifier: (identifier) type: (type_cast type: (expression_type (identifier))))))) output: (arg_list (arg_item_list (arg_item (typed_identifier identifier: (identifier) type: (type_cast type: (expression_type (identifier))))))) code: (scope_statement))))) (statement (assignment_or_declaration_statement decl: (var_or_let_or_reg) lvalue: (complex_identifier (identifier)) operator: (assignment_operator) rvalue: (lambda func_type: (proc_tok) (function_definition input: (arg_list (arg_item_list (arg_item (typed_identifier identifier: (identifier) type: (type_cast type: (expression_type (identifier))))))) output: (arg_list (arg_item_list (arg_item (typed_identifier identifier: (identifier))))) code: (scope_statement))))) (statement (assignment_or_declaration_statement decl: (var_or_let_or_reg) lvalue: (complex_identifier (identifier)) type: (type_cast type: (function_type func_type: (fun_tok) input: (arg_list (arg_item_list (arg_item (typed_identifier identifier: (identifier) type: (type_cast type: (expression_type (identifier))))))) output: (arg_list (arg_item_list (arg_item (typed_identifier identifier: (identifier) type: (type_cast type: (array_type length: (tuple_sq (tuple_list item: (constant))) base: (expression_type (identifier)))))))))) operator: (assignment_operator) rvalue: (complex_identifier (identifier)) (comment))) (statement (assignment_or_declaration_statement decl: (var_or_let_or_reg) lvalue: (complex_identifier (identifier)) operator: (assignment_operator) rvalue: (lambda func_type: (fun_tok) (function_definition input: (arg_list (arg_item_list (arg_item (typed_identifier identifier: (identifier))) (arg_item (typed_identifier identifier: (identifier) type: (type_cast type: (function_type func_type: (fun_tok) input: (arg_list (arg_item_list (arg_item (typed_identifier identifier: (identifier))) (arg_item (typed_identifier identifier: (identifier))))) output: (arg_list (arg_item_list (arg_item (typed_identifier identifier: (identifier) type: (type_cast type: (expression_type (identifier))))))))))))) output: (type_or_identifier (typed_identifier identifier: (identifier))) code: (scope_statement (statement (assignment_or_declaration_statement lvalue: (complex_identifier (identifier)) operator: (assignment_operator) rvalue: (complex_identifier (selection (member_selection argument: (complex_identifier (identifier)) select: (member_select (select (select_options list: (expression_list item: (constant)))))))))) (statement (for_statement (typed_identifier identifier: (identifier)) data: (expression_list item: (complex_identifier (selection (member_selection argument: (complex_identifier (identifier)) select: (member_select (select (select_options open_range: (constant)))))))) code: (scope_statement (statement (assignment_or_declaration_statement lvalue: (complex_identifier (identifier)) operator: (assignment_operator) rvalue: (function_call function: (complex_identifier (identifier)) argument: (tuple (tuple_list item: (complex_identifier (identifier)) item: (complex_identifier (identifier)))))))))) (statement (function_call_statement (simple_function_call function: (complex_identifier (identifier)) argument: (expression_list item: (complex_identifier (identifier))))))))))) (statement (assignment_or_declaration_statement decl: (var_or_let_or_reg) lvalue: (complex_identifier (identifier)) operator: (assignment_operator) rvalue: (lambda func_type: (fun_tok) (function_definition input: (arg_list (arg_item_list (arg_item (typed_identifier identifier: (identifier) type: (type_cast type: (primitive_type (string_type))))) (arg_item (typed_identifier identifier: (identifier) type: (type_cast type: (primitive_type (string_type))))))) code: (scope_statement (statement (function_call_statement (simple_function_call function: (complex_identifier (identifier)) argument: (expression_list item: (binary_expression left: (complex_identifier (identifier)) right: (complex_identifier (identifier)))))))))))) (statement (assignment_or_declaration_statement lvalue: (complex_identifier (identifier)) operator: (assignment_operator) rvalue: (lambda func_type: (fun_tok) (function_definition input: (arg_list (arg_item_list (arg_item (typed_identifier identifier: (identifier) type: (type_cast type: (primitive_type (unsized_integer_type))))) (arg_item (typed_identifier identifier: (identifier) type: (type_cast type: (primitive_type (unsized_integer_type))))))) code: (scope_statement (statement (function_call_statement (simple_function_call function: (complex_identifier (identifier)) argument: (expression_list item: (binary_expression left: (complex_identifier (identifier)) right: (complex_identifier (identifier)))))))))))) (statement (function_call_statement (simple_function_call function: (complex_identifier (identifier)) argument: (expression_list item: (binary_expression left: (function_call function: (complex_identifier (identifier)) argument: (tuple (tuple_list item: (constant) item: (constant) item: (constant) item: (simple_assignment lvalue: (identifier) operator: (assignment_operator) rvalue: (complex_identifier (identifier)))))) right: (constant)))))) (statement (function_call_statement (simple_function_call function: (complex_identifier (identifier)) argument: (expression_list item: (binary_expression left: (complex_identifier (dot_expression item: (function_call function: (complex_identifier (identifier)) argument: (tuple (tuple_list item: (constant (complex_string_literal)) item: (constant (complex_string_literal)) item: (constant (complex_string_literal)) item: (simple_assignment lvalue: (identifier) operator: (assignment_operator) rvalue: (complex_identifier (identifier)))))) (identifier))) right: (constant (complex_string_literal))))))) (statement (assignment_or_declaration_statement decl: (var_or_let_or_reg) lvalue: (complex_identifier (identifier)) operator: (assignment_operator) rvalue: (function_call function: (complex_identifier (identifier)) argument: (tuple (tuple_list item: (complex_identifier (identifier)) item: (complex_identifier (identifier)) item: (complex_identifier (identifier)) item: (simple_assignment lvalue: (identifier) operator: (assignment_operator) rvalue: (complex_identifier (identifier)))))) (comment))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), pyrope.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
