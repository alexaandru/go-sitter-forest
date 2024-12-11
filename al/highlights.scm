; Keywords
[
  "table"
  "TABLE"
  "Table"
  "codeunit"
  "CODEUNIT"
  "Codeunit"
  "procedure"
  "PROCEDURE"
  "Procedure"
  "begin"
  "BEGIN"
  "Begin"
  "end"
  "END"
  "End"
  "if"
  "IF"
  "If"
  "then"
  "THEN"
  "Then"
  "else"
  "ELSE"
  "Else"
  "case"
  "CASE"
  "Case"
  "repeat"
  "REPEAT"
  "Repeat"
  "until"
  "UNTIL"
  "Until"
  "var"
  "VAR"
  "Var"
  "temporary"
  "TEMPORARY"
  "Temporary"
  "trigger"
  "TRIGGER"
  "Trigger"
  "local"
  "LOCAL"
  "Local"
] @keyword

; Built-in types
[
  "BLOB"
  "Blob" 
  "blob"
  "Boolean" 
  "BOOLEAN"
  "Code"
  "Date"
  "DATE"
  "DateTime"
  "DATETIME"
  "Decimal"
  "DECIMAL"
  "Duration"
  "DURATION"
  "Guid"
  "GUID"
  "Integer"
  "INTEGER"
  "Label"
  "LABEL"
  "Option"
  "OPTION"
  "RecordId"
  "RECORDID"
  "Text"
  "TEXT"
  "Time"
  "TIME"
] @type.builtin

; Operators
[
  ":="
  "="
  "<"
  ">"
  "<="
  ">="
  "<>"
  "+"
  "-"
  "*"
  "/"
  "::"
] @operator

; Built-in functions
; Date/Time Functions
((identifier) @function.builtin
 (#match? @function.builtin "^(CURRENTDATETIME|CurrentDateTime|Currentdatetime)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(CURRENTDATE|CurrentDate|Currentdate)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(CURRENTTIME|CurrentTime|Currenttime)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(TODAY|Today|today)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(WORKDATE|WorkDate|Workdate)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(CREATEDATETIME|CreateDateTime|Createdatetime)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(TIME|Time|time)$"))

; System Functions
((identifier) @function.builtin
 (#match? @function.builtin "^(USERID|UserId|Userid)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(COMPANYNAME|CompanyName|Companyname)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(SERIALNUMBER|SerialNumber|Serialnumber)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(SESSIONID|SessionId|Sessionid)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(WINDOWSLOGGEDONUSER|WindowsLoggedOnUser|Windowsloggedonuser)$"))

; Math Functions
((identifier) @function.builtin
 (#match? @function.builtin "^(RANDOM|Random|random)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(RANDOMIZE|Randomize|randomize)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(ROUND|Round|round)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(ABS|Abs|abs)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(POWER|Power|power)$"))

; Database Functions
((identifier) @function.builtin
 (#match? @function.builtin "^(COUNT|Count|count)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(GETRANGEMIN|GetRangeMin|Getrangemin)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(GETRANGEMAX|GetRangeMax|Getrangemax)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(GETFILTERS|GetFilters|Getfilters)$"))

; String Functions
((identifier) @function.builtin
 (#match? @function.builtin "^(STRLEN|StrLen|Strlen)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(COPYSTR|CopyStr|Copystr)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(LOWERCASE|LowerCase|Lowercase)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(UPPERCASE|UpperCase|Uppercase)$"))
((identifier) @function.builtin
 (#match? @function.builtin "^(FORMAT|Format|format)$"))

; Function definitions
(procedure
  name: (_) @function)

; Function calls
(function_call
  function_name: (_) @function.call)
(method_call
  method: (_) @function.method)

; Variables and parameters
(parameter
  parameter_name: (_) @variable.parameter)
(variable_declaration
  name: (_) @variable)

; Properties
(property
  property_name: (_) @property)

; Field declarations
(field_declaration
  name: (_) @field)

; Object declarations
(table_declaration
  object_name: (_) @type)
(codeunit_declaration
  object_name: (_) @type)

; Numbers
(integer) @number

; Strings
(string_literal) @string


; Boolean literals
(boolean) @constant.builtin

; Punctuation
["(" ")" "{" "}" "[" "]" ";" ","] @punctuation.delimiter

; Object IDs
(object_id) @number

; Triggers
(field_trigger_declaration
  type: (_) @keyword.control)
