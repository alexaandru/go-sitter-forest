package main

const (
	bTpl = `package %s

//#include "parser.h"
//TSLanguage *tree_sitter_%s();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_%s())
	return sitter.NewLanguage(ptr)
}
`
	btTpl = `package %s_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/%s"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = ""
	expected = "IMPLEMENT ME"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), %s.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %%v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %%q got %%q", expected, act)
	}
}
`
)

var tplBindings = map[string]string{
	"binding.go":      bTpl,
	"binding_test.go": btTpl,
}
