//go:build !plugin

package sql_bigquery_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/sql_bigquery"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `CREATE SCHEMA information_schema;
CREATE SCHEMA IF NOT EXISTS information_schema;

CREATE OR REPLACE FUNCTION sample_function(x ARRAY<FLOAT64>, y ARRAY<FLOAT64>, alt STRING) AS (
(
  WITH statistics as (
    WITH summ as (
      WITH mydata as(
        SELECT  true as label,  xi as val
        FROM UNNEST( x ) as xi
        UNION ALL
        SELECT  false as label, yi as val
        FROM UNNEST( y ) as yi
      )
      SELECT label, (RANK() OVER(ORDER BY val ASC))+(COUNT(*) OVER (PARTITION BY CAST(val AS STRING)) - 1)/2.0  AS r
      FROM mydata
    )
    SELECT sum(r) - ARRAY_LENGTH(x)*(ARRAY_LENGTH(x)+ 1)/2.0  as U2,
           ARRAY_LENGTH(x)*(ARRAY_LENGTH(y) + (ARRAY_LENGTH(x)+ 1)/2.0) - sum(r) as U1, 
           ARRAY_LENGTH(x) * ARRAY_LENGTH(y) as n1n2,
           SQRT(ARRAY_LENGTH(x) * ARRAY_LENGTH(y) *(ARRAY_LENGTH(x)+ARRAY_LENGTH(y)+1)/12.0 ) as den,
    FROM summ
    WHERE label
 ),
 normal_appr as (
  SELECT 
    CASE alt
      WHEN 'less' THEN ( n1n2/2.0 +0.5 - U1)/den
      WHEN 'greater' THEN (n1n2/2.0 +0.5 - U2)/den
      ELSE    -1.0*ABS(n1n2/2.0 + 0.5 - IF(U1<U2,U2,U1))/den
    END as z, 
    U1 as U,
    IF( alt='less' OR alt='greater', 1.0, 2.0 ) as factor
  FROM statistics  
)
 SELECT struct(U, factor* ${ref("normal_cdf")}(z,0.0,1.0) as p ) 
 FROM normal_appr 
));

SELECT a, b;
SELECT foo(args)
FROM table1
LEFT JOIN table2 ON table1.a = table2.a
WHERE a = b
GROUP BY a, b
ORDER BY lower(a), b
;

