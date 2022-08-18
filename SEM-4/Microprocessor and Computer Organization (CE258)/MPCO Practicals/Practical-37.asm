               
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

mov al,05h
mov bl,01h

i0:
mov cl,al
shr cl,1
jnc i2
jc i1

i1:
cmp bl,01h
jmp i3

i2:
cmp bl,00h
jmp i3

i3:
dec al
jnz i0

ret
