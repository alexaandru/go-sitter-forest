(comment) @comment @spell

(identifier) @variable

definition: (identifier) @variable.parameter

resource: (set_resource) @keyword.type

(number) @number

[
  "ppt"
  "ms"
  "px"
] @type.builtin

(mode_name) @string

(quoted_string) @string

[
  "{"
  "}"
  "["
  "]"
] @punctuation.bracket

"." @punctuation

[
  "="
  "or"
] @operator

[
  "on"
  "off"
  "enable"
  "disable"
  "yes"
  "no"
] @boolean

"none" @constant

[
  "smart_borders"
  "show_marks"
  "tiling_drag"
  "smart_gaps"
  "gaps"
  "exec"
  "exec_always"
  "focus_on_window_activation"
  "force_display_urgency_hint"
  "workspace_auto_back_and_forth"
  "focus_wrapping"
  "force_xinerama"
  "popup_during_fullscreen"
  "focus_wrapping"
  "ipc-socket"
  "client"
] @keyword

(focus_wrapping
  (focus_wrapping_value) @constant.builtin) @keyword

(focus_on_window_activation
  (focus_on_window_activation_value) @constant.builtin) @keyword

[
  "modifier"
  "smart"
  "ignore"
  "leave_fullscreen"
  "all"
  "titlebar"
  "swap_modifier"
  "smart"
  "focus_wrapping"
] @constant.builtin


"--no-startup-id" @argument
(gaps_option) @constant

(property) @property
