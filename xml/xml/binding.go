package xml

//#include "parser.h"
//TSLanguage *tree_sitter_xml();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_xml())
	return sitter.NewLanguage(ptr)
}
