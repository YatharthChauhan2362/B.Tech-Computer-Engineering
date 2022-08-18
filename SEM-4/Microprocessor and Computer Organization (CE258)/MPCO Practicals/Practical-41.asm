
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt


org 100h
         
 mov ax,01h
 mov bx,000h
 mov cx,0ah
 mov [4000h],dx
 mov [4001h],ax
 mov bx,4002h
         
 l1:
 add ax,dx
 mov [bx],ax
 mov dx,[bx-1]
 inc bx
 loop l1
         
 ret