//go:build !plugin

package http

//#include "parser.h"
//TSLanguage *tree_sitter_http();
import "C"

import (
	_ "embed"
	"encoding/json"
	"unsafe"

	"github.com/alexaandru/go-sitter-forest/internal/automation/grammar"
	sitter "github.com/smacker/go-tree-sitter"
)

//go:embed grammar.json
var info []byte

var gr *grammar.Grammar

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_http())
	return sitter.NewLanguage(ptr)
}

func Info() *grammar.Grammar {
	return gr
}

func init() {
	gr = &grammar.Grammar{}
	if err := json.Unmarshal(info, gr); err != nil {
		panic(err)
	}
}
