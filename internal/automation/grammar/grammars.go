package grammar

import (
	"fmt"
	"slices"
)

type Grammars []*Grammar

var supportedGrammars, pendingGrammars []string

func (gx Grammars) Find(lang string) (i int, err error) {
	i = slices.IndexFunc(gx, func(x *Grammar) bool {
		return x.Language == lang
	})

	if i < 0 {
		err = fmt.Errorf("grammar %q not found", lang)
	}

	return
}

func (gx Grammars) Supported() []string {
	if supportedGrammars != nil {
		return supportedGrammars
	}

	for _, gr := range gx {
		if !gr.Pending {
			supportedGrammars = append(supportedGrammars, gr.Language)
		}
	}

	return supportedGrammars
}

func (gx Grammars) Pending() []string {
	if pendingGrammars != nil {
		return pendingGrammars
	}

	for _, gr := range gx {
		if gr.Pending {
			pendingGrammars = append(pendingGrammars, gr.Language)
		}
	}

	return pendingGrammars
}
