# vim:set ft=make:

go_get_latest:
	@find . -type d ! -path ./.git ! -path ./internal ! -path .|while read x; do export lang=$(basename $x); go get github.com/alexaandru/go-sitter-forest/$lang@latest; sleep 1; done
