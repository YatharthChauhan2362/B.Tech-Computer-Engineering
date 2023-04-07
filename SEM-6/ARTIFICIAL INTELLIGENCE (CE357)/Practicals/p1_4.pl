sumto(1, 1).  
sumto(N, M) :- N>1, N1 is N-1, sumto(N1, M1), M is M1+N. 

loop(0).  
loop(N) :- N>0, write('value of N is: '), write(N), nl,
S is N-1, loop(S).




% Base case for recursion: sum of 0 numbers is 0
sum(0, 0).

% Recursive rule: sum of N numbers is the sum of the first N-1 numbers plus N
sum(N, Result) :-
    N > 0,
    N1 is N - 1,
    sum(N1, Result1),
    Result is Result1 + N.

    % Example query: calculate the sum of 1 to 5 numbers
% Expected output: Sum = 15
?- sum(5, Sum).
Sum = 15.

% Example query: calculate the sum of 1 to 10 numbers
% Expected output: Sum = 55
?- sum(10, Sum).
Sum = 55.