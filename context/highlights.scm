; highlights.scm for tree-sitter-context

(text) @user.text
(title_setting (value (value_brace_group (value_brace_group_text) @user.text))) 




; (subtitle_setting (value (value_brace_group subtitle_name: (value_brace_group_text)))) @user.text

;(title_setting_text) @user.text
;(subtitle_setting_text) @user.text

(command_name) @command.name

(settings_block) @command.set
(option_block) @command.set

;(brace_group_start) @group.marker
;(brace_group_stop) @group.marker
;(command_group_start) @group.marker
;(command_group_stop) @group.marker
;(main_start) @group.marker
;(main_stop) @group.marker
;(command_block_start) @group.marker
;(command_block_stop) @group.marker

(line_comment) @comment

(escaped) @escaped

(inline_math) @math
