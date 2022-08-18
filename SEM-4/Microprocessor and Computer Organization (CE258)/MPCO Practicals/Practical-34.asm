
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h   

MOV AX,7Ah
MOV BX,46H
ADD AX,BX
MOV [2098H],AX
PUSHF
POP [2097H]    

ret



