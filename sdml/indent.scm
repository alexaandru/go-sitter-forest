[
 "is"
 "of"
 ] @indent

[
 "end"
 ] @indent.end

[
 (string)
 (line_comment)
 (function_body)
 ] @indent.auto

(constraint_environment_end) @indent.dedent

(function_signature "(" @indent ")" @indent.end)

(constraint_sentence "(" @indent ")" @indent.end)

(sequence_builder "{" @indent "}" @indent.end)

(actual_arguments "(" @indent ")" @indent.end)

(sequence_of_predicate_values "[" @indent "]" @indent.end)

(sequence_of_values "[" @indent "]" @indent.end)
