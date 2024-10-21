package grammar

import (
	"context"
	"fmt"
	"slices"

	"golang.org/x/sync/errgroup"
	"golang.org/x/sync/semaphore"
)

// Grammars holds a collection of Grammar's.
type Grammars []*Grammar

var supportedGrammars, pendingGrammars []string

// ForEach iterates over all the Grammars in collection.
func (gx Grammars) ForEach(fn func(gr *Grammar) error, opts ...int64) error {
	g := new(errgroup.Group)
	seen := map[string]string{}

	weight := int64(6)
	if len(opts) > 0 {
		weight = opts[0]
	}

	sem := semaphore.NewWeighted(weight)

	for _, gr := range gx {
		if v, ok := seen[gr.Language]; ok {
			return fmt.Errorf("grammar %q seen twice: %q and %q", gr.Language, v, gr.URL)
		}

		seen[gr.Language] = gr.URL

		if gr.Pending {
			continue
		}

		g.Go(func() (err error) {
			if err = sem.Acquire(context.TODO(), 1); err != nil {
				return
			}

			defer sem.Release(1)

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
