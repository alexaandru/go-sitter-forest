//go:build !plugin

package idl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/idl"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `module M {
	typedef long ArgType;
	const long I = 10;
	interface A {
		struct S {
			struct T {
				ArgType x[I]; // ArgType and I introduced
			} m;
		};

		struct U {
			long I; // OK, I is not a type name
		};

		enum II { I1, I2 };
	};
}`
	expected = "(specification (module_dcl (identifier) (typedef_dcl (type_declarator (simple_type_spec (base_type_spec (integer_type (signed_int (signed_long_int))))) (any_declarators (any_declarator (simple_declarator (identifier)))))) (const_dcl (const_type (integer_type (signed_int (signed_long_int)))) (identifier) (const_expr (or_expr (xor_expr (and_expr (shift_expr (add_expr (mult_expr (unary_expr (literal (number_literal))))))))))) (interface_dcl (interface_def (interface_header (identifier)) (interface_body (export (struct_def (identifier) (member type: (type_spec (simple_type_spec (scoped_name (identifier)))) identifier: (declarators (declarator (array_declarator (identifier) (ERROR) (fixed_array_size (positive_int_const (const_expr (or_expr (xor_expr (and_expr (shift_expr (add_expr (mult_expr (unary_expr (scoped_name (identifier)))))))))))))))) (comment)) (ERROR (identifier)))))) (struct_def (identifier) (member type: (type_spec (simple_type_spec (base_type_spec (integer_type (signed_int (signed_long_int)))))) identifier: (declarators (declarator (simple_declarator (identifier))))) (comment)) (enum_dcl (identifier) (enumerator (identifier)) (enumerator (identifier)))) (ERROR))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), idl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}