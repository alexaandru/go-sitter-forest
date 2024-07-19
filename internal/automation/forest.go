package main

import (
	"os"
	"slices"
	"text/template"
)

func updateForest() (err error) {
	t, err := template.ParseFiles("forest.tmpl")
	if err != nil {
		return
	}

	langs := append(grammars.Supported(), "terraform")

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
