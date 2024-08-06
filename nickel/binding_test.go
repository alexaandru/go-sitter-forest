//go:build !plugin

package nickel_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/nickel"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
# test = 'pass'
let users =
  ["jane", "pete", "richie"]
  |> std.array.map
    (
      fun name =>
        {
          username = name,
          email = "%{name}@nickel-lang.org"
        }
    )
in

{
  usernames = users
}
`
	expected = "(term (comment) (uni_term (let_expr binding: (let_in_block pat: (pattern pat: (ident)) t1: (term (uni_term (infix_expr t1: (infix_expr (applicative (record_operand (atom terms: (term (uni_term (infix_expr (applicative (record_operand (atom (str_chunks (str_chunks_single chunks: (chunk_literal_single (str_literal)))))))))) terms: (term (uni_term (infix_expr (applicative (record_operand (atom (str_chunks (str_chunks_single chunks: (chunk_literal_single (str_literal)))))))))) terms: (term (uni_term (infix_expr (applicative (record_operand (atom (str_chunks (str_chunks_single chunks: (chunk_literal_single (str_literal)))))))))))))) op: (infix_b_op_6) t2: (infix_expr (applicative t1: (applicative (record_operand (record_operation_chain t: (record_operand (record_operation_chain t: (record_operand (atom (ident))) id: (ident))) id: (ident)))) t2: (record_operand (atom (uni_term (fun_expr pats: (pattern_fun pat: (ident)) t: (term (uni_term (infix_expr (applicative (record_operand (atom (uni_record fields: (record_field path: (field_path (field_path_elem (ident))) t: (term (uni_term (infix_expr (applicative (record_operand (atom (ident)))))))) last: (record_last_field (record_field path: (field_path (field_path_elem (ident))) t: (term (uni_term (infix_expr (applicative (record_operand (atom (str_chunks (str_chunks_single chunks: (chunk_expr start: (interpolation_start) t: (term (uni_term (infix_expr (applicative (record_operand (atom (ident))))))) end: (interpolation_end)) chunks: (chunk_literal_single (str_literal))))))))))))))))))))))))))))) t2: (term (uni_term (infix_expr (applicative (record_operand (atom (uni_record last: (record_last_field (record_field path: (field_path (field_path_elem (ident))) t: (term (uni_term (infix_expr (applicative (record_operand (atom (ident)))))))))))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), nickel.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
