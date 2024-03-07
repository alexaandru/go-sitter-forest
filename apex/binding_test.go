package apex_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/apex"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
list<Account>listOfAccounts = [select id, name from account limit 100];
for(Account acc : listOfAccounts){
	//your logic
}
`
	expected = "(parser_output (local_variable_declaration type: (generic_type (type_identifier) (type_arguments (type_identifier))) declarator: (variable_declarator name: (identifier) (assignment_operator) value: (query_expression (soql_query (soql_query_body (select_clause (field_identifier (identifier)) (field_identifier (identifier))) (from_clause (storage_identifier (identifier))) (limit_clause (int))))))) (enhanced_for_statement type: (type_identifier) name: (identifier) value: (identifier) body: (block (line_comment))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), apex.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
