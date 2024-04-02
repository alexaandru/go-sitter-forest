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
	"unsafe"

	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

//go:embed grammar.json
var info []byte

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_%s())
	return sitter.NewLanguage(ptr)
}

func Info() string {
	return string(info)
}
`
	bindingTestTpl = `//go:build !plugin

package %s_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/%s"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
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
	"plugin.go":       bindingTpl,
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

		switch k {
		case "binding.go":
			out[filepath.Join(lang, k)] = fmt.Sprintf(v, "//go:build !plugin", pack, lang, lang)
		case "binding_test.go":
			out[filepath.Join(lang, k)] = fmt.Sprintf(v, pack, pack, pack)
		case "plugin.go":
			out[filepath.Join(lang, k)] = fmt.Sprintf(v, "//go:build plugin", "main", lang, lang)
		}
	}

	return
}
