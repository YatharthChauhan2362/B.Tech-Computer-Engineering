
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

MOV [2000H],05H
MOV [2001H],07H
MOV [2002H],08H  
MOV [2004H],09H
MOV [2005H],34H
MOV [2006H],12H
MOV [2007H],35H
MOV [2008H],23H    
MOV [2009H],06H

MOV SI, 2000H
MOV CL, 10H 
MOV AL, [SI]

L1: 

INC SI

MOV BL, [SI] 

CMP AL, BL
JC L2

LOOP L1

JMP EXIT

L2:

XCHG AL, BL
LOOP L1

EXIT:

ret

