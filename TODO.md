# TODO

- `git grep lua-match|wc -l` # => 388 parsers are using lua-match but it is not implemented
  by the go sitter binding library, thus they will never match; in the interim, we
  dynamically rewrite lua-match to match (and corresponding Lua patterns go Go regexp),
  which seems to work pretty well, but ultimately the best solution is for the sitter
  library to use lua (maybe?? we'll see how well this works);
- check out any other nvim specific predicates that we might be missing at:
  https://neovim.io/doc/user/treesitter.html#_treesitter-query-predicates;
  (and not just predicates, there are also `directives`!! and more modelines than just
  `inherits`); Bottom line, study
  https://github.com/nvim-treesitter/nvim-treesitter/blob/master/CONTRIBUTING.md#parser-configurations
  really well and see what we're still doing wrong with respect to handling nvim
  treesitter queries (and what work needs to be pushed to go-sitter-bare);
- once the above fix is validated a bit in reallife, move the fix to individual modules;
- update examples (files and snippets in this README) to include queries and filetype detection;
- filter automatically high memory usage parsers and run them one by one (at the end?);
- need to update the parsers automation to create a Go module for a new parser automatically;
  (go mod init+tidy, create \_keep.scm file, go work use, what else... TBD);
- need to be able to auto-delete files deleted remotely (i.e. if a scanner.c or whatever is deleted
  from the source repo, we should also be deleting it locally).
