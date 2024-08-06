//go:build !plugin

package yarnlock_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/yarnlock"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `xhr@^2.0.1:
  version "2.5.0"
  resolved "https://registry.yarnpkg.com/xhr/-/xhr-2.5.0.tgz#bed8d1676d5ca36108667692b74b316c496e49dd"
  integrity sha512-4nlO/14t3BNUZRXIXfXe+3N6w3s1KoxcJUUURctd64BLRe67E4gRwp4PjywtDY72fXpZ1y6Ch0VZQRY/gMPzzQ==
  dependencies:
    global "~4.3.0"
    is-function "^1.0.1"
    parse-headers "^2.0.0"
    xtend "^4.0.0"

xml-parse-from-string@^1.0.0:
  version "1.0.1"
  resolved "https://registry.yarnpkg.com/xml-parse-from-string/-/xml-parse-from-string-1.0.1.tgz#a9029e929d3dbcded169f3c6e28238d95a5d5a28"
  integrity sha1-qQKekp09vN7RafPG4oI42VpdWig=

xml2js@^0.4.5:
  version "0.4.19"
  resolved "https://registry.yarnpkg.com/xml2js/-/xml2js-0.4.19.tgz#686c20f213209e94abf0d1bcf1efaa291c7827a7"
  integrity sha512-esZnJZJOiJR9wWKMyuvSE1y6Dq5LCuJanqhxslH2bxM6duahNZ+HMpCLhBQGZkbX6xRf8x1Y2eJlgt2q3qo49Q==
  dependencies:
    sax ">=0.6.0"
    xmlbuilder "~9.0.1"

xmlbuilder@~9.0.1:
  version "9.0.7"
  resolved "https://registry.yarnpkg.com/xmlbuilder/-/xmlbuilder-9.0.7.tgz#132ee63d2ec5565c557e20f4c22df9aca686b10d"
  integrity sha1-Ey7mPS7FVlxVfiD0wi35rKaGsQ0=

xtend@^4.0.0:
  version "4.0.1"
  resolved "https://registry.yarnpkg.com/xtend/-/xtend-4.0.1.tgz#a5c6d532be656e23db820efb943a1f04998d63af"
  integrity sha1-pcbVMr5lbiPbgg77lDofBJmNY68=

y18n@^3.2.0:
  version "3.2.1"
  resolved "https://registry.yarnpkg.com/y18n/-/y18n-3.2.1.tgz#6d15fba884c08679c0d77e88e7759e811e07fa41"
  integrity sha1-bRX7qITAhnnA136I53WegR4H+kE=

"y18n@^3.2.1 || ^4.0.0":
  version "4.0.0"
  resolved "https://registry.yarnpkg.com/y18n/-/y18n-4.0.0.tgz#95ef94f85ecc81d007c264e190a120f0a3c8566b"
  integrity sha512-r9S/ZyXu/Xu9q1tYlpsLIsa3EeLXXk0VwlxqTcFRfg9EhMW+17kbt9G0NrgCmhGb5vT2hyhJZLfDGx+7+5Uj/w==

yallist@^2.1.2:
  version "2.1.2"
  resolved "https://registry.yarnpkg.com/yallist/-/yallist-2.1.2.tgz#1c11f9218f076089a47dd512f93c6699a6a81d52"
  integrity sha1-HBH5IY8HYImkfdUS+TxmmaaoHVI=

yallist@^3.0.0, yallist@^3.0.2:
  version "3.0.2"
  resolved "https://registry.yarnpkg.com/yallist/-/yallist-3.0.2.tgz#8452b4bb7e83c7c188d8041c1a837c773d6d8bb9"
  integrity sha1-hFK0u36Dx8GI2AQcGoN8dz1ti7k=

yargs-parser@7.0.0:
  version "7.0.0"
  resolved "https://registry.yarnpkg.com/yargs-parser/-/yargs-parser-7.0.0.tgz#8d0ac42f16ea55debd332caf4c4038b3e3f5dfd9"
  integrity sha1-jQrELxbqVd69MyyvTEA4s+P139k=
  dependencies:
    camelcase "^4.1.0"

yargs-parser@^11.1.1:
  version "11.1.1"
  resolved "https://registry.yarnpkg.com/yargs-parser/-/yargs-parser-11.1.1.tgz#879a0865973bca9f6bab5cbdf3b1c67ec7d3bcf4"
  integrity sha512-C6kB/WJDiaxONLJQnF8ccx9SEeoTTLek8RVbaOIsrAUS8VrBEXfmeSnCZxygc+XC2sNMBIwOOnfcxiynjHsVSQ==
  dependencies:
    camelcase "^5.0.0"
    decamelize "^1.2.0"

