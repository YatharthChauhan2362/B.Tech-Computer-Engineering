
; 20DCE019 - YATHARTH CHAUHAN

; Substract Two 32-bit numbers stored in consecutive memory locations and store the result in memory locations starting from 7000H

ORG 100H

MOV [7000H], 7615H   
MOV [7002H], 1495H
MOV [7004H], 1515H
MOV [7006H], 1313H 
 
MOV AX, [7000H]
MOV BX, [7002H]
MOV CX, [7004H]
MOV DX, [7006H] 

SUB AX,CX
SUB BX,DX    

MOV [7008H], AX
MOV [7010H], BX

RET