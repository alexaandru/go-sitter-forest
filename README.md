# a Go Sitter Forest 🌳
_Where a Gopher wanders around and meets lots of 🌳 Sitters..._

First of all, giving credits where they are due:

This repository started as a fork of @smacker's [go-tree-sitter](https://github.com/smacker/go-tree-sitter) repo
until I realized I don't want to also handle the bindings library itself
(i.e. the stuff in the root of the repo, exposing `sitter.Language` type
itself & co.), I just want a (big) collection of all the [tree-sitter](https://github.com/tree-sitter/tree-sitter)
parsers I can add and still use the bindings library from the original repo.

So here it is: started with the parsers and the automation from the above
mentioned repo then added a bunch more parsers on top of it and updated
automation (to support more parsers and also to automatically update the
PARSERS.md file, etc/).

See [Parsers](PARSERS.md) for a list of supported (and planned) parsers.
The end goal is (at least) parity with [nvim_treesitter](https://github.com/nvim-treesitter/nvim-treesitter?tab=readme-ov-file#supported-languages).

## Naming Convention

The lang name used is the same as tree sitter lang name (lower case, underscore
instead of spaces) and the same as the query folder name.

This keeps things simple and consistent.

In rare cases, the Go package name differs from the language name: 
- `go` actually has the package name `Go` because `package go` does not go well in Go
  (pun intended) but otherwise the language name remains "go";
- `func` language, same problem as above, so package name is actually `FunC`
  (but everything else is `func` as normal: folder, lang name, etc.).

Also, some languages may have names that are not very straightforward acronyms.
In those cases, an `altName` field will be populated, i.e. `requirements` lang
has an `altName` of `Pip requirements`, `query` has `Tree-Sitter Query Language`
and so on. Search [grammar.json](grammars.json) for
your grammar of interest.

## Usage

See the [README](https://github.com/smacker/go-tree-sitter/blob/master/README.md) in go-tree-sitter.

This repo only gives you the `GetLanguage()` part, you will still use the parent
repo for all your interactions with the tree.

You can use the parsers in here exactly the same way (import them one by one, etc.):

```Go
package main

import (
	"context"
	"fmt"

	"github.com/alexaandru/go-sitter-forest/ada"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

func main() {
	content := []byte("your source code goes here")
	node, err := sitter.ParseCtx(context.TODO(), content, ada.GetLanguage())
	if err != nil {
		fmt.Println(err)
	} else {
		// Do something interesting with the parsed tree...
		fmt.Println(node)
	}
}
```

Additionally, if (and only IF) you want to use ALL the parsers (beware, your binary
size **will be huge**, as in 200MB+ huge) then you can use the root package, i.e.:

```Go
package main

import (
    forest "github.com/alexaandru/go-sitter-forest"
    sitter "github.com/alexaandru/go-tree-sitter-bare"
)

func main() {
    content := []byte("your source code goes here")
    parser := sitter.NewParser()
    parser.SetLanguage(forest.Lang("ada"))

    // ...
}
```

this way you can fetch and use any of the parsers, without having to manually import
all of them. You should rarely need this though, unless you're writing a text editor
or something.

A third way, ~and perhaps the most convenient~ (no, it's not, it's \~200MB with all
parsers built into the binary whereas all parsers built as plugins take \~1.65GB),
is to use the included [Plugins.make](Plugins.make)
makefile, which allows easy creation of any and all plugins. Simply copy it to
your repo, and then you can easily `make -f Plugins.make plugin-ada`, etc. or
use the `plugin-all` target which creates all the plugins.

Then you can selectively use them in your app using the [plugins mechanism](https://pkg.go.dev/plugin).

**IMPORTANT:** You must use `-trimpath` when building your app, when using plugins
(the [Plugins.make](Plugins.make) file already includes it, but the app that uses them also needs it).

### Info

Besides getting the `GetLanguage()` function for each lang, you can also retrieve
it's information (it's corresponding `grammars.json` entry) via the `Info()` function
available in all 3 usage modes: library, "bulk loader" (forest package) and plugin.

The returned `Grammar` type implements `Stringer` so it should give a nice summary
when printed (to screen or logs, etc.).

## Parser Code Changes

For transparency, any and all changes made to the parsers' (and, to be clear, I
include in this term ALL the files coming from parsers, not just parser.c) files
are documented below.

For one thing ALL changes are fully automated (any exceptions are noted below),
no change is ever made manually, so inspecting the automation should give you a
clear picture of all the changes performed to the code, changes which are detailed below:

- the include paths are rewritten to use a flat structure (i.e. `"tree_sitter/parser.h"`
  becomes `"parser.h"`); This makes the automation simpler as we download all files from
  whatever folders are on the source on a single folder on destination;
- for YAML, the grammar `scanner.cc` includes `schema.generated.cc` file which causes `cgo`
  to compile schema.generated.cc twice and throw duplicate symbols error. The solution
  chosen was to copy the content `schema.generated.cc` into `scanner.cc` and set the former
  to zero bytes; this way all the code is in one file and the compilation is possible;
- for parsers that include a `tag.h` file: the `TAG_TYPES_BY_TAG_NAME` variable clashes
  between them (when those parsers are all included into one app). The solution chosen
  was to rename the variable by adding the `_<lang>` suffix, i.e., we currently have:
  - `TAG_TYPES_BY_TAG_NAME_astro`;
  - `TAG_TYPES_BY_TAG_NAME_html`;
  - `TAG_TYPES_BY_TAG_NAME_svelte`;
  - `TAG_TYPES_BY_TAG_NAME_vue`;
- **EXCEPTION** MANUAL changes:
  - `org` and `beancount` parsers conflict at scanner level. There were several
    functions that clashed between the two, as a result, as a POC for a future automated
    fix for this, I manually renamed the offending identifiers in `org` parser by
    appending the `_org` suffix to them (i.e. `serialize` -> `serialize_org`, etc.);
    If this works well, it will be turned into an automated fix as well, and this
    manual exception removed.

## Roadmap

- the current automation is nice & easy to use but also a bit... "lacking":
  it mechanically downloads whatever parser files are in there discounting
  the fact that they may be (and likely are) generated with a different
  `tree-sitter` version, then the version of the `tree-sitter` the sitter Go
  library is based upon, which at the time of writing this is 0.20.9;
  So we need a plan to keep them in sync:
  - repurpose the automation to download THE GRAMMAR + dependencies (C files
    manually created and NOT generated by `tree-sitter`, like custom scanners,
    etc.);
  - recompile them using a `tree-sitter` package that matches the version of
    the Go sitter library;
  - use the resulted parser files;
- switching to the above model will also naturally enable the remaining 9
  parsers which need precisely that: their files to be regenerated using
  `tree-sitter`;
- need some automation around working with so many Go modules, in particular:
  - updating tag on a parser after a parser update;
  - updating forest (root package) to point to the latest tag of a parser after
    a parser update;
  - updating the tag for the forest itself;
  - also need to update the parsers automation to create a Go module for a new
    parser automatically.
