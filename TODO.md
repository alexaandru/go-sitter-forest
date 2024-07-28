# TODO

## General

- update examples (files and snippets in this README) to include queries and filetype detection;
- with the aggressive addition of parsers (even experimental ones) we may need some mechanisms
  to filter them (no. of stars maybe? age? updates? updates/age ratio? TBD) and then use those
  filtering criteria to create "mini forests" (basically forests guarded by build tags). I really
  don't see ~400 parsers (getting there! :-D) being all used at once in a project (well, except
  in my own text editor, this is the reason this project exists in the first place), so maybe
  having forests by... "degrees of popularity" criteria maybe (or other, TBD) should be useful;
- and/or maybe I just tag the grammars and use those tags to create the forests? Though automatic
  criteria (like no. of stars) sounds more appealing than manually tagging 400 grammars...

## Automation

- filter automatically high memory usage parsers and run them one by one (at the end?);
- need to update the parsers automation to create a Go module for a new parser automatically;
  (go mod init+tidy, create \_keep.scm file, go work use, what else... TBD);
- need to be able to auto-delete files deleted remotely (i.e. if a scanner.c or whatever is deleted
  from the source repo, we should also be deleting it locally);

## Queries

There are largely two types of work needed for queries:

### 1. Support for all features in nvim queries: predicates, directives and modelines

See:

- https://github.com/nvim-treesitter/nvim-treesitter/blob/master/CONTRIBUTING.md#parser-configurations
- https://neovim.io/doc/user/treesitter.html#_treesitter-query-predicates and
  (to `go-tree-sitter-bare`).
  a decision is needed about what to keep in here and what to push upstream
  and `not-lua-match` predicates as well as suppor for `inherits` modeline, still
  Some of this work was already done with the introduction of support for `lua-match`

We just need to finish it by adding support for any and all missing predicates.

Also, an automated check of predicates would be nice, so that we know when
queries use predicates that we cannot currently process. We should probably
start with this one.

### 2. Query Automation related work

Right now, the way we support query inheritance is at the `forest.GetQuery()`
level, for pragmatic reasons: it has access to ALL the queries so it can resolve
any inheritance needs, whereas individual modules do not have that capability
(they only, and rightfully so, embed their own `*.scm` files). This in turn,
effectively means that when using the individual modules, inheritance is not
supported.

We could convert the inheritance mechanism from a dynamic one (at `forest.GetQuery()`
time) to a static one (at query update time, effectively generating queries with
inheritance modelines resolved) and then naturally, both individual modules as well
as the forest itself will deliver queries with inheritance resolved. This may be
the cleanest (and simplest) way forward.

## Filetype Detection

- there are many languages that don't have file extensions but are injections only
  languages: we need a mechanism for those as well, and file extension (or file name, etc.)
  is NOT it;
- cross verify our filetype.json against each parsers' own `package.json` -> `tree-sitter`
  -> `file-types` list, automated of course;
- MAYBE add a way to resolve file extension conflicts? That's a big MAYBE, we
  already have support for modeline which can control that on an individual file
  bases and projects using this library can make use of `forest.RegisterLanguage()`
  to set their own preferences (i.e. override based on user input/per project/etc.),
  so I'm not convinced I want to go down this rabbit hole;
- but at the very least I'd like the conflicts documented, for now.
