package proto_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/proto"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
syntax = "proto3";

message Thing {
  string name = 1;
  repeated uint32 scores = 2;
}
`
	expected = "(source_file (syntax) (message (message_name (identifier)) (message_body (field (type) (identifier) (field_number (int_lit (decimal_lit)))) (field (type) (identifier) (field_number (int_lit (decimal_lit)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), proto.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
