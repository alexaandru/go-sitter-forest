.DEFAULT_GOAL := check

check-updates update-all update-queries force-update-all update-bindings:
	@go run ./internal/automation $@

update-% force-update-% update-queries-%:
	@go run ./internal/automation $@

include Plugins.make
include Test.make
include Util.make

update: update-all test
	@git add -u .
	@git add */*.c */*.h
	@git status
	@echo "Press enter to continue, Ctrl-C to exit"
	@read x && git commit -m Updated\ parsers && git push
	@make -s auto_tag auto_update_forest
