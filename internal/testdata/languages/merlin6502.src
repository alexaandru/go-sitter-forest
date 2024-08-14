* Hello World Example
        ORG     $300
COUT    EQU     $FDED
        LDY     #$00
:LOOP   LDA     HELLO,Y
        JSR     COUT
        INY
        CPY     #$0C
        BNE     :LOOP
        RTS
HELLO   ASC     "HELLO WORLD!"
