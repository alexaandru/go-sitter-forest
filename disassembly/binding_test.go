//go:build !plugin

package disassembly_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/disassembly"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
00000000  70 61 63 6b 61 67 65 20  64 69 73 61 73 73 65 6d  |package disassem|
00000010  62 6c 79 5f 74 65 73 74  0a 0a 69 6d 70 6f 72 74  |bly_test..import|
`
	expected = "(source (source_location (address) (machine_code_bytes (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte)) (instruction)) (source_location (address) (machine_code_bytes (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte) (byte)) (instruction)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), disassembly.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
