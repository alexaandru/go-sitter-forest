(frontmatter (content) @injection.content
  (#set! injection.language "yaml")
  (#set! injection.combined)
)

; catppuccin/whiskers-specific
(
  (frontmatter) @fm
    (#match? @fm "whiskers:\\s*\\n(?:\\s{2,}\\S.*\\n)*\\s{2,}filename:\\s*.+\\.toml")
  (content) @injection.content
  (#set! injection.language "toml")
  (#set! injection.combined)
)
(
  (frontmatter) @fm
    (#match? @fm "whiskers:\\s*\\n(?:\\s{2,}\\S.*\\n)*\\s{2,}filename:\\s*.+\\.yaml")
  (content) @injection.content
  (#set! injection.language "yaml")
  (#set! injection.combined)
)
(
  (frontmatter) @fm
    (#match? @fm "whiskers:\\s*\\n(?:\\s{2,}\\S.*\\n)*\\s{2,}filename:\\s*.+\\.json")
  (content) @injection.content
  (#set! injection.language "json")
  (#set! injection.combined)
)
(
  (frontmatter) @fm
    (#match? @fm "whiskers:\\s*\\n(?:\\s{2,}\\S.*\\n)*\\s{2,}filename:\\s*.+\\.html")
  (content) @injection.content
  (#set! injection.language "html")
  (#set! injection.combined)
)
(
  (frontmatter) @fm
    (#match? @fm "whiskers:\\s*\\n(?:\\s{2,}\\S.*\\n)*\\s{2,}filename:\\s*.+\\.css")
  (content) @injection.content
  (#set! injection.language "css")
  (#set! injection.combined)
)
