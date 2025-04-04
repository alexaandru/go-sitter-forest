package forest

import (
	"cmp"
	"errors"
	"fmt"
	"path/filepath"
	"reflect"
	"regexp"
	"slices"
	"strings"
	"sync"
	"testing"
)

var (
	testFileExpRx      = regexp.MustCompile(`(?:modeline|shebang)_(.*)\d+`)
	characterClassesRx = regexp.MustCompile(`\[([a-zA-Z]+)]`)
)

func TestFTDetectorLoad(t *testing.T) {
	t.Skip("Tested implicitly via the entire test suite: if it passes, then the loading worked as expected")
}

func TestDetectLanguage(t *testing.T) { //nolint:tparallel // TODO
	t.Parallel()

	testCases := slices.Concat(
		generateModelineAndShebangFileTestCases(t),
		generateGlobTestCases(t),
		generateBasenameTestCases(t),
		generateExtTestCases(t),
	)

	allLangs, _ := filepath.Glob("*/binding.go") //nolint:errcheck // this one is safe
	for i, lang := range allLangs {
		allLangs[i] = filepath.Dir(lang)
	}

	testedLangs := &sync.Map{}

	for _, tc := range testCases {
		s, exp := tc[0], tc[1]
		t.Run(s+":"+exp, func(t *testing.T) {
			if act := DetectLanguage(s); act != exp {
				t.Fatalf("Expected %q got %q", exp, act)
			}

			testedLangs.Store(exp, true)
		})

		// Only try out this scenario with non-paths (basically, extensions+basename).
		// With paths, we may actually need to find the file on disk.
		if strings.Contains(s, sep) {
			continue
		}

		s = filepath.Join("foo", "bar", "baz", s)
		t.Run(s+":"+exp, func(t *testing.T) {
			if act := DetectLanguage(s); act != exp {
				t.Fatalf("Expected %q got %q", exp, act)
			}
		})
	}

	testedLangs.Range(func(k, _ any) bool {
		allLangs = slices.DeleteFunc(allLangs, func(s string) bool { return s == k.(string) }) //nolint:forcetypeassert // ok
		return true
	})

	if len(allLangs) > 0 {
		t.Fatalf("These langs have no test cases: %v", allLangs)
	}
}

func generateModelineAndShebangFileTestCases(t *testing.T) (testCases [][2]string) {
	t.Helper()

	modelines := filepath.Join("internal", "testdata", "modeline_*")
	shebangs := filepath.Join("internal", "testdata", "shebang_*")

	mlFiles, err := filepath.Glob(modelines)
	if err != nil {
		t.Fatal(err)
	}

	sbFiles, err := filepath.Glob(shebangs)
	if err != nil {
		t.Fatal(err)
	}

	files := slices.Concat(mlFiles, sbFiles)

	for _, file := range files {
		tokens := testFileExpRx.FindStringSubmatch(file)
		if len(tokens) < 2 {
			t.Fatalf("counld not infer expectation from %q", file)
		}

		testCases = append(testCases, [2]string{file, tokens[1]})
	}

	return
}

func generateGlobTestCases(t *testing.T) (testCases [][2]string) {
	t.Helper()

	for glob, lang := range ft.Glob {
		for _, s := range []string{"foo", ".bar", "foo-bar"} {
			glob = strings.ReplaceAll(glob, "*", s)

			if tokens := characterClassesRx.FindStringSubmatch(glob); len(tokens) > 1 {
				for _, r := range tokens[1] {
					tc := strings.ReplaceAll(glob, tokens[0], string(r))
					testCases = append(testCases, [2]string{tc, lang})
				}

				continue
			}

			testCases = append(testCases, [2]string{glob, lang})
		}
	}

	return
}

func generateBasenameTestCases(t *testing.T) (testCases [][2]string) {
	t.Helper()

	for ext, lang := range ft.Ext {
		testCases = append(testCases, [2]string{ext, lang})
	}

	return
}

