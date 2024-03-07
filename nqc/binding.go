package nqc

//#include "parser.h"
//TSLanguage *tree_sitter_nqc();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_nqc())
	return sitter.NewLanguage(ptr)
}
