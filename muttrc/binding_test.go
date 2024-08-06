//go:build !plugin

package muttrc_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/muttrc"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
bind pager,index \ch<BackSpace> sidebar-toggle-visible
set & allow_ansi ? allow_ansi noallow_ansi
set allow_ansi=yes sleep_time = 0 ispell = aspell
set real_name = $DEBFULLNAME
set query_command = 'mutt_ldap_query.pl %s'
set signature = "echo Best Regards$'\n'$DEBFULLNAME|"
mailboxes $spool_file $postponed $record $trash \
+[Gmail]/Spam +[Gmail]/Starred
sidebar_unpin *
source ~/.config/neomutt/neomuttrc
`
	expected = "(file (bind_directive (command) (map) (map) (key (escape) (key_name)) (function)) (set_directive (command) (option) (option) (option)) (set_directive (command) (option) (quadoption) (option) (int) (option) (shell)) (set_directive (command) (option) (shell)) (set_directive (command) (option) content: (string)) (set_directive (command) (option) content: (shell)) (mailboxes_directive (command) (mailbox (shell)) (mailbox (shell)) (mailbox (shell)) (mailbox (shell)) (mailbox (shell)) (mailbox (shell))) (sidebar_unpin_directive (command)) (source_directive (command) (path (shell))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), muttrc.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
