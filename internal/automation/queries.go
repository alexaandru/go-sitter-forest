package main

import (
	"fmt"
	"io"
	"io/fs"
	"os"
	"os/exec"
	"path/filepath"

	"github.com/alexaandru/go-sitter-forest/internal/automation/grammar"
)

var silentQueryUpdates bool

func updateQueries() (err error) {
	if err = fetchQueries(&grammar.Grammar{Language: "nvim_treesitter", URL: nvimTreeSiterURL}); err != nil {
		return
	}

	return forEachGrammar(fetchQueries)
}

func fetchQueries(gr *grammar.Grammar) (err error) {
	// TODO: Skip update if commit did not change.

	tmpPath := filepath.Join("tmp", gr.Language)
	bailedOut := false
	os.RemoveAll(tmpPath) // Only if it exists, so we don't care if it errors out.

	if err = os.MkdirAll(tmpPath, os.ModePerm); err != nil {
		return
	}

	cmds := [][]string{
		{"clone", "-n", "--depth=1", "--filter=tree:0", gr.URL, "."},
		{"sparse-checkout", "set", "--no-cone", "queries"},
		{"checkout"},
	}

	for _, args := range cmds {
		if err = runCmd(tmpPath, "git", args...); err != nil {
			return
		}
	}

	defer func() {
		if err == nil && !silentQueryUpdates {
			if bailedOut {
				fmt.Println("Skipped queries for", gr.Language)
			} else {
				fmt.Println("Updated queries for", gr.Language)
			}
		}
	}()

	src := filepath.Join(tmpPath, "queries")
	if gr.SrcRoot != "" {
		src = filepath.Join(tmpPath, gr.SrcRoot, "queries")
	}

	defer func() {
		if err != nil && os.IsNotExist(err) {
			logger.Warn(err.Error(), "src", src)
			bailedOut, err = true, nil
		}
	}()

	if gr.Language == "nvim_treesitter" {
		return copyNvimQueries(src)
	}

	return copyQueries(src, gr.Language)
}

func copyQueries(src, dstPath string) (err error) {
	if err = os.MkdirAll(dstPath, os.ModePerm); err != nil {
		return
	}

	return filepath.WalkDir(src, func(path string, d fs.DirEntry, err error) error {
		if err != nil {
			return err
		}

		if d.IsDir() || filepath.Ext(path) != ".scm" {
			return nil
		}

		// TODO: reuse copyFiles (glob n(eo)vim/, n(eo)vim-, default).
		dst := filepath.Join(dstPath, filepath.Base(path))

		in, err := os.Open(path)
		if err != nil {
			return err
		}
		defer in.Close()

		out, err := os.Create(dst)
		if err != nil {
			return err
		}

		if _, err = io.Copy(out, in); err != nil {
			return err
		}

		return out.Close()
	})
}

func copyNvimQueries(src string) error {
	return forEachGrammar(func(gr *grammar.Grammar) (err error) {
		files, err := filepath.Glob(filepath.Join(src, gr.Language, "*.scm"))
		if err != nil {
			return
		}

		return copyFiles(files, gr.Language)
	})
}

func copyFiles(files []string, dstPath string) (err error) {
	for _, file := range files {
		dst := filepath.Join(dstPath, "nvimts__"+filepath.Base(file))

		var in, out *os.File

		if in, err = os.Open(file); err != nil {
			return err
		}
		defer in.Close()

		if out, err = os.Create(dst); err != nil {
			return
		}

		if _, err = io.Copy(out, in); err != nil {
			return
		}

		if err = out.Close(); err != nil {
			return
		}
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
