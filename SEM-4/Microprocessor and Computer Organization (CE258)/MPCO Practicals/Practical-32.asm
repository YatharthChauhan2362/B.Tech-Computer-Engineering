
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

MOV BL, 50H
MOV BH, 50H
XOR BH, BL
NOT BH

ret




