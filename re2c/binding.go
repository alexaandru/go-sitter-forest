package re2c

//#include "parser.h"
//TSLanguage *tree_sitter_re2c();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_re2c())
	return sitter.NewLanguage(ptr)
}
