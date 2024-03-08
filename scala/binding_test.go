package scala_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/scala"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = `package com.foo.bar`
	expected = `(compilation_unit (package_clause name: (package_identifier (identifier) (identifier) (identifier))))`
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), scala.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
