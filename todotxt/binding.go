package todotxt

//#include "parser.h"
//TSLanguage *tree_sitter_todotxt();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_todotxt())
	return sitter.NewLanguage(ptr)
}
