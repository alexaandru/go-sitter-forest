package m68k

//#include "parser.h"
//TSLanguage *tree_sitter_m68k();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_m68k())
	return sitter.NewLanguage(ptr)
}
