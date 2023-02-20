answer(Inp,X):-((Inp='Yes',X='y');(Inp='yes',X='y');(Inp='y',X='y');(Inp='Y',X='y');(Inp='YES',X='y'));((Inp='NO',X='n');(Inp='no',X='n');(Inp='N',X='n');(Inp='n',X='n')).

mainask:-write('Write your name :'),read(Name),cold(C),cough(F),fever(V),fun(C,F,V,Ans),write(Name),write(Ans).

fever(V):-write('Fever ? '),read(Inp),answer(Inp,V).
cough(F):-write('Cough ? '),read(Inp),answer(Inp,F).
cold(C):-write('Cold ? '),read(Inp),answer(Inp,C).

fun(C,F,V,Ans):-(C='y',F='y',V='y',Ans=' has viral few.');(C='n',F='n',V='y',Ans=' has viral fever.');
(C='y',F='n',V='n',Ans=' has normal cold.');(C='n',F='n',V='n',Ans=' is alright!');
(C='n',F='y',V='n',Ans=' has normal cough.');(C='y',F='y',V='n',Ans=' has normal cold and cough.').

