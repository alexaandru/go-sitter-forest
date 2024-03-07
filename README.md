# Go Bindings for Tree Sitter Parsers

First of all, giving credits where they are due:

This repository started as a fork of @smacker's [go-tree-sitter](https://github.com/smacker/go-tree-sitter) repo
until I realized I don't want to also handle the bindings library itself
(i.e. the one exposing `sitter.Language` type itself & co.), I just want a
(big) collection of all the [tree-sitter](https://github.com/tree-sitter/tree-sitter)
parsers I can add and still use the bindings library from the original repo.

So here it is: started with the parsers and the automation from the above
mentioned repo then added a bunch more parsers on top of it and updated
automation (to support more parsers and also to automatically update the
PARSERS.md file, etc/).

See [Parsers](PARSERS.md) for a list of supported (and planned) parsers.
The end goal is (at least) parity with [nvim_treesitter](https://github.com/nvim-treesitter/nvim-treesitter?tab=readme-ov-file#supported-languages).

## Usage

See the [README](https://github.com/smacker/go-tree-sitter/blob/master/README.md) in go-tree-sitter.

This repo only gives you the `GetLanguage()` part, you will still use the parent
repo for all your interactions with the tree.

You can use the parsers in here exactly the same way (import them one by one, etc.).
Additionally, if (and only IF) you want to use ALL the parsers (beware, your binary
size **will be huge**) then you can use the root package, i.e.:

```Go
import parsers "github.com/alexaandru/go-tree-sitter-parsers"

func main() {
    lang := parsers.Lang("go") // or any other
    // do something fun with lang in here...
}
```

this way you can fetch and use any of the parsers, without having to manually import
all of them.

### Naming Convention

The lang name used is the same as tree sitter lang name (lower case, underscore
instead of spaces) and the same as the query folder name.

This keeps things simple and consistent.

Exceptions:
- `go` actually has the package `golang` because `package go` does not go well in Go
  (pun intended) but otherwise the language name is "go";
- `query` is listed as "Tree-Sitter Query Language" in the parsers listing,
  for clarity, but otherwise it is referred to as `query` everywhere (Go package
  name, grammars.json, queries, etc.).

## Roadmap

- add all the remaining parsers (and keep them up to date);
- find a way to automate currently not-automated parsers: perl and sql - they do not
  commit the generated files to the repo, so the current automation doesn't work on them;
- (maybe) add nvim_treesitter queries in here too, as a submodule.
  Parsers are of limited use without a complementary set of good queries;
- (maybe) expose them also as plugins? Since the end goal is ~260+ parsers,
  embedding them all in a binary will be "unpleasant" to say the least. If I
  can make it easier for end users to generate them all as plugins, that would
  be nice;
- generate the binding files as part of automation (it's OK for tests to have
  some dummy data and FAIL to signal end users that they need to update them).
