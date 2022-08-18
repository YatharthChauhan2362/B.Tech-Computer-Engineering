
; Implement a program to mask the lower four bits of content of the
; memory location


org 100h

MOV [4000H], 00011100B

MOV AL, [4000H]

AND AL, 11110000B

MOV [4001H], AL

ret




