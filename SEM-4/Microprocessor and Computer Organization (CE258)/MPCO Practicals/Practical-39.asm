               
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h 
mov [2200h],06h
mov [2201h],01h
mov [2202h],02h
mov [2203h],05h
mov [2204h],07h
mov [2205h],08h
mov [2206h],05h

mov cl,00h
mov si,2201h
 
l1:
mov ax,[si]
shr ax,1
jc odd
jnc even
 
odd:
jmp repeat
 
even:
add cl,[si]
 
repeat:
inc si
cmp si,2207h
jnz l1
 
exit:
mov [2210h],cl
ret


