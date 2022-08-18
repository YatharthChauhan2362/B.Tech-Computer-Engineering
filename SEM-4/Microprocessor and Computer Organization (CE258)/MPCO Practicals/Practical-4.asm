
; 20DCE019 - YATHARTH CHAUHAN

; Convert the below given C Program into Assembly Language. 
; main()
; {
; Int l, n, o, p;
; l = m + n + o + p;
; }


ORG 100H

MOV BL,05H
MOV CL,04H
MOV DL,02H
MOV AH,05H

ADD BL,CL
SUB BL,DL
ADD BL,AH
MOV AL,BL


RET