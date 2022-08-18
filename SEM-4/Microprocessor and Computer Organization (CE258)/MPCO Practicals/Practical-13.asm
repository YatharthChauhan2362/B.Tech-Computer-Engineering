
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

ORG 100H 

MOV [4000H], 10101011B 
MOV [4002H], 11010101B 

MOV AL,[4000H] 
MOV BL,[4001H] 

NOT BL 
AND AL,BL  

MOV [4001H],AL  

RET  
  