
; Write an assembly language program to convert temperature in F to C.
; C=(F-32) * 5/9

ORG 100H 
 
MOV AX,92H 
MOV BX,5H 
MOV CX,9H 
MOV DX,32H 
 
SUB AX,DX 
MUL BX  
DIV CX
 
RET 