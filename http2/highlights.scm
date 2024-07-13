(method) @keyword
(url) @text.uri
(variable_declaration) @attribute
(variable_declaration name: (identifier) @var (#lua-match? @var "request.title")) @text.title
(variable_ref) @attribute
(header (header_name) @property)

(http_version) @tag

(json_key_value key: _* @property)
(url_encoded_key_value key: (url_encoded_key) @property)
(string) @string
(number) @number
(boolean) @boolean
(null) @constant.builtin

(status_code) @property
(reason_phrase) @keyword
