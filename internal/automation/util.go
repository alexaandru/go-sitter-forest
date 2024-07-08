package main

import (
	"fmt"
	"os"

	"github.com/alexaandru/go-sitter-forest/internal/automation/grammar"
	"golang.org/x/sync/errgroup"
)

func forEachGrammar(fn func(gr *grammar.Grammar) error) error {
	g := new(errgroup.Group)
	seen := map[string]string{}

	for _, gr := range grammars {
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

func makeDir(path string) error {
	return os.MkdirAll(path, 0o755)
}

func fileExists(path string) (ok bool, err error) {
	if _, err = os.Stat(path); err == nil {
		return true, nil
	}

	if os.IsNotExist(err) {
		return false, nil
	}

	return
}

func die(msg any) {
	if logFile != nil {
		logFile.Close()
	}

	fmt.Println(msg)
	os.Exit(1)
}
