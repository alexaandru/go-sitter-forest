((array) @indent.align
  (#set! indent.open_delimiter "{")
  (#set! indent.close_delimiter "}"))

((struct) @indent.align
  (#set! indent.open_delimiter "[")
  (#set! indent.close_delimiter "]"))

((parenthesis) @indent.align
  (#set! indent.open_delimiter "(")
  (#set! indent.close_delimiter ")"))

((arguments) @indent.align
  (#set! indent.open_delimiter "(")
  (#set! indent.close_delimiter ")"))
