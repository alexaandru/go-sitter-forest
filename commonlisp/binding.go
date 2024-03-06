package commonlisp

//#include "parser.h"
//TSLanguage *tree_sitter_commonlisp();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_commonlisp())
	return sitter.NewLanguage(ptr)
}
