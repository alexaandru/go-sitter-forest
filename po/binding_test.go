package po_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/po"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
msgid ""
msgstr ""
"Project-Id-Version: \n"
"POT-Creation-Date: 2019-11-21 11:26+0800\n"
"PO-Revision-Date: 2023-02-15 11:47+0800\n"
"Last-Translator: \n"
"Language-Team: \n"

msgid "menu"
msgstr ""
"菜单\n"
"菜单2"

# test
#: modules/user/views_handler_filter_user_name.inc:112
msgid "Unable to find user: @users"
msgid_plural "Unable to find users: @users"
msgstr[0] "Benutzer konnte nicht gefunden werden: @users"
msgstr[1] "Benutzer konnten nicht gefunden werden: @users"

#, c-format
msgid "One file removed"
msgid_plural "%d files removed"
msgstr[0] "%d slika je uklonjena"
msgstr[1] "%d datoteke uklonjenih"
msgstr[2] "%d slika uklonjenih"
`
	expected = "(source_file (message (msgid (string)) (msgstr (string) (string (string_fragment) (escape_sequence)) (string (string_fragment) (escape_sequence)) (string (string_fragment) (escape_sequence)) (string (string_fragment) (escape_sequence)) (string (string_fragment) (escape_sequence)))) (message (msgid (string (string_fragment))) (msgstr (string) (string (string_fragment) (escape_sequence)) (string (string_fragment)))) (comment (text)) (comment (reference (text))) (message (msgid (string (string_fragment))) (msgid_plural (string (string_fragment))) (msgstr (number) (string (string_fragment)) (number) (string (string_fragment)))) (comment (flag (text))) (message (msgid (string (string_fragment))) (msgid_plural (string (string_fragment))) (msgstr (number) (string (string_fragment)) (number) (string (string_fragment)) (number) (string (string_fragment)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), po.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
