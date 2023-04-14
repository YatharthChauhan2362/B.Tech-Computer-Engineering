fab1(1,1).
fab1(2,1).
fab1(N,T):-N>2,N1 is N-1,N2 is N-2,fab1(N1,T1),fab1(N2,T2),T is (T1+T2).

 