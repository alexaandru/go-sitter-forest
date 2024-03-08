package jsonc

//#include "parser.h"
//TSLanguage *tree_sitter_jsonc();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_jsonc())
	return sitter.NewLanguage(ptr)
}
