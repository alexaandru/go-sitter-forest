package nim_format_string

//#include "parser.h"
//TSLanguage *tree_sitter_nim_format_string();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_nim_format_string())
	return sitter.NewLanguage(ptr)
}
