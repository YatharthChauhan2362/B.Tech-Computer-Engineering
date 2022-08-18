
; Write an assembly language program to count the numbers in an array
; (negative & positive)


org 100h  

mov [4000h],01h
mov [4001h],05h
mov [4002h],03h
mov [4003h],-04h 
mov [4004h],-02h

mov dl,00h
mov dh,00h
mov cl,05h
mov bx,4000h 

L2:
mov al,[bx]

inc bx
shl al,01h
jc l1   

inc dh
loop l2
jmp exit

l1:
inc dl
loop l2
exit:  

mov [4007h],dl
mov [4008h],dh 

ret


