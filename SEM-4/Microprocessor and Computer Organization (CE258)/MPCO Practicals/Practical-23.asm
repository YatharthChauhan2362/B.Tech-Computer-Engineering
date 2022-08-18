
; Write an assembly language program to find the no. of odd numbers
; and even numbers, given an array of n numbers.

org 100h

MOV [4000H],01H
MOV [4001H],02H
MOV [4002H],03H
MOV [4003H],04H
MOV [4004H],05H
MOV [4005H],06H
MOV [4006H],07H
MOV [4007H],08H
MOV [4008H],09H
MOV [4009H],0aH

MOV CL,0aH
MOV SI,4000H
MOV BL,00H
MOV DL,00H

L1:    

MOV AL,[SI]
SHR AL,1
INC si 

JC ODD
JNC EVEN

ODD:
INC BL
LOOP L1 

ret  

EVEN:
INC DL
LOOP L1  

ret




