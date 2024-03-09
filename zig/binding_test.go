//go:build !plugin

package zig_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/zig"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
const ray = @cImport({
    @cInclude("raylib.h");
});

pub fn main() void {
}
`
	expected = "(source_file (Decl (VarDecl variable_type_function: (IDENTIFIER) (ErrorUnionExpr (SuffixExpr (BUILTINIDENTIFIER) (FnCallArguments (Block (Statement (AssignExpr (ErrorUnionExpr (SuffixExpr (BUILTINIDENTIFIER) (FnCallArguments (ErrorUnionExpr (SuffixExpr (STRINGLITERALSINGLE)))))))))))))) (Decl (FnProto function: (IDENTIFIER) (ParamDeclList) (ErrorUnionExpr (SuffixExpr (BuildinTypeExpr)))) (Block)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), zig.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
