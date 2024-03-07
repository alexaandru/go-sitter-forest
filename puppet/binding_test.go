package puppet_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/puppet"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
package { 'ntp':
  ensure => installed,
  before => File['ntp.conf'],
}
service { 'ntpd':
  ensure    => running,
  subscribe => File['ntp.conf'],
}
`
	expected = "(source_file (resource_declaration type: (identifier) title: (string (string_content)) (attribute name: (identifier) value: (identifier)) (attribute name: (identifier) value: (resource_reference (identifier) (string (string_content))))) (resource_declaration type: (identifier) title: (string (string_content)) (attribute name: (identifier) value: (identifier)) (attribute name: (identifier) value: (resource_reference (identifier) (string (string_content))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), puppet.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
