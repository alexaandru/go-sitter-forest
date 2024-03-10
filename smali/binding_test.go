//go:build !plugin

package smali_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/smali"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
.class public interface abstract LA/BC;
.super Ljava/lang/Object;
.source ""

---

(class_definition
  (class_directive
    (access_modifiers
      (access_modifier)
      (access_modifier)
      (access_modifier))
    (class_identifier
      (identifier)
      (identifier)))
  (super_directive
    (class_identifier
      (identifier)
      (identifier)
      (identifier)))
  (source_directive
    (string)))
`
	expected = "(class_definition (class_directive (access_modifiers (access_modifier) (access_modifier) (access_modifier)) (class_identifier (identifier) (identifier))) (super_directive (class_identifier (identifier) (identifier) (identifier))) (source_directive (string)) (ERROR (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), smali.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
