package grammar

import (
	"fmt"
	"slices"

	"golang.org/x/sync/errgroup"
)

// Grammars holds a collection of Grammar's.
type Grammars []*Grammar

var supportedGrammars, pendingGrammars []string

// ForEach iterates over all the Grammars in collection.
func (gx Grammars) ForEach(fn func(gr *Grammar) error) error {
	g := new(errgroup.Group)
	seen := map[string]string{}

	for _, gr := range gx {
		if v, ok := seen[gr.Language]; ok {
			return fmt.Errorf("grammar %q seen twice: %q and %q", gr.Language, v, gr.URL)
		}

		seen[gr.Language] = gr.URL

		if gr.Pending {
			continue
		}

		g.Go(func() error {
			return fn(gr)
		})
	}

	return g.Wait()
}

// Find looks for a grammar with the given language name in the collection.
func (gx Grammars) Find(lang string) (gr *Grammar, err error) {
	i := slices.IndexFunc(gx, func(x *Grammar) bool {
		return x.Language == lang
	})

	if i < 0 {
		return nil, fmt.Errorf("grammar %q not found", lang)
	}

	return gx[i], nil
}

// Supported returns all the supported grammars' names.
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

// Pending returns all the pending grammars' names.
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
