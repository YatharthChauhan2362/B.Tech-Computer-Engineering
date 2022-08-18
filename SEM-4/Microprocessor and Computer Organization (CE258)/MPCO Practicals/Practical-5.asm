
; 20DCE019 - YATHARTH CHAUHAN

; Subtract the contents of memory location 4001H from the memory 
; location 2000H and place the result in memory location 4002H.
   
ORG 100H

MOV [4000H],0505H
MOV [2000H],0202H

MOV AX,[4000H]
MOV BX,[2000H]

SUB AX,BX 

MOV [4002H],AX

RET