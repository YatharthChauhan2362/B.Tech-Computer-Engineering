
; Modify above the program such a way that it halts the execution if carry generated & stores the intermediate result at 
; 400AH location. (Data set-2) (Note: Student need to implement FOR loop in this program: initialization, Compare, 
; Decrement/Increment; also need to use JMP, JMx instructions.)

org 100h

MOV [4000H],12H
MOV [4001H],13H
MOV [4002H],10H
MOV [4003H],09H
MOV [4004H],08H 

MOV SI,4000H                
MOV CX,5  

ABC:  

MOV AL,[SI]
ADD [400AH],AL 

JC QUIT
INC SI
LOOP ABC

QUIT:

ret