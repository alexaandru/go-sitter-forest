package main

import (
	"fmt"
	"slices"

	"github.com/alexaandru/go-sitter-forest/internal/automation/grammar"
)

type Grammars []*grammar.Grammar

func (gx Grammars) Find(lang string) (i int, err error) {
	i = slices.IndexFunc(grammars, func(x *grammar.Grammar) bool {
		return x.Language == lang
	})

	if i < 0 {
		err = fmt.Errorf("grammar %q not found", lang)
	}

	return
}
