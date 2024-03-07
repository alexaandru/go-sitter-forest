package git_config

//#include "parser.h"
//TSLanguage *tree_sitter_git_config();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_git_config())
	return sitter.NewLanguage(ptr)
}
