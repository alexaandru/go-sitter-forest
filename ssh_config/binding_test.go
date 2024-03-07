package ssh_config_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/ssh_config"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
ControlMaster auto
ControlPath /tmp/ssh-%C

KexAlgorithms curve25519-sha256@libssh.org,diffie-hellman-group-exchange-sha256

Match host=github.com
    IdentityFile ~/.ssh/id_rsa
    User git
`
	expected = "(config (parameter) (parameter argument: (pattern (token))) (parameter argument: (kex) argument: (kex)) (match_declaration (condition argument: (pattern)) (parameter argument: (string)) (parameter argument: (string))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), ssh_config.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
