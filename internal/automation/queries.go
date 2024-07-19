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

	return grammars.ForEach(fetchQueries)
}

// TODO: Skip update if commit did not change.
func fetchQueries(gr *grammar.Grammar) (err error) {
	tmpPath := filepath.Join("tmp", gr.Language)
	bailedOut := false

	os.RemoveAll(tmpPath) //nolint:errcheck // Only if exists, we don't care otherwise

	if err = os.MkdirAll(tmpPath, 0o750); err != nil {
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
			//nolint:forbidigo // ok
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
	if err = os.MkdirAll(dstPath, 0o750); err != nil {
		return
	}

	pats := [][]string{
		{"*.scm"},            // Most parsers.
		{dstPath, "*.scm"},   // Some parsers use queries/<langName>.
		{"[Nn]vim", "*.scm"}, // Some have dedicated neovim folders.
		{"[Nn]eovim", "*.scm"},
	}

	for _, pat := range pats {
		if err = copyFiles(filepath.Join(append([]string{src}, pat...)...), dstPath); err != nil {
			return
		}
	}

	return
}

func copyNvimQueries(src string) (err error) {
	err = grammars.ForEach(func(gr *grammar.Grammar) (err error) {
		nvimLang := gr.Language
		if nvimLang == "janet" {
			nvimLang += "_simple"
		}

		logger.Info("copy nvim queries", "src", src, "nvimLang", nvimLang, "lang", gr.Language)

		return copyFiles(filepath.Join(src, nvimLang, "*.scm"), gr.Language, nvimts)
	})
	if err != nil {
		return
	}

	// Copy any queries that dont't have a home yet.
	folders, err := filepath.Glob(filepath.Join(src, "*"+string(os.PathSeparator)))
	if err != nil {
		return
	}

	for _, folder := range folders {
		base := filepath.Base(folder)
		if ok, _ := fileExists(base); ok || base == "janet_simple" { //nolint:errcheck // ok, we only care if it exists
			continue
		}

		dst := filepath.Join(nvimRemaining, base)
		if err = os.MkdirAll(dst, 0o750); err != nil {
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

		if out, err = os.Create(dst); err != nil {
			return
		}

		if _, err = io.Copy(out, in); err != nil {
			return
		}

		if err = out.Close(); err != nil {
			return
		}

		in.Close() //nolint:errcheck // ok, it's readonly
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