yargs@3.32.0:
  version "3.32.0"
  resolved "https://registry.yarnpkg.com/yargs/-/yargs-3.32.0.tgz#03088e9ebf9e756b69751611d2a5ef591482c995"
  integrity sha1-AwiOnr+edWtpdRYR0qXvWRSCyZU=
  dependencies:
    camelcase "^2.0.1"
    cliui "^3.0.3"
    decamelize "^1.1.1"
    os-locale "^1.4.0"
    string-width "^1.0.1"
    window-size "^0.1.4"
    y18n "^3.2.0"

yargs@^12.0.5:
  version "12.0.5"
  resolved "https://registry.yarnpkg.com/yargs/-/yargs-12.0.5.tgz#05f5997b609647b64f66b81e3b4b10a368e7ad13"
  integrity sha512-Lhz8TLaYnxq/2ObqHDql8dX8CJi97oHxrjUcYtzKbbykPtVW9WB+poxI+NM2UIzsMgNCZTIf0AQwsjK5yMAqZw==
  dependencies:
    cliui "^4.0.0"
    decamelize "^1.2.0"
    find-up "^3.0.0"
    get-caller-file "^1.0.1"
    os-locale "^3.0.0"
    require-directory "^2.1.1"
    require-main-filename "^1.0.1"
    set-blocking "^2.0.0"
    string-width "^2.0.0"
    which-module "^2.0.0"
    y18n "^3.2.1 || ^4.0.0"
    yargs-parser "^11.1.1"

yauzl@2.4.1:
  version "2.4.1"
  resolved "https://registry.yarnpkg.com/yauzl/-/yauzl-2.4.1.tgz#9528f442dab1b2284e58b4379bb194e22e0c4005"
  integrity sha1-lSj0QtqxsihOWLQ3m7GU4i4MQAU=
  dependencies:
    fd-slicer "~1.0.1"
`
	expected = "(lock_file (dependency name: (identifier) (semver (major) (minor) (patch)) (dependency_body (version (semver (major) (minor) (patch))) (resolved (url)) (integrity (hash)) (dependencies (dependency_list (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))))))) (dependency name: (identifier) (semver (major) (minor) (patch)) (dependency_body (version (semver (major) (minor) (patch))) (resolved (url)) (integrity (hash)))) (dependency name: (identifier) (semver (major) (minor) (patch)) (dependency_body (version (semver (major) (minor) (patch))) (resolved (url)) (integrity (hash)) (dependencies (dependency_list (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))))))) (dependency name: (identifier) (semver (major) (minor) (patch)) (dependency_body (version (semver (major) (minor) (patch))) (resolved (url)) (integrity (hash)))) (dependency name: (identifier) (semver (major) (minor) (patch)) (dependency_body (version (semver (major) (minor) (patch))) (resolved (url)) (integrity (hash)))) (dependency name: (identifier) (semver (major) (minor) (patch)) (dependency_body (version (semver (major) (minor) (patch))) (resolved (url)) (integrity (hash)))) (dependency name: (url) (ERROR (semver (major) (minor) (patch)) (UNEXPECTED '|')) (semver (major) (minor) (patch)) (dependency_body (version (semver (major) (minor) (patch))) (resolved (url)) (integrity (hash)))) (dependency name: (identifier) (semver (major) (minor) (patch)) (dependency_body (version (semver (major) (minor) (patch))) (resolved (url)) (integrity (hash)))) (dependency name: (identifier) (semver (major) (minor) (patch)) name: (identifier) (semver (major) (minor) (patch)) (dependency_body (version (semver (major) (minor) (patch))) (resolved (url)) (integrity (hash)))) (dependency name: (identifier) (semver (major) (minor) (patch)) (dependency_body (version (semver (major) (minor) (patch))) (resolved (url)) (integrity (hash)) (dependencies (dependency_list (dependency_entry (identifier) (semver (major) (minor) (patch))))))) (dependency name: (identifier) (semver (major) (minor) (patch)) (dependency_body (version (semver (major) (minor) (patch))) (resolved (url)) (integrity (hash)) (dependencies (dependency_list (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))))))) (dependency name: (identifier) (semver (major) (minor) (patch)) (dependency_body (version (semver (major) (minor) (patch))) (resolved (url)) (integrity (hash)) (dependencies (dependency_list (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))))))) (dependency name: (identifier) (semver (major) (minor) (patch)) (dependency_body (version (semver (major) (minor) (patch))) (resolved (url)) (integrity (hash)) (dependencies (dependency_list (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))) (dependency_entry (identifier) (ERROR (semver (major) (minor) (patch)) (UNEXPECTED '|')) (semver (major) (minor) (patch))) (dependency_entry (identifier) (semver (major) (minor) (patch))))))) (dependency name: (identifier) (semver (major) (minor) (patch)) (dependency_body (version (semver (major) (minor) (patch))) (resolved (url)) (integrity (hash)) (dependencies (dependency_list (dependency_entry (identifier) (semver (major) (minor) (patch))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), yarnlock.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
