
;Multiply two 8-bit numbers stored in memory locations 4001H and 4006H by repetitive addition and store the result at 400AH location.
; (Use Data Set -3) (Note: Student need to implement FOR loop in this program: initialization, Compare, Decrement/Increment; 
; also need to use JMP, JMx instructions.)

org 100h

MOV [4001H],05H
MOV [4006H],04H 

MOV CL,[4006H]
MOV BL,[4001H]  

ABC:      

ADD [400AH],BL
LOOP ABC

ret
