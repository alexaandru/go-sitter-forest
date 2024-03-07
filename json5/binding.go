package json5

//#include "parser.h"
//TSLanguage *tree_sitter_json5();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_json5())
	return sitter.NewLanguage(ptr)
}
