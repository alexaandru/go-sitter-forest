//go:build !plugin

package virgil_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/virgil"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `class Example6 {
    var a: int = 3;
    def m(x: int) -> int {
        return x + a;
    }
}

def main() {
    var obj = Example6.new();
    var y = obj.a;     // field read
    obj.a = 4;         // field write
    var z = obj.m(10); // method call
    System.puti(z);
    System.puts("\n");
}
`
	expected = "(source_file (top_level_decl (class_decl name: (ident_param name: (identifier)) members: (member (var_member decls: (var_decls (var_decl name: (identifier) rest: (type_ref member: (ident_param name: (identifier))) rest: (expr (sub_expr (in_expr (term (literal (const (integer))))))))))) members: (member (def_member (method name: (ident_param name: (identifier)) parameters: (var_param_decls (var_param_decl name: (identifier) type: (type_ref member: (ident_param name: (identifier))))) returnType: (type_ref member: (ident_param name: (identifier))) body: (method_body (block_stmt (stmt (return_stmt (expr (sub_expr (sub_expr (in_expr (term (literal (ident_param name: (identifier)))))) (sub_expr (in_expr (term (literal (ident_param name: (identifier))))))))))))))))) (top_level_decl (def_member (method name: (ident_param name: (identifier)) body: (method_body (block_stmt (stmt (var_stmt (var_decls (var_decl name: (identifier) rest: (expr (sub_expr (in_expr (apply_expr callee: (in_expr (member_expr (in_expr (term (literal (ident_param name: (identifier))))) field: (ident_param name: (identifier)))))))))))) (stmt (var_stmt (var_decls (var_decl name: (identifier) rest: (expr (sub_expr (in_expr (member_expr (in_expr (term (literal (ident_param name: (identifier))))) field: (ident_param name: (identifier)))))))))) (comment) (stmt (expr_stmt (expr (sub_expr (in_expr (member_expr (in_expr (term (literal (ident_param name: (identifier))))) field: (ident_param name: (identifier))))) (assign) (expr (sub_expr (in_expr (term (literal (const (integer)))))))))) (comment) (stmt (var_stmt (var_decls (var_decl name: (identifier) rest: (expr (sub_expr (in_expr (apply_expr callee: (in_expr (member_expr (in_expr (term (literal (ident_param name: (identifier))))) field: (ident_param name: (identifier)))) (exprs (expr (sub_expr (in_expr (term (literal (const (integer)))))))))))))))) (comment) (stmt (expr_stmt (expr (sub_expr (in_expr (apply_expr callee: (in_expr (member_expr (in_expr (term (literal (ident_param name: (identifier))))) field: (ident_param name: (identifier)))) (exprs (expr (sub_expr (in_expr (term (literal (ident_param name: (identifier)))))))))))))) (stmt (expr_stmt (expr (sub_expr (in_expr (apply_expr callee: (in_expr (member_expr (in_expr (term (literal (ident_param name: (identifier))))) field: (ident_param name: (identifier)))) (exprs (expr (sub_expr (in_expr (term (literal (const (string (escape)))))))))))))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), virgil.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
