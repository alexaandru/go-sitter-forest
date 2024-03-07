package pem

//#include "parser.h"
//TSLanguage *tree_sitter_pem();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_pem())
	return sitter.NewLanguage(ptr)
}
