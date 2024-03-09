package main

import (
	"fmt"
	"path/filepath"
)

const (
	bindingTpl = `%s

package %s

//#include "parser.h"
//TSLanguage *tree_sitter_%s();
import "C"

import (
	_ "embed"
	"encoding/json"
	"unsafe"

	"github.com/alexaandru/go-sitter-forest/internal/automation/grammar"
	sitter "github.com/smacker/go-tree-sitter"
)

//go:embed grammar.json
var info []byte

var gr *grammar.Grammar

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_%s())
	return sitter.NewLanguage(ptr)
}

func Info() *grammar.Grammar {
	return gr
}

func init() {
	gr = &grammar.Grammar{}
	if err := json.Unmarshal(info, gr); err != nil {
		panic(err)
	}
}
`
	bindingTestTpl = `//go:build !plugin

package %s_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/%s"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = ""
	expected = "IMPLEMENT ME"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), %s.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %%v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %%q got %%q", expected, act)
	}
}
`
)

var tplBindings = map[string]string{
	"binding.go":      bindingTpl,
	"binding_test.go": bindingTestTpl,
}

// Creates a map between file paths to write to and corresponding content.
func mkBindingMap(lang string) (out map[string]string) {
	out = map[string]string{}
	for k, v := range tplBindings {
		pack := lang

		switch lang {
		case "go":
			pack = "Go"
		case "func":
			pack = "FunC"
		}

		if k == "binding.go" {
			out[filepath.Join(lang, k)] = fmt.Sprintf(v, "//go:build !plugin", pack, lang, lang)
		} else {
			out[filepath.Join(lang, k)] = fmt.Sprintf(v, pack, pack, pack)
		}
	}

	return
}
