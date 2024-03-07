package jsdoc

//#include "parser.h"
//TSLanguage *tree_sitter_jsdoc();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_jsdoc())
	return sitter.NewLanguage(ptr)
}
