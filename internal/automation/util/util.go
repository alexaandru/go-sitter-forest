// Package util holds a few useful functions both for the forest package
// as well as for automation.
package util

// NormalizeLangPackName normalizes the language and package names.
// Normally (in ~98% of the cases) the language, package and folder name
// are identical. In a few cases however, it is not (see the README).
func NormalizeLangPackName(langIn string) (lang, pack, silencer string) {
	lang, pack = langIn, langIn

	switch lang {
	case "go":
		pack = "Go"
	case "func":
		pack = "FunC"
	case "context":
		pack = "ConTeXt"
	case "cobol":
		lang = "COBOL"
	case "dotenv":
		lang = "env"
	case "walnut":
		lang = "cwal"
	case "janet":
		lang = "janet_simple"
	}

	switch langIn {
	case "unison":
		silencer = "//#cgo CFLAGS: -Wno-stringop-overflow"
	case "cleancopy":
		silencer = "//#cgo CFLAGS: -Wno-discarded-qualifiers -Wno-incompatible-pointer-types -w"
	case "htmlaskama":
		silencer = "//#cgo CFLAGS: -Wno-builtin-declaration-mismatch"
	case "note":
		silencer = "//#cgo CFLAGS: -Wno-implicit-function-declaration -Wno-builtin-declaration-mismatch"
	case "ott":
		silencer = "//#cgo CFLAGS: -Wno-stringop-overflow"
	}

	if silencer != "" {
		silencer = "\n" + silencer
	}

	return
}
