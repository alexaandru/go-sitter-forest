package forest

import (
	"bufio"
	_ "embed"
	"encoding/json"
	"errors"
	"fmt"
	"os"
	"path/filepath"
	"regexp"
	"slices"
	"strings"
)

// ftDetector is responsible for detecting the filetype based on various
// mechanisms, such as by modeline, by glob, by full path, by basename
// or by file extension, in that specific order.
// For modeline see https://vimdoc.sourceforge.net/htmldoc/options.html#modeline
type ftDetector struct {
	Glob, Basename, Ext map[string]string
}

func (d *ftDetector) load(b []byte) (err error) {
	ftInv := ftDetectorInverted{}
	if err = json.Unmarshal(b, &ftInv); err != nil {
		return err
	}

	d.Glob = map[string]string{}
	d.Basename = map[string]string{}
	d.Ext = map[string]string{}

	dot := func(s string) string { return "." + s }
	nop := func(s string) string { return s }
	fn := func(label string, dst map[string]string, src map[string][]string, pre func(string) string) error {
		for lang, pats := range src {
			for _, pat := range pats {
				pat = pre(pat)
				if prev, ok := dst[pat]; ok {
					return fmt.Errorf("%q %s is registered twice: {%q, %q}", pat, label, prev, lang)
				}

				dst[pat] = lang
			}
		}

		return nil
	}

	if err = fn("glob", d.Glob, ftInv.Glob, nop); err != nil {
		return
	}

	if err = fn("basenae", d.Basename, ftInv.Basename, nop); err != nil {
		return
	}

	if err = fn("extension", d.Ext, ftInv.Ext, dot); err != nil {
		return
	}

	return
}

type ftDetectorInverted struct {
	Glob,
	Basename,
	Ext map[string][]string
}

var (
	sep = string(os.PathSeparator)
	ft  = ftDetector{}
)

//go:embed filetype.json
var ftDetect []byte

// DetectLang detects the language name based on given file path.
// The given fpath should preferably be the absolute path as that guarantees
// that all the detectors can be used. It can however work with relative
// paths, the filename or even with just the file extension (including
// leading dot) alone. However the success rate will correspondingly be
// reduced due to the inability to use all the detectors available.
func DetectLanguage(fpath string) string {
	return ft.detect(fpath)
}

// RegisterLanguage allows end users to register their own mappings,
// potentially overriding existing ones. Typical use would be for
// languages not maintained by this library, or overriding ambiguous
// ones (i.e. v vs. verilog for .v, ldg or ledger for .ldg, etc.).
//
// The pattern pat can be a glob, a path, a filename or a file
// extension (incl. the leading dot).
func RegisterLanguage(pat, lang string) error {
	return ft.register(pat, lang)
}

var (
	errMissingPattern  = errors.New("pattern is missing")
	errMissingLanguage = errors.New("language is missing")
	errInvalidLanguage = errors.New("language is invalid")
)

func (d *ftDetector) register(pat, lang string) (err error) {
	switch {
	case pat == "":
		return errMissingPattern
	case lang == "":
		return errMissingLanguage
	case slices.Index(SupportedLanguages(), lang) < 0:
		return fmt.Errorf("%w: %q", errInvalidLanguage, lang)
	}

	switch {
	case contains(pat, "*", "[", "?") || contains(pat, sep):
		if d.Glob == nil {
			d.Glob = map[string]string{}
		}

		d.Glob[pat] = lang
	case strings.HasPrefix(pat, "."):
		if d.Ext == nil {
			d.Ext = map[string]string{}
		}

		d.Ext[pat] = lang
	default:
		if d.Basename == nil {
			d.Basename = map[string]string{}
		}

		d.Basename[pat] = lang
	}

	return
}

func (d ftDetector) detect(fname string) string {
	if lang := detectByModeline(fname); lang != "" {
		return lang
	}

	for glob, lang := range d.Glob {
		// NOTE: We do not want to alter the fname for future iteratios,
		// nor for the remaining checks.
		fname := fname

		countGlob, countFname := strings.Count(glob, sep), strings.Count(fname, sep)
		if countFname < countGlob {
			continue
		} else if countFname != countGlob {
			comps := []string{}

			// we need the subpath from fname having as many levels as glob
			for range countGlob + 1 {
				comps = append([]string{filepath.Base(fname)}, comps...)
				fname = filepath.Dir(fname)
			}

			fname = strings.Join(comps, sep)
		}

		if ok, err := filepath.Match(glob, fname); err == nil && ok {
			return lang
		}
	}

	if v, ok := d.Basename[filepath.Base(fname)]; ok {
		return v
	}

	if v, ok := d.Ext[filepath.Ext(fname)]; ok {
		return v
	}

	return "unknown"
}

// See :he modeline for details. This is a pretty relaxed regex, can match even invalid lines, as long
// as they have the vi/vim/ex: prefix and the ft/filetype/syntax=<lang> component.
var vimModelineRx = regexp.MustCompile(`(?:^|\s|\t)(?:[Vv]im?|ex|[Vv]ox):\s*(?:set[\s\t])?.*(?:filetype|ft|syntax)[\s\t]*=[\s\t]*(\w+)(?:$|\s|:)`)

func detectByModeline(fname string) (lang string) {
	f, err := os.Open(fname)
	if err != nil {
		return ""
	}
	defer f.Close()

	line, r := "", bufio.NewReader(f)

	// TODO: We currently only inspect the 1st line.
	// We may want to inspect the 1st 5 (which is the modelines default).
	// Probably will not support the last 5 (or making it configurable) though,
	// don't want to get overboard with it. Even with this alone in place, end
	// users now have a way to override filetypes from within files.
	// Exact compatibility with vi/vim is not really an end goal.
	for {
		curr, isPrefix, err := r.ReadLine()
		if err != nil {
			return ""
		}

		line += string(curr)

		if !isPrefix {
			break
		}
	}

	lang = extractFromModeline(line)
	if slices.Index(SupportedLanguages(), lang) < 0 {
		return ""
	}

	return
}

func extractFromModeline(line string) (lang string) {
	matches := vimModelineRx.FindStringSubmatch(line)
	if len(matches) < 2 {
		return
	}

	return matches[1]
}

func contains(s string, opts ...string) (ok bool) {
	for _, opt := range opts {
		if strings.Contains(s, opt) {
			return true
		}
	}

	return
}

func init() {
	if err := ft.load(ftDetect); err != nil {
		panic(err)
	}
}
