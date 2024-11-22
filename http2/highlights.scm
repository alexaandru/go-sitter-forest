(method) @keyword
(url) @text.uri
(variable_declaration) @attribute
(variable_declaration name: (identifier) @var (#lua-match? @var "request.title")) @comment.info
(variable_declaration name: (identifier) @var (#lua-match? @var "request.flags")) @comment.error
(variable_ref) @attribute
(header name: (_) @property)

(http_version) @tag

(json_key_value key: _* @property)
(url_encoded_key_value key: (_) @property)
(string) @string
(number) @number
(boolean) @boolean
(null) @constant.builtin

(status_code) @property
(reason_phrase) @keyword

(separator) @comment
