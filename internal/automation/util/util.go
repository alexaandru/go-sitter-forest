// Package util holds a few useful functions both for the forest package
// as well as for automation.
package util

import (
	"bytes"
	"regexp"
	"slices"
)

var (
	// LuaMatchRx matches a lua-match predicate and it's corresponding pattern.
	LuaMatchRx = regexp.MustCompile(`#(?:not-)?lua-match\?.*?"(.*?)"\s*\)`)
	luaEscRx   = regexp.MustCompile(`(%)[^[:alpha:]]`)
	// https://www.lua.org/manual/5.3/manual.html#6.4.1
	// https://go.dev/src/regexp/syntax/doc.go
	luaCharClass2goRx = map[string]string{
		"%a": "[:alpha:]",  // All letters.
		"%c": "[:cntrl:]",  // All control characters.
		"%d": "[:digit:]",  // All digits.
		"%g": "[:print:]",  // All printable characters except space.
		"%l": "[:lower:]",  // All lowercase letters.
		"%p": "[:punct:]",  // All punctuation characters.
		"%s": "[:space:]",  // All space characters.
		"%u": "[:upper:]",  // All uppercase letters.
		"%w": "[:alnum:]",  // All alphanumeric characters.
		"%x": "[:xdigit:]", // All hexadecimal digits.
	}
)

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
	case "idris":
		lang = "idris2"
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

// QueryLuaMatch2Match converts all `lua-match?` and `not-lua-match?` predicates in
// a query with `match?` predicates and the corresponding Lua pattern to Go regexp.
// TODO: Implement verification?
// VerifyCount := bytes.Count(out, []byte("#lua-match? @")).
func QueryLuaMatch2Match(content []byte) (out []byte) {
	out = LuaMatchRx.ReplaceAllFunc(content, LuaPatternToGoRegexp)
	out = bytes.ReplaceAll(out, []byte("#lua-match?"), []byte("#match?"))
	out = bytes.ReplaceAll(out, []byte("#not-lua-match?"), []byte("#not-match?"))

	return
}

// LuaPatternToGoRegexp converts a Lua pattern to Go regexp.
func LuaPatternToGoRegexp(pat []byte) (rx []byte) {
	rx = slices.Clone(pat)

	for target, repl := range luaCharClass2goRx {
		rx = bytes.ReplaceAll(rx, []byte(target), []byte(repl))
	}

	rx = luaEscRx.ReplaceAllFunc(rx, func(match []byte) []byte {
		return bytes.Replace(match, []byte{'%'}, []byte{'\\'}, 1)
	})

	return
}
