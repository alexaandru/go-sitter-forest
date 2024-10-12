(template
  (frontmatter
    (metadata
      ((key) @key
      (#eq? @key "sh"))
      ((value ((string_value) @injection.content
        (#set! injection.language "bash")))))))

((code) @injection.content
  (#set! injection.language "javascript")
  (#set! injection.combined))
