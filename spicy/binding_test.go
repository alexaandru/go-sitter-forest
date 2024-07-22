//go:build !plugin

package spicy_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/spicy"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `# http-request.spicy

module HTTP;

const Token      = /[^ \t\r\n]+/;
const WhiteSpace = /[ \t]+/;
const NewLine    = /\r?\n/;

public type RequestLine = unit {
    method:  Token;
    :        WhiteSpace;
    uri:     Token;
    :        WhiteSpace;
    version: Version;
    :        NewLine;

    on %done { print self; }
};

type Version = unit {
    :       /HTTP\//;
    number: /[0-9]+\.[0-9]+/;
};
`
	expected = "(module (comment) entities: (module_decl name: (ident (name))) entities: (var_decl (linkage) name: (ident (name)) init: (expression (regexp))) entities: (var_decl (linkage) name: (ident (name)) init: (expression (regexp))) entities: (var_decl (linkage) name: (ident (name)) init: (expression (regexp))) entities: (type_decl (visibility) name: (ident (name)) field: (field_decl name: (ident (name)) type_: (typename (ident (name)))) field: (field_decl type_: (typename (ident (name)))) field: (field_decl name: (ident (name)) type_: (typename (ident (name)))) field: (field_decl type_: (typename (ident (name)))) field: (field_decl name: (ident (name)) type_: (typename (ident (name)))) field: (field_decl type_: (typename (ident (name)))) (hook_decl name: (hook_name (ident)) (statement (block (statement (print (expression (self_id)))))))) entities: (type_decl name: (ident (name)) field: (field_decl type_: (regexp)) field: (field_decl name: (ident (name)) type_: (regexp))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), spicy.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
