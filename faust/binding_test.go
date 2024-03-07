package faust_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/faust"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
declare name "Noise";
declare copyright "(c)GRAME 2018";

import("stdfaust.lib");

// noise level controlled by a slider
process = no.noise * hslider("gain",0,0,1,0.1);
`
	expected = "(program (global_metadata key: (identifier) value: (string)) (global_metadata key: (identifier) value: (string)) (file_import filename: (string)) (comment) (definition variable: (identifier) value: (infix left: (access environment: (identifier) definition: (identifier)) operator: (mult) right: (numeric_widget type: (hslider_type) label: (string) init: (int) min: (int) max: (int) step: (real)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), faust.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
