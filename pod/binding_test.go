//go:build !plugin

package pod_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/pod"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
#!/usr/bin/perl

=head1 NAME

hello.pl - A simple Perl script to print "Hello, World!"

=head1 AUTHOR

John Doe

=cut

# Print "Hello, World!"
print "Hello, World!\n";
`
	expected = "(pod (plain_paragraph (content)) (command_paragraph command: (command) (content)) (plain_paragraph (content)) (command_paragraph command: (command) (content)) (plain_paragraph (content)) (cut_paragraph (cut_command)) (plain_paragraph (content)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), pod.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