func generateExtTestCases(t *testing.T) (testCases [][2]string) {
	t.Helper()

	for basename, lang := range ft.Basename {
		if strings.HasPrefix(basename, ".") {
			basename = filepath.Join("foo", basename)
		}

		testCases = append(testCases, [2]string{basename, lang})
	}

	return
}

func TestRegisterLanguage(t *testing.T) {
	d := ftDetector{}
	zero := ftDetector{}
	ftTodolang := ftDetector{
		Glob:     map[string]string{"foos/*.foo": "todolang", ".foos/bar/.foo": "todolang"},
		Basename: map[string]string{"foo": "todolang"},
		Ext:      map[string]string{".foo": "todolang"},
	}
	testCases := []struct {
		pat, lang string
		expErr    error
		exp       ftDetector
	}{
		{"", "", errMissingPattern, zero},
		{"", "go", errMissingPattern, zero},
		{"foo", "", errMissingLanguage, zero},
		{"foo", "bogus", errInvalidLanguage, zero},
		{"foos/*.foo", "todolang", nil, ftDetector{
			Glob: map[string]string{"foos/*.foo": "todolang"},
		}},
		{".foos/bar/.foo", "todolang", nil, ftDetector{
			Glob: map[string]string{"foos/*.foo": "todolang", ".foos/bar/.foo": "todolang"},
		}},
		{".foo", "todolang", nil, ftDetector{
			Glob: map[string]string{"foos/*.foo": "todolang", ".foos/bar/.foo": "todolang"},
			Ext:  map[string]string{".foo": "todolang"},
		}},
		{"foo", "todolang", nil, ftTodolang},
		// Repeat the above (should be no difference).
		{"foos/*.foo", "todolang", nil, ftTodolang},
		{".foos/bar/.foo", "todolang", nil, ftTodolang},
		{".foo", "todolang", nil, ftTodolang},
		{"foo", "todolang", nil, ftTodolang},
		// Repeat, but this time change lang (must overwrite it).
		{"foos/*.foo", "comment", nil, ftDetector{
			Glob:     map[string]string{"foos/*.foo": "comment", ".foos/bar/.foo": "todolang"},
			Basename: map[string]string{"foo": "todolang"},
			Ext:      map[string]string{".foo": "todolang"},
		}},
		{".foos/bar/.foo", "comment", nil, ftDetector{
			Glob:     map[string]string{"foos/*.foo": "comment", ".foos/bar/.foo": "comment"},
			Basename: map[string]string{"foo": "todolang"},
			Ext:      map[string]string{".foo": "todolang"},
		}},
		{".foo", "comment", nil, ftDetector{
			Glob:     map[string]string{"foos/*.foo": "comment", ".foos/bar/.foo": "comment"},
			Basename: map[string]string{"foo": "todolang"},
			Ext:      map[string]string{".foo": "comment"},
		}},
		{"foo", "comment", nil, ftDetector{
			Glob:     map[string]string{"foos/*.foo": "comment", ".foos/bar/.foo": "comment"},
			Basename: map[string]string{"foo": "comment"},
			Ext:      map[string]string{".foo": "comment"},
		}},
		// Repeat, but this time change pat (should add it).
		{"foosa/*.foo", "comment", nil, ftDetector{
			Glob: map[string]string{
				"foos/*.foo": "comment", "foosa/*.foo": "comment",
				".foos/bar/.foo": "comment",
			},
			Basename: map[string]string{"foo": "comment"},
			Ext:      map[string]string{".foo": "comment"},
		}},
		{".foosa/bar/.foo", "comment", nil, ftDetector{
			Glob: map[string]string{
				"foos/*.foo": "comment", "foosa/*.foo": "comment",
				".foos/bar/.foo": "comment", ".foosa/bar/.foo": "comment",
			},
			Basename: map[string]string{"foo": "comment"},
			Ext:      map[string]string{".foo": "comment"},
		}},
		{".foosa", "comment", nil, ftDetector{
			Glob: map[string]string{
				"foos/*.foo": "comment", "foosa/*.foo": "comment",
				".foos/bar/.foo": "comment", ".foosa/bar/.foo": "comment",
			},
			Basename: map[string]string{"foo": "comment"},
			Ext:      map[string]string{".foo": "comment", ".foosa": "comment"},
		}},
		{"foosa", "comment", nil, ftDetector{
			Glob: map[string]string{
				"foos/*.foo": "comment", "foosa/*.foo": "comment",
				".foos/bar/.foo": "comment", ".foosa/bar/.foo": "comment",
			},
			Basename: map[string]string{"foo": "comment", "foosa": "comment"},
			Ext:      map[string]string{".foo": "comment", ".foosa": "comment"},
		}},
	}

	for _, tc := range testCases {
		t.Run(tc.pat+":"+tc.lang, func(t *testing.T) {
			if err := d.register(tc.pat, tc.lang); !errors.Is(err, tc.expErr) {
				t.Fatalf("Expected error %v got %v", tc.expErr, err)
			} else if !reflect.DeepEqual(d, tc.exp) {
				t.Fatalf("Expected %v got %#v", tc.exp, d)
			}
		})
	}
}

