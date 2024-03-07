package embedded_template

//#include "parser.h"
//TSLanguage *tree_sitter_embedded_template();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_embedded_template())
	return sitter.NewLanguage(ptr)
}
