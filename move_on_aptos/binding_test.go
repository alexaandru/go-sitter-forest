//go:build !plugin

package move_on_aptos_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/move_on_aptos"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `module 0x42::test {

    struct S has copy, drop { f: u64 }

    /// /*
    /// Core data structures for holding tokens
    ///
    struct Token has store {
        id: TokenId,
        /// the amount of tokens. Only property_version = 0 can have a value bigger than 1.
        amount: u64,
        /// The properties with this token.
        /// when property_version = 0, the token_properties are the same as default_properties in TokenData, we don't store it.
        /// when the property_map mutates, a new property_version is assigned to the token.
        token_properties: PropertyMap,
    }

    fun t(cond: bool, s1: S, s2: S) {
        // (if (cond) s1 else s2).f
        let _: u64 = if (cond) { s1 } else { s2 }.f;

        // (if (cond) s1).f else (s2.f)
        // so parsing error
        if (cond) s1.f else s2.f;

        while(cond) { s1 }.f
    }

    /***/
    /*****/
    /**/

    /*
    /**/
    /***/
    */

    // fun!!
    fun xx() : u64 {
        /// doc1 /*
        //// regular /*
        // regular 2 /*
        let x = b"/*" /** ??? */;
        table.target_bucket_size = max(1024 /* free_write_quota */ / estimated_entry_size, 1);
        300
        / // this is not a doc comment
        3
    }
}
`
	expected = "(source_file (module path: (numerical_addr (number)) name: (identifier) (declaration (struct_decl name: (identifier) (abilities (ability) (ability)) (body (field_annot field: (identifier) (type (primitive_type (number_type))))))) (line_comment (doc_comment)) (line_comment (doc_comment)) (line_comment (doc_comment)) (declaration (struct_decl name: (identifier) (abilities (ability)) (body (field_annot field: (identifier) (type (name_access_chain name: (identifier)))) (line_comment (doc_comment)) (field_annot field: (identifier) (type (primitive_type (number_type)))) (line_comment (doc_comment)) (line_comment (doc_comment)) (line_comment (doc_comment)) (field_annot field: (identifier) (type (name_access_chain name: (identifier))))))) (declaration (function_decl name: (identifier) parameters: (parameters (parameter variable: (identifier) (type (primitive_type))) (parameter variable: (identifier) (type (name_access_chain name: (identifier)))) (parameter variable: (identifier) (type (name_access_chain name: (identifier))))) body: (block (line_comment) (let_expr bind: (bind_list variable: (var_name (identifier))) type: (type (primitive_type (number_type))) value: (access_field object: (if_expr condition: (parenthesized_expr (var (name_access_chain name: (identifier)))) then: (block (var (name_access_chain name: (identifier)))) else: (block (var (name_access_chain name: (identifier))))) field: (identifier))) (line_comment) (line_comment) (if_expr condition: (parenthesized_expr (var (name_access_chain name: (identifier)))) then: (access_field object: (var (name_access_chain name: (identifier))) field: (identifier)) else: (access_field object: (var (name_access_chain name: (identifier))) field: (identifier))) (access_field object: (while_expr condition: (parenthesized_expr (var (name_access_chain name: (identifier)))) body: (block (var (name_access_chain name: (identifier))))) field: (identifier))))) (block_comment) (block_comment) (block_comment) (block_comment) (line_comment) (declaration (function_decl name: (identifier) parameters: (parameters) return_type: (type (primitive_type (number_type))) body: (block (line_comment (doc_comment)) (line_comment) (line_comment) (let_expr bind: (bind_list variable: (var_name (identifier))) value: (value (byte_string))) (block_comment (doc_comment)) (assignment target: (access_field object: (var (name_access_chain name: (identifier))) field: (identifier)) value: (call_expr func_name: (name_access_chain name: (identifier)) arguments: (call_args (bin_op_expr lhs: (value (number)) (block_comment) (binary_operator) rhs: (var (name_access_chain name: (identifier)))) (value (number))))) (bin_op_expr lhs: (value (number)) (binary_operator) (line_comment) rhs: (value (number))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), move_on_aptos.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
