package xcompose

//#include "parser.h"
//TSLanguage *tree_sitter_xcompose();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_xcompose())
	return sitter.NewLanguage(ptr)
}
