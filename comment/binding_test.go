//go:build !plugin

package comment_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/comment"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
TODO: something

XXX: fix something else.

TODO:    extra white spaces.

NOTAG:missing space

(TODO: I'm inside parentheses)

NOTE:

"NOTE: this should work!"

DEBUG: thís shoúld wórk with $weird$ symbols

TODO(stsewd): something

XXX (monday): fix something else.

TODO(@todo):    extra white spaces.

NOTAG(tag):missing space

(TODO (someone): I'm inside parentheses)

NOTE(a user):

"NOTE (a user): this should work!"

FIXME(): This isn't a valid tag (user is missing)

TODO: http://example.com

TODO: https://example.com

Something "http://example.com"

URI: https://user:pass@example.com/org/repo/?foo=baz

(https://example.com/foo/bar/)

URI(me): (https://github.com/stsewd/?foo=bar#baz)

https://github.com/stsewd/tree-sitter-rst#1.1
`
	expected = "(source (tag (name)) (tag (name)) (tag (name)) (tag (name)) (tag (name)) (tag (name)) (tag (name)) (tag (name) (user)) (tag (name) (user)) (tag (name) (user)) (tag (name) (user)) (tag (name) (user)) (tag (name) (user)) (tag (name)) (uri) (tag (name)) (uri) (uri) (tag (name)) (uri) (uri) (tag (name) (user)) (uri) (uri))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), comment.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
