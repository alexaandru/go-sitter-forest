package main

import (
	"os"
	"slices"
	"sync"
	"text/template"

	"github.com/alexaandru/go-sitter-forest/internal/automation/grammar"
)

func updateForest() (err error) {
	m := new(sync.Map)
	forEachGrammar(func(gr *grammar.Grammar) error { //nolint:errcheck // ok
		m.Store(gr.Language, true)
		return nil
	})

	langs := []string{"terraform"}
	m.Range(func(k, v any) bool {
		langs = append(langs, k.(string))
		return true
	})

	t, err := template.ParseFiles("forest.tmpl")
	if err != nil {
		return
	}

	slices.Sort(langs)

	f, err := os.Create("forest.go")
	if err != nil {
		return
	}

	if err = t.Execute(f, langs); err != nil {
		return
	}

	if err = f.Close(); err != nil {
		return
	}

	if err = runCmd(".", "goimports", "-w", "forest.go"); err != nil {
		return err
	}

	return runCmd(".", "gofumpt", "-w", "-extra", "forest.go")
}
