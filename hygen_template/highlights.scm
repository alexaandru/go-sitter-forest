; inherits: embedded_template

(template
  (frontmatter
    (metadata
      ((key) @property
        (#any-of? @property
          "to"
          "from"
          "force"
          "unless_exists"
          "inject"
          "after"
          "skip_if"
          "sh")))))

(template
  (frontmatter
    (metadata
      (value
        (string_value) @string))))
