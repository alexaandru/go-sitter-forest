package gleam

//#include "parser.h"
//TSLanguage *tree_sitter_gleam();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_gleam())
	return sitter.NewLanguage(ptr)
}
