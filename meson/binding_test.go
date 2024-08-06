//go:build !plugin

package meson_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/meson"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
project(# test
	'wayvnc',
	'c',#test
	version: '0.5.0',
	license: 'ISC',
	default_options: [
		'c_std=gnu11',
	],
)

buildtype = get_option('buildtype')
host_system = host_machine.system()
prefix = get_option('prefix')
`
	expected = "(source_file (normal_command command: (identifier) (comment) (variableunit (string)) (variableunit (string)) (comment) (pair key: (identifier) value: (string)) (pair key: (identifier) value: (string)) (pair key: (identifier) value: (list (string)))) (operatorunit (identifier) (normal_command command: (identifier) (variableunit (string)))) (operatorunit (identifier) (expression_statement object: (identifier) function: (normal_command command: (identifier)))) (operatorunit (identifier) (normal_command command: (identifier) (variableunit (string)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), meson.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
