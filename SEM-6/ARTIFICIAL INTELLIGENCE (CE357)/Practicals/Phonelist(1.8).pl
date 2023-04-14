phonelist(person(jatin,kothiya),'9925066160',bdate(day(23),month(06),year(2002))).
phonelist(person(vivek,kakadiya),'7405999619',bdate(day(18),month(12),year(2002))).
phonelist(person(krishn,karetha),'9864670964',bdate(day(23),month(06),year(2002))).
phonelist(person(viral,limbani),'5789754368',bdate(day(21),month(09),year(2002))).
phonelist(person(umang,bariya),'9967112323',bdate(day(23),month(04),year(2002))).
phonelist(person(meet,vaghani),'8906456785',bdate(day(23),month(02),year(2002))).
phonelist(person(vandan,kalariya),'7853244245',bdate(day(23),month(11),year(2002))).
phonelist(person(utsav,fitter),'7890536789',bdate(day(23),month(12),year(2002))).
phonelist(person(kishan,malaviya),'9078468907',bdate(day(23),month(03),year(2002))).
phonelist(person(prins,kamariya),'8967366160',bdate(day(13),month(01),year(2003))).

query(X) :- phonelist(person(A,_),B,bdate(day(_),month(X),year(_))),X=<12,write(A),nl,write(B).
