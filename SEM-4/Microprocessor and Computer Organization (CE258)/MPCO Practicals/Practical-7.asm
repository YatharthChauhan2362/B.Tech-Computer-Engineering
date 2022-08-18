
; Subtract the 16-bit number in memory locations 4002H and 4003H from the 16-bit number in memory locations 4000H and 4001H. 
; The most significant eight bits of the two numbers are in memory locations 4001H and 4003H. Store the result in memory locations 
; 4004H and 4005H with the most significant byte in Memory location 4005H. 

ORG 100H

MOV [4002H],5050H
MOV [4000H],2020H

MOV AX,[4000H]
MOV BX,[4002H]

SUB AX,BX
MOV [4004H],AX

RET