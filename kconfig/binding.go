package kconfig

//#include "parser.h"
//TSLanguage *tree_sitter_kconfig();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_kconfig())
	return sitter.NewLanguage(ptr)
}
