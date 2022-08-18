
; Divide 8-bit number stored in memory locations 4009H by data stored at memory location 4001H & store result of division at memory
; location 400AH. (Use Data Set -4).

org 100h   

MOV [4001],56
MOV [4009],6

MOV AX,[4001]
MOV BL,[4009]

DIV BL    

MOV [400AH],AH 

ret