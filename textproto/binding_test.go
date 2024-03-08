package textproto_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/textproto"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
convolution_benchmark {
  label: "NHWC_128x20x20x56x160"
  input {
    dimension: [128, 56, 20, 20]
    data_type: DATA_HALF
    format: TENSOR_NHWC
  }
}
`
	expected = "(message (field (message_field (field_name (identifier)) (message_value (open_squiggly) (message (field (scalar_field (field_name (identifier)) (scalar_value (string (double_string (double_string_contents)))))) (field (message_field (field_name (identifier)) (message_value (open_squiggly) (message (field (scalar_field (field_name (identifier)) (scalar_list (open_square) (scalar_value (number (dec_int))) (scalar_value (number (dec_int))) (scalar_value (number (dec_int))) (scalar_value (number (dec_int))) (close_square)))) (field (scalar_field (field_name (identifier)) (scalar_value (identifier)))) (field (scalar_field (field_name (identifier)) (scalar_value (identifier))))) (close_squiggly))))) (close_squiggly)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), textproto.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
