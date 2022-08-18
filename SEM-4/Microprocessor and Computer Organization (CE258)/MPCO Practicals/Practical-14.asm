
; Write an assembly language program the data at memory locations
; 2000H & 2001H. (Use XOR)


org 100h

MOV [2000H], 0011B 
MOV [2001H], 0101B 

MOV AL,[2000H] 
XOR AL,[2001H]

ret