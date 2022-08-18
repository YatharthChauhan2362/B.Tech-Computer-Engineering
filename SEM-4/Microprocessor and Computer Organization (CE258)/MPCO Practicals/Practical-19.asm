
; Calculate the sum of series of numbers (Data set-1) from the memory
; location listed below & store the result at 400AH location  

org 100h

MOV [4000H],01H
MOV [4001H],02H
MOV [4002H],03H
MOV [4003H],04H
MOV [4004H],05H  
              
MOV SI,4000H

ABC:  

MOV AL,[SI]
ADD [400AH],AL 

INC SI
CMP SI,4005H
JNE ABC

ret