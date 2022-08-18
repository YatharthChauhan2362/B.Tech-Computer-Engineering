
; Write a program with nested loop which will display the decimal down
; counter. on Port 1 with a one second delay between each count

org 100h


mov dl, '9' 
mov bh, '0'


l1:

mov ah, 06h 
int 21h  

mov cl, 60
d1:
dec cl
jnz d1
        
dec dl
cmp dl, bh
jnz l1 

ret  


