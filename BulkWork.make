# vim:set ft=make:

FIND_PARSERS = find . -maxdepth 1 -type d ! -path ./.git ! -path ./internal ! -path ./tmp ! -path ./node_modules ! -path .

go_get_latest:
	@$(FIND_PARSERS)|while read x; do export lang=$$(basename $$x); go get github.com/alexaandru/go-sitter-forest/$${lang}@latest; sleep 0.1; done

git_tag_with:
	@[ -z '${TAG}' ] && echo "You must pass tag, in the vX.Y.Z form" || $(FIND_PARSERS)|while read x; do export lang=$$(basename $$x); git tag $${lang}/${TAG}; done

list_all_parsers:
	@$(FIND_PARSERS)|sort

list_parsers_without_modules:
	@$(FIND_PARSERS) ! -exec test -e "{}/go.mod" ';' -print
