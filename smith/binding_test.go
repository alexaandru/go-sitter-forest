//go:build !plugin

package smith_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/smith"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
Slice = fn(T: type) -> type {
    struct {
        data: ptr(T),
        len: usize,
    }
}

main = fn() -> i32 {
    42
}

id = fn(x: i32) -> i32 {
    x
}

add = fn(x: i32, y: i32) -> i32 {
    x + y
}

id = fn(T: type, x: T) -> T {
    x
}

sum_of_squares = fn(x: i32, y: i32) -> i32 {
    x2 = x * x
    y2 = y * y
    x2 + y2
}

main()
`
	expected = "(source_file (expr (def name: (symbol) value: (expr (fn params: (params (param name: (symbol) type: (expr (symbol)))) return_type: (expr (unary_op (ERROR) (expr (symbol)))) body: (block (expr (struct (fields (field name: (symbol) type: (expr (call fn: (expr (symbol)) args: (args (expr (symbol)))))) (field name: (symbol) type: (expr (symbol))))))))))) (expr (def name: (symbol) value: (expr (fn return_type: (expr (unary_op (ERROR) (expr (symbol)))) body: (block (expr (int))))))) (expr (def name: (symbol) value: (expr (fn params: (params (param name: (symbol) type: (expr (symbol)))) return_type: (expr (unary_op (ERROR) (expr (symbol)))) body: (block (expr (symbol))))))) (expr (def name: (symbol) value: (expr (fn params: (params (param name: (symbol) type: (expr (symbol))) (param name: (symbol) type: (expr (symbol)))) return_type: (expr (unary_op (ERROR) (expr (symbol)))) body: (block (expr (binary_op left: (expr (symbol)) right: (expr (symbol))))))))) (expr (def name: (symbol) value: (expr (fn params: (params (param name: (symbol) type: (expr (symbol))) (param name: (symbol) type: (expr (symbol)))) return_type: (expr (unary_op (ERROR) (expr (symbol)))) body: (block (expr (symbol))))))) (expr (def name: (symbol) value: (expr (fn params: (params (param name: (symbol) type: (expr (symbol))) (param name: (symbol) type: (expr (symbol)))) return_type: (expr (unary_op (ERROR) (expr (symbol)))) body: (block (expr (def name: (symbol) value: (expr (binary_op left: (expr (symbol)) right: (expr (symbol)))))) (expr (def name: (symbol) value: (expr (binary_op left: (expr (symbol)) right: (expr (symbol)))))) (expr (binary_op left: (expr (symbol)) right: (expr (symbol))))))))) (expr (call fn: (expr (symbol)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), smith.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
