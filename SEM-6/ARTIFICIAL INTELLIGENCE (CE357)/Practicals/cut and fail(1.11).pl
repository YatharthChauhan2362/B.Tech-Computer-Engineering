bird(crow).  
bird(sparrow).  
bird(parrot).  
bird(penguins).  
bird(dove).  
bird(robin).  
bird(turkey).  
bird(hawk).  
bird(goose).  
bird(swallow).  
bird(pigeon).  
bird(woodpecker). 

can_fly(penguins) :- !,fail.  
can_fly(A) :- bird(A).
