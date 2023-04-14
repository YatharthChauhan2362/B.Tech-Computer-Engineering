convert(F,C) :- C is (F - 32) * (5/9).
c_to_f(C,F) :- F is C * (9/5) + 32.
freezing(F) :- F =<32.
