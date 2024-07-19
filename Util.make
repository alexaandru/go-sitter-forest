# vim:set ft=make:

# Various helper targets to assist with working with so many Go modules.

FIND_PARSERS = find . -maxdepth 1 -type d ! -path ./.git ! -path ./internal ! -path ./tmp ! -path ./node_modules ! -path .

git_tag_with:
	@[ -z '${TAG}' ] && echo "You must pass tag, in the vX.Y.Z form" || $(FIND_PARSERS)|while read x; do export lang=$$(basename $$x); git tag $${lang}/${TAG}; done

list_all_parsers:
	@$(FIND_PARSERS)|sort

list_parsers_without_modules:
	@$(FIND_PARSERS) ! -exec test -e "{}/go.mod" ';' -print

clean:
	@rm -rfv *.cov tmp auto.log *.so

mktmp:
	@mkdir -p tmp

check: mktmp nvim_diff check-updates

nvim_diff:
	@curl -so tmp/README.md https://raw.githubusercontent.com/nvim-treesitter/nvim-treesitter/master/README.md
	@comm -23 <(sed -n '/<!--parserinfo-->/,/<!--parserinfo-->/{/<!--parserinfo-->/! p}' tmp/README.md|cut -f3 -d\[|cut -f1 -d\]|sort|sed -e 's/janet_simple/janet/'|grep -v terraform) \
		<(sed -n '/<!--parserinfo-->/,/<!--parserinfo-->/{/<!--parserinfo-->/! p}' PARSERS.md|cut -f3 -d\[|cut -f1 -d\]|sort)

auto_tag: test
	@export GIT_PAGER=cat; git diff --name-only HEAD^|grep '/'|grep -v 'grammar.json'|grep -v ^internal/|cut -f1 -d '/'|sort -u|while read x; do \
		export TAG=$$(git tag -l --sort=committerdate "$$x/*"| tail -n1); \
		export TAG_BASE=$$(echo $$TAG|cut -f1-2 -d.); \
		export PATCH_NO=$$(echo $$TAG|cut -f3 -d.); \
		export TAG_NEXT="$${TAG_BASE}.$$[$${PATCH_NO} + 1]"; \
		git tag $$TAG_NEXT; \
	done && git push --tag

auto_update_forest:
	@make -s list_all_parsers|while read x; do \
		export LANG=$$(basename $$x); \
		export TAG=$$(git tag -l --sort=committerdate "$$LANG/*"| tail -n1| cut -f2 -d/); \
		go get github.com/alexaandru/go-sitter-forest/$$LANG@$$TAG; \
	done && go mod tidy && make -s test && git diff && git add -u . && git commit -m Updated\ forest && git push && make -s auto_tag_forest

auto_tag_forest:
	@export TAG=$$(git tag -l --sort=committerdate "v1*"| tail -n1); \
		export TAG_BASE=$$(echo $$TAG|cut -f1-2 -d.); \
		export PATCH_NO=$$(echo $$TAG|cut -f3 -d.); \
		export TAG_NEXT="$${TAG_BASE}.$$[$${PATCH_NO} + 1]"; \
		git tag $$TAG_NEXT && git push --tag

updates-status:
	@make -s list_all_parsers|while read x; do \
		export LANG=$$(basename $$x); \
		export TAG_COUNT=$$(git tag -l --sort=committerdate "$$LANG/*"| wc -l); \
		export SIZE=$$(du -sb $$LANG|cut -f1); \
		echo "parsers/$$LANG,$$SIZE,$${TAG_COUNT}"; \
	done | treemap > updates.svg && xdg-open updates.svg

filetype-status:
	@echo "$$(jq '[.Shebang[]]|flatten|length' filetype.json) shebangs + $$(jq '[.Ext[]]|flatten|length' filetype.json) extensions + $$(jq '[.Basename[]]|flatten|length' filetype.json) filenames + $$(jq '[.Glob[]]|flatten|length' filetype.json) patterns recognized (= $$(jq '[.Shebang[], .Basename[], .Ext[], .Glob[]]|flatten|length' filetype.json))"

.PHONY: clean
