
; 20DCE019 - YATHARTH CHAUHAN

; Store the data byte 32H into memory location 4000H. 


ORG 100H  
              
MOV [4000H],32H
MOV AX,[4000H]
MOV [2000H],AX

RET