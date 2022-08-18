               
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h 

mov si,offset str
lea dx,str
mov cx,00h

l1:
mov ax,[si]
push ax
inc si
inc cx
cmp [si],'$'
jnz l1
mov si,offset str

l2:
pop [si]
inc si
dec cx
jnz l2

ret

STR DB 'HELLO','$'

