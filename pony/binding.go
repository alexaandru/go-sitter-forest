//go:build !plugin

package pony

//#include "parser.h"
//TSLanguage *tree_sitter_pony();
import "C"

import (
	_ "embed"
	"unsafe"

	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

//go:embed grammar.json
var info []byte

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_pony())
	return sitter.NewLanguage(ptr)
}

func Info() string {
	return string(info)
}
