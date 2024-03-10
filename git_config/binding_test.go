//go:build !plugin

package git_config_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/git_config"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
# Core variables
[core]
	filemode = false

[diff]
	external = /usr/local/bin/diff-wrapper
	renames = true

[branch "devel"]
	remote = origin
	merge = refs/heads/devel

[core]
	gitProxy="ssh" for "kernel.org"
	gitProxy=default-proxy ; for the rest

[include]
	path = /path/to/foo.inc ; include by absolute path
	path = foo.inc ; find "foo.inc" relative to the current file
	path = ~/foo.inc ; find "foo.inc" in your $HOME directory

; include if $GIT_DIR is /path/to/foo/.git
[includeIf "gitdir:/path/to/foo/.git"]
	path = /path/to/foo.inc
`
	expected = "(config (comment) (section (section_header (section_name)) (variable (name) value: (false))) (section (section_header (section_name)) (variable (name) value: (string)) (variable (name) value: (true))) (section (section_header (section_name) (subsection_name)) (variable (name) value: (string)) (variable (name) value: (string))) (section (section_header (section_name)) (variable (name) value: (string)) (variable (name) value: (string)) (comment)) (section (section_header (section_name)) (variable (name) value: (string)) (comment) (variable (name) value: (string)) (comment) (variable (name) value: (string)) (comment) (comment)) (section (section_header (section_name) (subsection_name)) (variable (name) value: (string))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), git_config.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
