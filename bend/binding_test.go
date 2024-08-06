//go:build !plugin

package bend_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/bend"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `# Sorts a list
def sort(xs):
  match xs:
    case List/Nil: 
      return List/Nil
    case List/Cons: 
      return insert(xs.head, sort(xs.tail))

# Insert : U60 -> List -> List
def insert(v, xs):
  match xs:
    case List/Nil:
      return List/Cons(v, List/Nil)
    case List/Cons:
      return swap_gt(v, xs.head, xs.tail)

# SwapGT : U60 -> U60 -> U60 -> List -> List
def swap_gt(v, x, xs):
  if x > v:
    return List/Cons(v, List/Cons(x, xs))
  else:
    return List/Cons(x, insert(v, xs))

# Generates a list of 'n' random u24 numbers using xorshift
def rnd(n):
  bend n, state=1:
    when n != 0:
      state = state ^ (state << 13)
      state = state ^ (state >> 17)
      state = state ^ (state << 5)
      return List/Cons(state % 100, fork(n - 1, state))
    else:
      return List/Nil

# Sums a list of u24 numbers
def sum(xs):
  fold xs:
    case List/Nil:
      return 0
    case List/Cons:
      return xs.head + xs.tail

def main:
  n = 100
  return sum(sort(rnd(n)))
`
	expected = "(source_file (comment) (imp_function_definition name: (identifier) parameters: (parameters (identifier)) (body (match_statement (arg (identifier)) (body (match_case (match_pattern (identifier (path) name: (identifier))) (body (return_statement (identifier (path) name: (identifier))))) (match_case (match_pattern (identifier (path) name: (identifier))) (body (return_statement (call_expression (identifier) (arguments (identifier) (call_expression (identifier) (arguments (identifier)))))))))))) (comment) (imp_function_definition name: (identifier) parameters: (parameters (identifier) (identifier)) (body (match_statement (arg (identifier)) (body (match_case (match_pattern (identifier (path) name: (identifier))) (body (return_statement (call_expression (identifier (path) name: (identifier)) (arguments (identifier) (identifier (path) name: (identifier))))))) (match_case (match_pattern (identifier (path) name: (identifier))) (body (return_statement (call_expression (identifier) (arguments (identifier) (identifier) (identifier)))))))))) (comment) (imp_function_definition name: (identifier) parameters: (parameters (identifier) (identifier) (identifier)) (body (if_statement cond: (comparison_op (identifier) (identifier)) (body (return_statement (call_expression (identifier (path) name: (identifier)) (arguments (identifier) (call_expression (identifier (path) name: (identifier)) (arguments (identifier) (identifier))))))) (else_clause (body (return_statement (call_expression (identifier (path) name: (identifier)) (arguments (identifier) (call_expression (identifier) (arguments (identifier) (identifier))))))))))) (comment) (imp_function_definition name: (identifier) parameters: (parameters (identifier)) (body (bend_statement (args (identifier) (arg_bind field: (identifier) value: (integer))) (when_clause (comparison_op (identifier) (integer)) (body (assignment_statement pat: (identifier) val: (binary_op (identifier) (parenthesized_expression (comparison_op (identifier) (ERROR) (integer))))) (assignment_statement pat: (identifier) val: (binary_op (identifier) (parenthesized_expression (comparison_op (identifier) (ERROR) (integer))))) (assignment_statement pat: (identifier) val: (binary_op (identifier) (parenthesized_expression (comparison_op (identifier) (ERROR) (integer))))) (return_statement (call_expression (identifier (path) name: (identifier)) (arguments (binary_op (identifier) (integer)) (call_expression (identifier) (arguments (binary_op (identifier) (integer)) (identifier)))))))) (else_clause (body (return_statement (identifier (path) name: (identifier)))))))) (comment) (imp_function_definition name: (identifier) parameters: (parameters (identifier)) (body (fold_statement (arg (identifier)) (body (match_case (match_pattern (identifier (path) name: (identifier))) (body (return_statement (integer)))) (match_case (match_pattern (identifier (path) name: (identifier))) (body (return_statement (binary_op (identifier) (identifier))))))))) (imp_function_definition name: (identifier) (body (assignment_statement pat: (identifier) val: (integer)) (return_statement (call_expression (identifier) (arguments (call_expression (identifier) (arguments (call_expression (identifier) (arguments (identifier)))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), bend.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
