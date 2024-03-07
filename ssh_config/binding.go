package ssh_config

//#include "parser.h"
//TSLanguage *tree_sitter_ssh_config();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_ssh_config())
	return sitter.NewLanguage(ptr)
}
