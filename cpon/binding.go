//go:build !plugin

package cpon

//#include "parser.h"
//TSLanguage *tree_sitter_cpon();
import "C"

import (
	"embed"
	"strings"
	"unsafe"

	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	_ byte = iota
	NvimFirst
	NativeFirst
	NvimOnly
	NativeOnly
)

const nvimts = "nvimts__"

//go:embed grammar.json *.scm
var files embed.FS

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_cpon())
	return sitter.NewLanguage(ptr)
}

func GetQuery(kind string, opts ...byte) (out []byte) {
	kind = strings.TrimSuffix(kind, ".scm") + ".scm"

	pref := NvimFirst
	if len(opts) > 0 {
		pref = opts[0]
	}

	var err error

	switch pref {
	case NvimFirst:
		out, err = files.ReadFile(nvimts + kind)
		if err == nil && len(out) > 0 {
			return
		}

		out, _ = files.ReadFile(kind)

		return
	case NativeFirst:
		out, err = files.ReadFile(kind)
		if err == nil && len(out) > 0 {
			return
		}

		out, _ = files.ReadFile(nvimts + kind)

		return
	case NvimOnly:
		out, _ = files.ReadFile(nvimts + kind)
		return
	case NativeOnly:
		out, _ = files.ReadFile(kind)
		return
	}

	return
}

func Info() string {
	out, err := files.ReadFile("grammar.json")
	if err != nil {
		return err.Error()
	}

	return string(out)
}
