; opc

[
  (adc_opcode)
  (and_opcode)
  (asl_opcode)
  (bcc_opcode)
  (bcs_opcode)
  (beq_opcode)
  (bit_opcode)
  (bmi_opcode)
  (bne_opcode)
  (bpl_opcode)
  (brk_opcode)
  (bvc_opcode)
  (bvs_opcode)
  (clc_opcode)
  (cld_opcode)
  (cli_opcode)
  (clv_opcode)
  (cmp_opcode)
  (cpx_opcode)
  (cpy_opcode)
  (dec_opcode)
  (dex_opcode)
  (dey_opcode)
  (eor_opcode)
  (inc_opcode)
  (inx_opcode)
  (iny_opcode)
  (jmp_opcode)
  (jsr_opcode)
  (lda_opcode)
  (ldx_opcode)
  (ldy_opcode)
  (lsr_opcode)
  (nop_opcode)
  (ora_opcode)
  (pha_opcode)
  (php_opcode)
  (pla_opcode)
  (plp_opcode)
  (rol_opcode)
  (ror_opcode)
  (rti_opcode)
  (rts_opcode)
  (sbc_opcode)
  (sec_opcode)
  (sed_opcode)
  (sei_opcode)
  (sta_opcode)
  (stx_opcode)
  (sty_opcode)
  (tax_opcode)
  (tay_opcode)
  (tsx_opcode)
  (txa_opcode)
  (tcs_opcode)
  (tya_opcode)
] @keyword

; numbers

[
  (bin_8)
  (dec_8)
  (hex_8)
  (bin_16)
  (dec_16)
  (hex_16)
] @number

(comment) @comment

; punctuation

[
  "("
  ")"
] @punctuation.bracket

[
  ","
] @punctuation.delimiter

(imm_prefix) @character.special

(label) @label

(symbol) @variable

; registers

[
  (acc_register)
  (x_register)
  (y_register)
] @constant.builtin

; control commands

[
  (ctrl_cmd)
] @function.macro

[
  (warning_keyword)
  (error_keyword)
  (ldwarning_keyword)
  (lderror_keyword)
] @keyword
