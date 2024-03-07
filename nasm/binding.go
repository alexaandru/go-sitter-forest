package nasm

//#include "parser.h"
//TSLanguage *tree_sitter_nasm();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_nasm())
	return sitter.NewLanguage(ptr)
}
