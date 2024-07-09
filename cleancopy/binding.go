//go:build !plugin

package cleancopy

//#cgo CFLAGS: -Wno-discarded-qualifiers -Wno-incompatible-pointer-types -w
//#include "parser.h"
//TSLanguage *tree_sitter_cleancopy();
import "C"

import (
	_ "embed"
	"unsafe"

	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

//go:embed grammar.json
var info []byte

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_cleancopy())
	return sitter.NewLanguage(ptr)
}

func Info() string {
	return string(info)
}
