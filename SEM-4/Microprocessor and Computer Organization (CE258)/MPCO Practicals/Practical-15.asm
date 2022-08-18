
; Write a program to multiply & divide the number stored at 4000H by
; 2 and store the result at 4001H & 4002H. (Use Shift instructions).

org 100h

MOV [4000H], 0AH 

MOV AL, [4000H]
SHL AL, 1 
MOV [4001H], AL 

MOV AL, [4000H]
SHR AL, 1 
MOV [4002H], AL

ret

