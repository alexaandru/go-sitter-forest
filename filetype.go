package forest

import (
	"cmp"
	_ "embed"
	"encoding/json"
	"errors"
	"fmt"
	"os"
	"path/filepath"
	"regexp"
	"strings"

	"golang.org/x/exp/maps"
)

// ftDetector is responsible for detecting the filetype based on various
// mechanisms, such as by modeline/shebang, by glob, by basename or by
// file extension, in that specific order. For modeline see
// https://vimdoc.sourceforge.net/htmldoc/options.html#modeline
type ftDetector struct {
	Shebang, Glob, Basename, Ext map[string]string
}

func (d *ftDetector) load(b []byte) (err error) {
	ftInv := ftDetectorInverted{}
	if err = json.Unmarshal(b, &ftInv); err != nil {
		return
	}

	d.Shebang = map[string]string{}
	d.Glob = map[string]string{}
	d.Basename = map[string]string{}
	d.Ext = map[string]string{}

	dot := func(s string) string { return "." + s }
	nop := func(s string) string { return s }
	fn := func(label string, dst map[string]string, src map[string][]string, pre func(string) string) error {
		for lang, pats := range src {
			if !SupportedLanguage(lang) && lang != "terraform" {
				return fmt.Errorf("%w: %s", ErrLanguageNotSupported, lang)
			}

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

	if err = fn("shebang", d.Shebang, ftInv.Shebang, nop); err != nil {
		return
	}

	if err = fn("glob", d.Glob, ftInv.Glob, nop); err != nil {
		return
	}

	if err = fn("basename", d.Basename, ftInv.Basename, nop); err != nil {
		return
	}

	if err = fn("extension", d.Ext, ftInv.Ext, dot); err != nil {
		return
	}

	return
}

type ftDetectorInverted struct {
	Shebang,
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
	case !SupportedLanguage(lang):
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
	if lang := d.detectByModelineOrShebang(fname); lang != "" {
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

var (
	// See :he modeline for details. This is a pretty relaxed regex, can match even invalid modelines,
	// as long as they have the vi/vim/ex: prefix and the ft/filetype/syntax=<lang> component.
	vimModelineRx = regexp.MustCompile(`(?:^|\s|\t)(?:[Vv]im?|ex|[Vv]ox):\s*(?:set[\s\t])?.*(?:filetype|ft|syntax)[\s\t]*=[\s\t]*(\w+)(?:$|\s|:)`)
	shebangRx     *regexp.Regexp
)

func (d ftDetector) detectByModelineOrShebang(fname string) (lang string) {
	f, err := os.Open(fname)
	if err != nil {
		return
	}
	defer f.Close()

	b := make([]byte, 255)
	n, err := f.Read(b)
	if err != nil {
		return
	}

	line := string(b[:n])
	for _, fn := range []func(string) string{d.extractFromModeline, d.extractFromShebang} {
		if lang = fn(line); SupportedLanguage(lang) {
			return
		}
	}

	return ""
}

func (d ftDetector) shebangs() []string {
	return maps.Keys(d.Shebang)
}

func (d ftDetector) extractFromModeline(line string) (lang string) {
	matches := vimModelineRx.FindStringSubmatch(line)
	if len(matches) < 2 {
		return
	}

	return matches[1]
}

func (d ftDetector) extractFromShebang(line string) (lang string) {
	matches := shebangRx.FindStringSubmatch(line)
	if len(matches) < 2 {
		return
	}

	lang = matches[1]

	return cmp.Or(d.Shebang[lang], lang)
}

func contains(s string, opts ...string) (ok bool) {
	for _, opt := range opts {
		if strings.Contains(s, opt) {
			return true
		}
	}

	return
}
