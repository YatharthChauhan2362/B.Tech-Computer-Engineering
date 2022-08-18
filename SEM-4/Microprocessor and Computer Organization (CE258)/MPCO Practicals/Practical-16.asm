
; Write a Program to subtract the contents of memory location 4001H
; from the memory location 4002H and place the result in memory
; location 4003H without SUB instruction


ORG 100H

MOV [4000H],0AH
MOV [4001H],02H

MOV AL,[4000H]

NOT AL
ADD AL, 01H

ADD AL, [4001H]
NOT AL
ADD AL, 01H

MOV [4002H],AL

RET