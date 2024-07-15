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
// mechanisms, such as by glob, by full path, by basename or by extension,
// in that specific order.
type ftDetector struct {
	// Modeline (implicit, only considers the very 1st line in file)
	// see https://vimdoc.sourceforge.net/htmldoc/options.html#modeline
	Glob,
	Fullpath,
	Basename,
	Ext map[string]string
}

func (d *ftDetector) load(b []byte) (err error) {
	ftjs := ftDetectorJSON{}
	if err := json.Unmarshal(b, &ftjs); err != nil {
		panic(err)
	}

	d.Fullpath = ftjs.Fullpath
	d.Glob = ftjs.Glob
	d.Ext = map[string]string{}
	d.Basename = map[string]string{}

	for lang, exts := range ftjs.ExtInverted {
		if len(exts) == 0 {
			exts = []string{lang}
		}

		for _, ext := range exts {
			ext = "." + ext
			if prev, ok := d.Ext[ext]; ok {
				return fmt.Errorf("%q extension is registered twice: {%q, %q}", ext, prev, lang)
			}

			d.Ext[ext] = lang
		}
	}

	for lang, names := range ftjs.BasenameInverted {
		for _, name := range names {
			if prev, ok := d.Basename[name]; ok {
				return fmt.Errorf("%q name is registered twice: {%q, %q}", name, prev, lang)
			}

			d.Basename[name] = lang
		}
	}

	return nil
}

type ftDetectorJSON struct {
	Glob,
	Fullpath map[string]string
	BasenameInverted,
	// If ext == lang you can set it to `null` (i.e. .scala and scala, .go and go, etc.).
	ExtInverted map[string][]string
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
// paths, the filename alone or even with just the file extension (including
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
// The pattern pat can be a glob, an absolute path, a filename or
// a file extension (incl. the leading dot).
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
	case contains(pat, "*", "[", "?"):
		if d.Glob == nil {
			d.Glob = map[string]string{}
		}

		d.Glob[pat] = lang
	case contains(pat, sep):
		if d.Fullpath == nil {
			d.Fullpath = map[string]string{}
		}

		d.Fullpath[pat] = lang
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

	if v, ok := d.Fullpath[fname]; ok {
		return v
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
