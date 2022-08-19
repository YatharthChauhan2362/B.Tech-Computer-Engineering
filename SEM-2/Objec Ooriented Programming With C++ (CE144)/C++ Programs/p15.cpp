/*Define class Currency having two integer data members rupee and paisa.
 A class has member functions enter() to get the data and show() to print the amount in 22.50 format.
 Define one member function sum() that adds two objects of the class and stores answer in the third object i.e. c3=c1.sum (c2).
 The second member function should add two objects of type currency passed as arguments such that it supports c3.add (c1, c2); 
 where c1, c2 and c3 are objects of class Currency. Also Validate your answer if paisa >100. 
 Write a main( ) program to test all the functions. 
 Use concepts of Object as Function Arguments, function returning object and function overloading. */

#include <iostream>
using namespace std;

class Currency
{
    int rupee, paisa;

public:
    enter()
    {
        cout << "Enter Rupees:";
        cin >> rupee;
        cout << "Enter Paisa:";
        cin >> paisa;
    }
    show()
    {
        while (paisa >= 100)
        {
            rupee = rupee + 1;
            paisa = paisa - 100;
        }
        cout << rupee << "." << paisa << endl;
    }  
    Currency sum(Currency c)
    {
        Currency t;
        t.rupee = rupee + c.rupee;
        t.paisa = paisa + c.paisa;
        return t;
    }
    Currency sum(Currency c, Currency d)
    {
        Currency t;
        t.rupee = c.rupee + d.rupee;
        t.paisa = c.paisa + d.paisa;
        return t;
    }
};
main()
{
    Currency c1, c2, c3;
    c1.enter();
    c2.enter();
    c3 = c1.sum(c2);
    c3.show();
    c3 = c3.sum(c1, c2);
    c3.show();
}

// Enter Rupees:20
// Enter Paisa:100
// Enter Rupees:30
// Enter Paisa:50
// 51.50
// 51.50