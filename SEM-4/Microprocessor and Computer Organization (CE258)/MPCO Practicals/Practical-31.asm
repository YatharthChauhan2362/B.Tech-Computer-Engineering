
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

mov cx,03h  
mov [2000h],45h
mov [2001h],10h
mov [2002h],51h

mov SI,2000h

l1:
cmp [SI],50h
js digit
cmp [SI],0A0h
js  Digit1 

mov ax,100
out 199,ax
inc SI
loop l1

digit:
inc SI
mov ax,1
mov 199,ax
loop l1

digit1:

inc SI
mov ax,10
out 199,ax
loop l1



ret

