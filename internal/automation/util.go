package main

import (
	"fmt"
	"os"
	"os/exec"

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

func runCmd(dir, comm string, args ...string) (err error) {
	cmd := exec.Command(comm, args...)
	cmd.Dir = dir

	var b []byte

	if b, err = cmd.CombinedOutput(); err != nil {
		fmt.Println(string(b))
	}

	return
}

func touch(name string) (err error) {
	f, err := os.OpenFile(name, os.O_RDONLY|os.O_CREATE, os.ModePerm)
	if err != nil {
		return
	}

	return f.Close()
}

func die(msg any) {
	if logFile != nil {
		logFile.Close()
	}

	fmt.Println(msg)
	os.Exit(1)
}
