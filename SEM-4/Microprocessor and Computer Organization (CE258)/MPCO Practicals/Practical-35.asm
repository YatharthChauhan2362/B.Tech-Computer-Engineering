               
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

MOV CX, 0002H
L1:

DEC CX
JNZ L1

MOV BX, 0FFBFH
PUSHF
POP AX 

AND AX, BX
PUSH AX
POPF

ret