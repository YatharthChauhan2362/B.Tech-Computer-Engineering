               
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

MOV CL, 010H
MOV BL, 0F0H  

ADD CL, BL
MOV [2040H], CL

PUSHF
POP AX

MOV DX, 0FFBFH
AND AX, DX 

PUSH AX
POPF 

ret