SELECT (SELECT 1), a
FROM (SELECT a FROM table) AS b;
`
	expected = "(source_file (create_schema_statement schema_name: (identifier)) (create_schema_statement (keyword_if_not_exists) schema_name: (identifier)) (create_function_statement (keyword_replace) routine_name: (identifier) (create_function_parameters (create_function_parameter (identifier) (type)) (create_function_parameter (identifier) (type)) (create_function_parameter (identifier) (type))) (create_function_body (select_subexpression (query_expr (cte_clause (cte alias_name: (identifier) (query_expr (cte_clause (cte alias_name: (identifier) (query_expr (cte_clause (cte alias_name: (identifier) (query_expr (set_operation (query_expr (select (select_list (select_expression (TRUE) (as_alias alias_name: (identifier))) (select_expression (identifier) (as_alias alias_name: (identifier)))) (from_clause (from_item (unnest_clause (unnest_operator (identifier)) (as_alias alias_name: (identifier))))))) (query_expr (select (select_list (select_expression (FALSE) (as_alias alias_name: (identifier))) (select_expression (identifier) (as_alias alias_name: (identifier)))) (from_clause (from_item (unnest_clause (unnest_operator (identifier)) (as_alias alias_name: (identifier))))))))))) (select (select_list (select_expression (identifier)) (select_expression (binary_expression left: (function_call function: (identifier) (analytics_clause (over_clause (window_specification (order_by_clause (order_by_clause_body (identifier))))))) right: (binary_expression left: (binary_expression left: (function_call function: (identifier) argument: (asterisk_expression) (analytics_clause (over_clause (window_specification (window_partition_clause (partition_expression (cast_expression (identifier) (type_identifier)))))))) right: (number)) right: (number))) (as_alias alias_name: (identifier)))) (from_clause (from_item table_name: (identifier))))))) (select (select_list (select_expression (binary_expression left: (function_call function: (identifier) argument: (argument (identifier))) right: (binary_expression left: (binary_expression left: (function_call function: (identifier) argument: (argument (identifier))) right: (binary_expression left: (function_call function: (identifier) argument: (argument (identifier))) right: (number))) right: (number))) (as_alias alias_name: (identifier))) (select_expression (binary_expression left: (binary_expression left: (function_call function: (identifier) argument: (argument (identifier))) right: (binary_expression left: (function_call function: (identifier) argument: (argument (identifier))) right: (binary_expression left: (binary_expression left: (function_call function: (identifier) argument: (argument (identifier))) right: (number)) right: (number)))) right: (function_call function: (identifier) argument: (argument (identifier)))) (as_alias alias_name: (identifier))) (select_expression (binary_expression left: (function_call function: (identifier) argument: (argument (identifier))) right: (function_call function: (identifier) argument: (argument (identifier)))) (as_alias alias_name: (identifier))) (select_expression (function_call function: (identifier) argument: (argument (binary_expression left: (binary_expression left: (binary_expression left: (function_call function: (identifier) argument: (argument (identifier))) right: (function_call function: (identifier) argument: (argument (identifier)))) right: (binary_expression left: (binary_expression left: (function_call function: (identifier) argument: (argument (identifier))) right: (function_call function: (identifier) argument: (argument (identifier)))) right: (number))) right: (number)))) (as_alias alias_name: (identifier)))) (from_clause (from_item table_name: (identifier))) (where_clause (identifier))))) (cte alias_name: (identifier) (query_expr (select (select_list (select_expression (casewhen_expression expr: (identifier) (casewhen_clause match_condition: (string) match_result: (binary_expression left: (binary_expression left: (binary_expression left: (binary_expression left: (identifier) right: (number)) right: (number)) right: (identifier)) right: (identifier))) (casewhen_clause match_condition: (string) match_result: (binary_expression left: (binary_expression left: (binary_expression left: (binary_expression left: (identifier) right: (number)) right: (number)) right: (identifier)) right: (identifier))) (caseelse_clause else_result: (binary_expression left: (binary_expression left: (number) right: (function_call function: (identifier) argument: (argument (binary_expression left: (binary_expression left: (binary_expression left: (identifier) right: (number)) right: (number)) right: (function_call function: (identifier) argument: (argument (binary_expression left: (identifier) right: (identifier))) argument: (argument (identifier)) argument: (argument (identifier))))))) right: (identifier)))) (as_alias alias_name: (identifier))) (select_expression (identifier) (as_alias alias_name: (identifier))) (select_expression (function_call function: (identifier) argument: (argument (binary_expression left: (binary_expression left: (identifier) right: (string)) right: (binary_expression left: (identifier) right: (string)))) argument: (argument (number)) argument: (argument (number))) (as_alias alias_name: (identifier)))) (from_clause (from_item table_name: (identifier))))))) (select (select_list (select_expression (struct (identifier) (ERROR (binary_expression left: (identifier) (ERROR (UNEXPECTED '{')) right: (function_call function: (identifier) argument: (argument (string)))) (UNEXPECTED '}')) (struct (identifier) (number) (number)) (as_alias alias_name: (identifier))))) (from_clause (from_item table_name: (identifier)))))))) (query_statement (query_expr (select (select_list (select_expression (identifier)) (select_expression (identifier)))))) (query_statement (query_expr (select (select_list (select_expression (function_call function: (identifier) argument: (argument (identifier))))) (from_clause (from_item (join_operation (from_item table_name: (identifier)) (join_type) (from_item table_name: (identifier)) (join_condition (binary_expression left: (identifier) right: (identifier)))))) (where_clause (binary_expression left: (identifier) right: (identifier))) (group_by_clause (grouping_item (identifier)) (grouping_item (identifier)))) (order_by_clause (order_by_clause_body (function_call function: (identifier) argument: (argument (identifier))) (identifier))))) (query_statement (query_expr (select (select_list (select_expression (select_subexpression (query_expr (select (select_list (select_expression (number))))))) (select_expression (identifier))) (from_clause (from_item (select_subexpression (query_expr (select (select_list (select_expression (identifier))) (from_clause (from_item table_name: (identifier)))))) (as_alias alias_name: (identifier))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), sql_bigquery.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
