list_mem(X,[X|_]).
list_mem(X,[_|TAIL]) :- list_mem(X,TAIL).

list_len([],0).
list_len([_|TAIL],N) :- list_len(TAIL,N1), N is N1 + 1.

list_con([],L,L).
list_con([X1|L1], L2, [X1|L3]) :- list_con(L1,L2,L3).

list_rev([],[]).
list_rev([Head|Tail],Reversed) :- list_rev(Tail, RevTail),list_con(RevTail, [Head],Reversed).

list_append(A,T,T) :- list_mem(A,T),!.
list_append(A,T,[A|T]).

list_delete(X, [X], []).
list_delete(X, [X|L1], L1).
list_delete(X, [Y|L2], [Y|L1]) :- list_delete(X,L2,L1).

list_insert(X,L,R) :- list_delete(X,R,L).

list_perm([], []).
list_perm(L,[X|P]) :- list_delete(X,L,L1), list_perm(L1,P).

