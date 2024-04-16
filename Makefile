check-updates update-all force-update-all update-bindings:
	@go run ./internal/automation $@

update-% force-update-%:
	@go run ./internal/automation $@

include Plugins.make
include Test.make
include Util.make

update: update-all test
	@git add -u .
	@git status
	@echo "Press enter to continue, Ctrl-C to exit"
	@read x && git commit -m Updated\ parsers && git push
	@make -s auto_tag
