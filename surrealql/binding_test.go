//go:build !plugin

package surrealql_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/surrealql"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `-- Select all fields from a table
SELECT * FROM person;

-- Select specific fields from a table
SELECT name, address, email FROM person;

-- Select all fields from a specific record
SELECT * FROM person:tobie;

-- Select specific fields from a specific record
SELECT name, address, email FROM person:tobie;

-- Alias/rename fields
SELECT name AS user_name, address FROM person;

-- Select just a single record
-- Using the ONLY keyword, just an object for the record in question will be returned.
-- This, instead of an array with a single object.
SELECT * FROM ONLY person:john;

-- Select the values of a single field from a table
SELECT VALUE name FROM person;

-- Select the values of a single field from a specific record
SELECT VALUE name FROM person:00e1nc508h9f7v63x72O;
`
	expected = "(source_file (comment) (select_statement (select_clause (keyword_select) (fields (field (asterisk_expression)))) (from_clause (keyword_from) (target (table)))) (semi_colon) (comment) (select_statement (select_clause (keyword_select) (fields (field) (field) (field))) (from_clause (keyword_from) (target (table)))) (semi_colon) (comment) (select_statement (select_clause (keyword_select) (fields (field (asterisk_expression)))) (from_clause (keyword_from) (target (table) (record)))) (semi_colon) (comment) (select_statement (select_clause (keyword_select) (fields (field) (field) (field))) (from_clause (keyword_from) (target (table) (record)))) (semi_colon) (comment) (select_statement (select_clause (keyword_select) (fields (field (keyword_as) (alias)) (field))) (from_clause (keyword_from) (target (table)))) (semi_colon) (comment) (comment) (comment) (select_statement (select_clause (keyword_select) (fields (field (asterisk_expression)))) (from_clause (keyword_from) (keyword_only) (target (table) (record)))) (semi_colon) (comment) (select_statement (select_clause (keyword_select) (keyword_value) (fields (field))) (from_clause (keyword_from) (target (table)))) (semi_colon) (comment) (select_statement (select_clause (keyword_select) (keyword_value) (fields (field))) (from_clause (keyword_from) (target (table) (record)))) (semi_colon))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), surrealql.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
