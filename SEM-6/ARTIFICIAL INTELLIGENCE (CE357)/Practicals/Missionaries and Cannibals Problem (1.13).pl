path(Ini, Ini, _, []).
   
   path(Ini, Fin, Visited, [move(M, C, Dir)|Path]):-
     move(M, C, Dir),
     mov(move(M, C, Dir), Ini, Aux),
     \+ not_valid(Aux),
	   \+ member(Aux, Visited),
     path(Aux, Fin, [Aux|Visited], Path).
