
; Implement a program to set higher four bits of content of the memory
; location to 1.

org 100h

MOV CX, 05H
MOV AL, 01H  

L1:
INC AL
LOOP L1

ret




