//go:build !plugin

package fluentbit_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/fluentbit"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `@INCLUDE abc.conf
@SET my_env=1


[INPUT]
    # comment
    KEY1  VALUE1
    KEY2  VALUE2
`
	expected = "(config (directive (directive_include pattern: (value_type))) (directive (directive_set key: (key_type) value: (value_type))) (section header: (section_header name: (section_header_type)) body: (section_body (comment) (entry key: (key_type) value: (value_type)) (entry key: (key_type) value: (value_type)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), fluentbit.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