type modeTest struct {
	modeline, exp string
}

func TestDetectByModelineOrShebang(t *testing.T) {
	t.Skip("Tested implicitly via TestDetectLanguage()")
}

func TestExtractFromModeline(t *testing.T) {
	for _, pre1 := range []string{"", " ", "foobar ", "  \t", "foobar\t"} {
		for _, vi := range []string{"Vim", "Vi", "vim", "vi", "ex", "Vox", "vox"} {
			for _, pre2 := range []string{"", " ", "ts=4 ", " ts=4 ", "ts=4:", " ts=4 : ", "set ", " set ", "set ts=4 "} {
				for _, cmd := range []string{"ft", "filetype", "syntax", "ft ", "filetype ", "syntax ", "ft     ", "filetype\t\t\t  ", "   \t\t\t syntax   \t\t   \t\t   "} {
					for _, post := range []string{"", " ", "\t", "    ", "   \t   \t   "} {
						tc := modeTest{fmt.Sprintf("%s%s:%s%s=%sgo:",
							pre1, vi, pre2, cmd, post), "go"}

						t.Run(tc.modeline, func(t *testing.T) {
							if act := ft.extractFromModeline(tc.modeline); act != tc.exp {
								t.Fatalf("Expected %q got %q for %q", tc.exp, act, tc.modeline)
							}
						})
					}
				}
			}
		}
	}
}

func TestExtractFromShebang(t *testing.T) {
	for _, tc := range append(ft.shebangs(), SupportedLanguages()...) {
		for _, tpl := range []string{"#!/usr/bin/%s", "#! /usr/bin/%s", "#!\t\t\t\"/usr/bin/%s"} {
			for _, cmdTemplate := range []string{"%s", `%s"`, `%s" -w`, "env %s", `env" %s`, "%s9", "env %s3", "%s -w", "env %s -w", "%s -whatever -else --foo=bar", "env -i -S %s"} {
				for _, pre := range []string{"", "_bogus"} {
					cmd := fmt.Sprintf(cmdTemplate, tc)
					in := pre + fmt.Sprintf(tpl, cmd)

					t.Run(in, func(t *testing.T) {
						exp := ""
						if pre == "" {
							exp = cmp.Or(ft.Shebang[tc], tc)
						}

						// c3 is an actual lang, unlike python3 which we want reduced down to python
						if strings.Contains(in, "c3") && exp == "c" {
							exp = "c3"
						}

						if act := ft.extractFromShebang(in); act != exp {
							t.Fatalf("Expected %q got %q for %q", exp, act, in)
						}
					})
				}
			}
		}
	}
}
