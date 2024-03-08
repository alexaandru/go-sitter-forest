package gpg_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/gpg"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
no-emit-version

default-key 0xD8692123C4065DEA5E0F3AB5249B39D24F25E3B6

keyid-format 0xlong

keyserver hkps://keys.openpgp.org
keyserver-options http-proxy=socks5-hostname://127.0.0.1:9050
keyserver-options no-honor-keyserver-url
`
	expected = "(config (option) (option (key)) (option (value)) (option (url)) (option (name) value: (string (content))) (option (name)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), gpg.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
