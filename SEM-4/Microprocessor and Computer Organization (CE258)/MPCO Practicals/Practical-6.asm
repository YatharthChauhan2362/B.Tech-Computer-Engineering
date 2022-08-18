
; 20DCE019 - YATHARTH CHAUHAN

; Add the 16-bit number in memory locations 4000H and 4001H to the 16-bit number in memory locations 4002H and 4003H. 
; The most significant eight bits of the two numbers to be added are in memory locations 4001H and 4003H. 
; Store the result in memory locations 4004H and 4005H with the most significant byte in memory location 4005H. 

ORG 100H

MOV [4000H],5050H
MOV [4002H],2020H

MOV AX,[4000H]
MOV BX,[4002H]

ADD AX,BX
MOV [4004H],AX

RET