package main

import (
	"fmt"
	"io"
	"os"
	"path/filepath"
	"strings"

	"github.com/alexaandru/go-sitter-forest/internal/automation/grammar"
)

const nvimts = "nvimts__"

var (
	silentQueryUpdates bool
	nvimRemaining      = filepath.Join("internal", "queries", "nvim_remaining")
)

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

	if err = clearQueries(gr.Language); err != nil {
		return
	}

	return copyQueries(src, gr.Language)
}

func copyQueries(src, dstPath string) (err error) {
	if err = os.MkdirAll(dstPath, os.ModePerm); err != nil {
		return
	}

	pats := [][]string{
		{"*.scm"},           // most parsers
		{dstPath, "*.scm"},  // some parsers use queries/<langName>
		{"nvim", "*.scm"},   // some have dedicated neovim folders
		{"neovim", "*.scm"}, // ~~
	}

	for _, pat := range pats {
		if err = copyFiles(filepath.Join(append([]string{src}, pat...)...), dstPath); err != nil {
			return
		}
	}

	return
}

func copyNvimQueries(src string) (err error) {
	err = forEachGrammar(func(gr *grammar.Grammar) (err error) {
		return copyFiles(filepath.Join(src, gr.Language, "*.scm"), gr.Language, nvimts)
	})
	if err != nil {
		return
	}

	// Copy any queries that dont't have a home yet.
	folders, _ := filepath.Glob(filepath.Join(src, "*"+string(os.PathSeparator)))
	for _, folder := range folders {
		base := filepath.Base(folder)
		if ok, _ := fileExists(base); ok {
			continue
		}

		dst := filepath.Join(nvimRemaining, base)
		if err = os.MkdirAll(dst, os.ModePerm); err != nil {
			return
		}

		if err = copyFiles(filepath.Join(folder, "*.scm"), dst); err != nil {
			return
		}
	}

	return
}

func copyFiles(pat, dstPath string, opts ...string) (err error) {
	pre := ""
	if len(opts) > 0 {
		pre = opts[0]
	}

	files, err := filepath.Glob(pat)
	if err != nil {
		return
	}

	for _, file := range files {
		base := filepath.Base(file)
		if strings.HasPrefix(base, "helix") || strings.HasPrefix(base, "nova-") {
			continue
		}

		dst := filepath.Join(dstPath, pre+base)

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

func clearQueries(pat string) (err error) {
	files, err := filepath.Glob(filepath.Join(pat, "*.scm"))
	if err != nil {
		return
	}

	for _, file := range files {
		if x := filepath.Base(file); strings.HasPrefix(x, nvimts) || x == "_keep.scm" {
			continue
		}

		if err = os.Remove(file); err != nil {
			return
		}
	}

	return
}