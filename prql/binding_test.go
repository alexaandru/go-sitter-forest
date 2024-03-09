//go:build !plugin

package prql_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/prql"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
from invoices
filter invoice_date >= @1970-01-16
derive {
  transaction_fees = 0.8,
  income = total - transaction_fees
}
filter income > 1
group customer_id (
  aggregate {
    average total,
    sum_income = sum income,
    ct = count total,
  }
)
sort {-sum_income}
take 10
join c=customers (==customer_id)
derive name = f"{c.last_name}, {c.first_name}"
select {
  c.customer_id, name, sum_income
}
derive db_version = s"version()"
`
	expected = "(program (pipeline (from (keyword_from) table_reference: (identifier)) (transforms (filter (keyword_filter) predicate: (binary_expression left: (field name: (identifier)) right: (date))) (derives (keyword_derive) (term value: (assignment alias: (field name: (identifier)) operation: (literal (decimal_number (integer))))) (term value: (assignment alias: (field name: (identifier)) operation: (binary_expression left: (field name: (identifier)) right: (field name: (identifier)))))) (filter (keyword_filter) predicate: (binary_expression left: (field name: (identifier)) right: (literal (integer)))) (group (keyword_group) (term value: (field name: (identifier))) (aggregate (keyword_aggregate) (aggregate_operation (keyword_average) (field name: (identifier))) (assignment alias: (field name: (identifier)) operation: (keyword_sum) operation: (field name: (identifier))) (assignment alias: (field name: (identifier)) operator: (function_call name: (identifier) (parameter value: (identifier)))))) (sorts (keyword_sort) (direction) (identifier)) (takes (keyword_take) (integer)) (joins (keyword_join) table: (term alias: (identifier) table_reference: (identifier)) (conditions (term value: (field name: (identifier))))) (derives (keyword_derive) (term value: (assignment alias: (field name: (identifier)) operation: (f_string)))) (select (keyword_select) (term value: (field table: (identifier) name: (identifier))) (term value: (field name: (identifier))) (term value: (field name: (identifier)))) (derives (keyword_derive) (term value: (assignment alias: (field name: (identifier)) operation: (s_string)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), prql.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
