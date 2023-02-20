fact(0,1).
fact(N,ANS):- N>0,
N1 is N-1,
fact(N1,A),
ANS is A*N.
