package passwd_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/passwd"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
root:x:0:0:Super User:/root:/bin/bash
bin:x:1:1:bin:/bin:/usr/sbin/nologin
daemon:x:2:2:daemon:/sbin:/usr/sbin/nologin
games:x:12:100:games:/usr/games:/usr/sbin/nologin
ftp:x:14:50:FTP User:/var/ftp:/usr/sbin/nologin
nobody:x:65534:65534:Kernel Overflow User:/:/usr/sbin/nologin
`
	expected = "(source_file (entry (user) (separator) (auth) (separator) (uid) (separator) (gid) (separator) (gecos) (separator) (home) (separator) (shell)) (entry (user) (separator) (auth) (separator) (uid) (separator) (gid) (separator) (gecos) (separator) (home) (separator) (shell)) (entry (user) (separator) (auth) (separator) (uid) (separator) (gid) (separator) (gecos) (separator) (home) (separator) (shell)) (entry (user) (separator) (auth) (separator) (uid) (separator) (gid) (separator) (gecos) (separator) (home) (separator) (shell)) (entry (user) (separator) (auth) (separator) (uid) (separator) (gid) (separator) (gecos) (separator) (home) (separator) (shell)) (entry (user) (separator) (auth) (separator) (uid) (separator) (gid) (separator) (gecos) (separator) (home) (separator) (shell)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), passwd.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
