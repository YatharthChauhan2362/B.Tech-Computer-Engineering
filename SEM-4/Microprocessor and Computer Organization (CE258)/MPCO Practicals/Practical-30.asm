
; Write an assembly language program to Display Digits 0 1 2 3 4 5 6 7 8 9
; A B C D E F on port 01H with 500ms of delay 

org 100h

mov dx,'0'
mov bx,3Ah

rep:
mov ah, 6
int 21h  
mov cx,70h

      d:
      dec cx
      jnz d

inc dl
cmp dx,bx
jnz rep


mov dl,'A'
mov bl,47h
 
rep2:
mov ah, 6
int 21h  
mov cx,70h

      d2:
      dec cx
      jnz d2

inc dl
cmp dl,bl
jnz rep2
jz exit

exit: 

ret


