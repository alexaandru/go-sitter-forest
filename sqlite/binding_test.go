//go:build !plugin

package sqlite_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/sqlite"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
PRAGMA schema.auto_vacuum;
PRAGMA schema.auto_vacuum = 0;
PRAGMA schema.auto_vacuum(NONE);

SELECT EXISTS (SELECT cname FROM tblname);
SELECT NOT EXISTS (SELECT cname FROM tblname);

SELECT ALL count(*), max(a) FROM t1 WHERE b>'one' GROUP BY b;
SELECT ALL count(*), max(a) FROM t1 WHERE a!='b' GROUP BY b HAVING count(*)=1;
SELECT ALL count(*), max(a) FROM t1 WHERE 0 GROUP BY b HAVING count(*)=2;
`
	expected = "(sql_stmt_list (sql_stmt (pragma_stmt (PRAGMA) (identifier) (identifier))) (sql_stmt (pragma_stmt (PRAGMA) (identifier) (identifier) (pragma_value (signed_number (numeric_literal))))) (sql_stmt (pragma_stmt (PRAGMA) (identifier) (identifier) (pragma_value (identifier)))) (sql_stmt (select_stmt (SELECT) (EXISTS) (select_stmt (SELECT) (identifier) (from_clause (FROM) (table_or_subquery (identifier)))))) (sql_stmt (select_stmt (SELECT) (NOT) (EXISTS) (select_stmt (SELECT) (identifier) (from_clause (FROM) (table_or_subquery (identifier)))))) (sql_stmt (select_stmt (SELECT) (ALL) (function_name (identifier)) (function_name (identifier)) (identifier) (from_clause (FROM) (table_or_subquery (identifier))) (where_clause (WHERE) (identifier) (string_literal)) (group_by_clause (GROUP) (BY) (identifier)))) (sql_stmt (select_stmt (SELECT) (ALL) (function_name (identifier)) (function_name (identifier)) (identifier) (from_clause (FROM) (table_or_subquery (identifier))) (where_clause (WHERE) (identifier) (string_literal)) (group_by_clause (GROUP) (BY) (identifier) (HAVING) (function_name (identifier)) (numeric_literal)))) (sql_stmt (select_stmt (SELECT) (ALL) (function_name (identifier)) (function_name (identifier)) (identifier) (from_clause (FROM) (table_or_subquery (identifier))) (where_clause (WHERE) (numeric_literal)) (group_by_clause (GROUP) (BY) (identifier) (HAVING) (function_name (identifier)) (numeric_literal)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), sqlite.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
