//go:build !plugin

package woml_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/woml"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `this is a root text that you can type
anything with multiline support and #tag @label
#tag @label

[aTextHeader]
this is a text header


[anObjectHeader]
key1: value 1 #tag @label
key2: value 2 #tag @label #tag @label
key3: value 3 @label

[aListHeader]
- item 1 #tag @label
- item 2 #tag @label #tag @label
- item 3

[woml]
Whaterver Object Markup Language @simple @accessible @easy

[settings]
theme: dark
color: gruvbox

[todos]
- support for more highlighting #neovim #vscode #zed

- make it simpler nicer @0xWaleed
- make value to match natural english langauge #enhancement

- support Arabic parsing #important @Waleed
`
	expected = "(doc rootText: (rootText text: (text) tag: (tag) label: (label) tag: (tag) label: (label)) entries: (entries entry: (entryText header: (header identifier: (identifier)) content: (content text: (text))) entry: (entryObject header: (header identifier: (identifier)) pair: (pair key: (identifier) value: (line line: (text) tag: (tag) label: (label))) pair: (pair key: (identifier) value: (line line: (text) tag: (tag) label: (label) tag: (tag) label: (label))) pair: (pair key: (identifier) value: (line line: (text) label: (label)))) entry: (entryList header: (header identifier: (identifier)) listItem: (listItem (minus) item: (value line: (text) tag: (tag) label: (label))) listItem: (listItem (minus) item: (value line: (text) tag: (tag) label: (label) tag: (tag) label: (label))) listItem: (listItem (minus) item: (value line: (text)))) entry: (entryText header: (header identifier: (identifier)) content: (content text: (text) label: (label) label: (label) label: (label))) entry: (entryObject header: (header identifier: (identifier)) pair: (pair key: (identifier) value: (line line: (text))) pair: (pair key: (identifier) value: (line line: (text)))) entry: (entryList header: (header identifier: (identifier)) listItem: (listItem (minus) item: (value line: (text) tag: (tag) tag: (tag) tag: (tag))) listItem: (listItem (minus) item: (value line: (text))) (ERROR) listItem: (listItem (minus) item: (value line: (text) tag: (tag))) listItem: (listItem (minus) item: (value line: (text) tag: (tag) label: (label))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), woml.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
