//go:build !plugin

package hylo_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/hylo"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `fun do_greet() -> Int {
  print("Hello, concurrent world!")
  return 17
}

fun prime_number() -> Int {
  13
}

fun concurrent_greeting() -> Int {
  var future = spawn_(fun() { do_greet() })
  let x = prime_number()
  print("Main threads says: hello!")
  print("# before await")
  let y = future.await() // switching threads
  print("# after await")
  return x + y
}

public fun main() {
  print("Starting...")
  print(concurrent_greeting())
  print("Finishing...")
}

// Compile this with:
// > hc concurrent_greeting.hylo -l concore2full -l context_core_api -l boost_context -l c++ -L <path-to-concore2full> -L <path-to-boost>
`
	expected = "(source_file (function_decl head: (function_head (function_name name: (identifier))) signature: (function_signature returns: (name_type_expr qualifier: (selector identifier: (identifier_expr entity: (identifier))))) body: (brace_stmt (stmt (function_call_expr head: (selector_expr (selector identifier: (identifier_expr entity: (identifier)))) arguments: (call_argument (string_literal (simple_string))))) (stmt (jump_stmt return: (integer_literal (decimal_literal)))))) (function_decl head: (function_head (function_name name: (identifier))) signature: (function_signature returns: (name_type_expr qualifier: (selector identifier: (identifier_expr entity: (identifier))))) body: (brace_stmt (stmt (integer_literal (decimal_literal))))) (function_decl head: (function_head (function_name name: (identifier))) signature: (function_signature returns: (name_type_expr qualifier: (selector identifier: (identifier_expr entity: (identifier))))) body: (brace_stmt (stmt (binding_decl pattern: (binding_pattern introducer: (binding_introducer) pattern: (identifier)) initializer: (function_call_expr head: (selector_expr (selector identifier: (identifier_expr entity: (identifier)))) arguments: (call_argument (lambda_expr signature: (function_signature) body: (brace_stmt (stmt (function_call_expr head: (selector_expr (selector identifier: (identifier_expr entity: (identifier)))))))))))) (stmt (binding_decl pattern: (binding_pattern introducer: (binding_introducer) pattern: (identifier)) initializer: (function_call_expr head: (selector_expr (selector identifier: (identifier_expr entity: (identifier))))))) (stmt (function_call_expr head: (selector_expr (selector identifier: (identifier_expr entity: (identifier)))) arguments: (call_argument (string_literal (simple_string))))) (stmt (function_call_expr head: (selector_expr (selector identifier: (identifier_expr entity: (identifier)))) arguments: (call_argument (string_literal (simple_string))))) (stmt (binding_decl pattern: (binding_pattern introducer: (binding_introducer) pattern: (identifier)) initializer: (function_call_expr head: (value_member_expr qualifier: (selector_expr (selector identifier: (identifier_expr entity: (identifier)))) selector: (selector identifier: (identifier_expr entity: (identifier))))))) (single_line_comment) (stmt (function_call_expr head: (selector_expr (selector identifier: (identifier_expr entity: (identifier)))) arguments: (call_argument (string_literal (simple_string))))) (stmt (jump_stmt return: (infix_expr lhs: (selector_expr (selector identifier: (identifier_expr entity: (identifier)))) tail: (infix_operator_tail operator: (infix_operator) rhs: (selector_expr (selector identifier: (identifier_expr entity: (identifier)))))))))) (function_decl head: (function_head (access_modifier) (function_name name: (identifier))) signature: (function_signature) body: (brace_stmt (stmt (function_call_expr head: (selector_expr (selector identifier: (identifier_expr entity: (identifier)))) arguments: (call_argument (string_literal (simple_string))))) (stmt (function_call_expr head: (selector_expr (selector identifier: (identifier_expr entity: (identifier)))) arguments: (call_argument (function_call_expr head: (selector_expr (selector identifier: (identifier_expr entity: (identifier)))))))) (stmt (function_call_expr head: (selector_expr (selector identifier: (identifier_expr entity: (identifier)))) arguments: (call_argument (string_literal (simple_string))))))) (single_line_comment) (single_line_comment))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), hylo.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
