               
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h 
mov [4000h],01h
mov [4001h],03h
mov [4002h],05h
mov [4003h],02h
mov [4004h],04h
mov [4005h],06h 
 
mov bh,5

lab2:
mov si,4001h
mov cx,5

label1:
mov al,[si-1]
mov ah,[si]
cmp al,ah
jg l2
jmp repeat
 
l2:
mov dl,[si-1]
mov bl,[si]
mov [si-1],bl
mov [si],dl
jmp repeat
 
repeat:
inc si
cmp si,4006h
jnz label1
 
dec bh
cmp bh,00h
jnz lab2
ret
