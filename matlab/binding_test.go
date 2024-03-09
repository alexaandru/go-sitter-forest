//go:build !plugin

package matlab_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/matlab"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
t = 0:0.25:7;
y = sin(t);

plot(t,y)
title('Sine Wave as a Function of Time')
xlabel('Time (secs)')
ylabel('Amplitude')
`
	expected = "(source_file (assignment left: (identifier) right: (range (number) (number) (number))) (assignment left: (identifier) right: (function_call name: (identifier) (arguments argument: (identifier)))) (function_call name: (identifier) (arguments argument: (identifier) argument: (identifier))) (function_call name: (identifier) (arguments argument: (string (string_content)))) (function_call name: (identifier) (arguments argument: (string (string_content)))) (function_call name: (identifier) (arguments argument: (string (string_content)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), matlab.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
