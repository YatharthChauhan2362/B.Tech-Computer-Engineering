male(ratilal).
male(tejas).
male(jayesh).
male(dhiren).
male(yatharth).
male(divy).
male(mumux).

female(tara).
female(niru).
female(bhavna).
female(rajeshree).
female(vishwa).
female(drashti).

parent(tejas,yatharth).
parent(niru,yatharth).

parent(jayesh,divy).
parent(bhavna,divy).

parent(jayesh,vishwa).
parent(bhavna,vishwa).

parent(jayesh,drashti).
parent(bhavna,drashti).

parent(dhiren,mumux).
parent(rajeshree,mumux).

father(X,Y) :- male(X),parent(X,Y).
mother(X,Y) :- female(X),parent(X,Y).
son(X,Y) :- male(X),parent(Y,X).
daughter(X,Y) :- female(X),parent(X,Y).

grandfather(X,Y) :- male(X),parent(X,Somebody),parent(Somebody,Y).
grandmother(X,Y) :- female(X),parent(X,Somebody),parent(Somebody,Y).

brother(X,Y) :- male(X),parent(Somebody,X),parent(Somebody,Y).
sister(X,Y) :- female(X),parent(Somebody,X),parent(Somebody,Y).

uncle(X,Y) :- male(X),brother(X,Somebody),parent(Somebody,Y).
aunty(X,Y) :- female(Y),uncle(Somebody,X),spouse(Somebody,Y).
