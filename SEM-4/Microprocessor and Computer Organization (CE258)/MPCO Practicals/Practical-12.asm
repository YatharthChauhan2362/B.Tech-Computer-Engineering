
; Write a program to perform selective compliment operation on data stored at 4000H corresponding to the data stored at 4001H and
; store the result at 4002H. Verify the result and write bite wise operation of this program. (XOR)  

ORG 100H

MOV [4000H], 10101011B 
MOV [4002H], 11010101B 

MOV AL,[4000H] 
MOV BL,[4001H] 

XOR AL,BL  

RET