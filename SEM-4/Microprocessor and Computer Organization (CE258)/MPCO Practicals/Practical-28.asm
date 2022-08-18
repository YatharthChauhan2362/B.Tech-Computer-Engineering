
; Write an assembly language program to multiply two 16-bit numbers in
; memory and store the result in memory.

org 100h

MOV [4000h],0034h
MOV [4002h],175Ch  

MOV AX,[4000H]
MOV BX,[4002H]

MUL BX  

MOV [4004H],DH 
MOV [4005H],DL
MOV [4006H],AH
MOV [4007H],AL

ret




