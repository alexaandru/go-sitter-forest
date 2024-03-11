# vim:set ft=make:

go_get_latest:
	@find . -maxdepth 1 -type d ! -path ./.git ! -path ./internal ! -path .|while read x; do export lang=$$(basename $$x); go get github.com/alexaandru/go-sitter-forest/$${lang}@latest; sleep 0.1; done

git_tag_with:
	@[ -z '${TAG}' ] && echo "You must pass tag, in the vX.Y.Z form" || \
		find . -maxdepth 1 -type d ! -path ./.git ! -path ./internal ! -path .|while read x; do export lang=$$(basename $$x); git tag $${lang}/${TAG}; done
