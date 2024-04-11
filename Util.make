# vim:set ft=make:

# Various helper targets to assist with working with so many Go modules.

FIND_PARSERS = find . -maxdepth 1 -type d ! -path ./.git ! -path ./internal ! -path ./tmp ! -path ./node_modules ! -path .

go_get_latest:
	@$(FIND_PARSERS)|while read x; do export lang=$$(basename $$x); go get github.com/alexaandru/go-sitter-forest/$${lang}@latest; sleep 0.1; done

git_tag_with:
	@[ -z '${TAG}' ] && echo "You must pass tag, in the vX.Y.Z form" || $(FIND_PARSERS)|while read x; do export lang=$$(basename $$x); git tag $${lang}/${TAG}; done

list_all_parsers:
	@$(FIND_PARSERS)|sort

list_parsers_without_modules:
	@$(FIND_PARSERS) ! -exec test -e "{}/go.mod" ';' -print

clean:
	@rm -rfv *.cov tmp auto.log

nvim_diff:
	@curl -so tmp/README.md https://raw.githubusercontent.com/nvim-treesitter/nvim-treesitter/master/README.md
	@diff <(sed -n '/<!--parserinfo-->/,/<!--parserinfo-->/{/<!--parserinfo-->/! p}' tmp/README.md|cut -f3 -d\[|cut -f1 -d\]|sort) \
		<(sed -n '/<!--parserinfo-->/,/<!--parserinfo-->/{/<!--parserinfo-->/! p}' PARSERS.md|cut -f3 -d\[|cut -f1 -d\]|sort)

.PHONY: clean
