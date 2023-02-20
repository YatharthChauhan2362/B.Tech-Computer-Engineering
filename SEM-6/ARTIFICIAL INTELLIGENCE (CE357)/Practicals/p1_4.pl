sumto(1, 1).  
sumto(N, M) :- N>1, N1 is N-1, sumto(N1, M1), M is M1+N. 

loop(0).  
loop(N) :- N>0, write('value of N is: '), write(N), nl,
S is N-1, loop(S).
