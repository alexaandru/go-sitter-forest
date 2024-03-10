//go:build !plugin

package nasm

//#include "parser.h"
//TSLanguage *tree_sitter_nasm();
import "C"

import (
	_ "embed"
	"unsafe"

	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

//go:embed grammar.json
var info []byte

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_nasm())
	return sitter.NewLanguage(ptr)
}

func Info() string {
	return string(info)
}
