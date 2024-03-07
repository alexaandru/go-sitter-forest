package squirrel_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/squirrel"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
local table = {
	a = "10"
	subtable = {
		array = [1,2,3]
	},
	[10 + 123] = "expression index"
}
 
local array=[ 1, 2, 3, { a = 10, b = "string" } ];
 
foreach (i,val in array)
{
	::print("the type of val is"+typeof val);
}
`
	expected = "(script (local_declaration (identifier) (table (table_slots (table_slot (identifier) (string (string_content))) (table_slot (identifier) (table (table_slots (table_slot (identifier) (array (integer) (integer) (integer)))))) (table_slot (binary_expression left: (integer) right: (integer)) (string (string_content)))))) (local_declaration (identifier) (array (integer) (integer) (integer) (ERROR) (assignment_expression left: (identifier) right: (integer)) (assignment_expression left: (identifier) right: (string (string_content))) (ERROR))) (foreach_statement index: (identifier) value: (identifier) collection: (identifier) (block (call_expression function: (global_variable (identifier)) (call_args (binary_expression left: (string (string_content)) right: (unary_expression operand: (identifier))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), squirrel.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
