/*Find the output of following program.Explain the use of bool data type.#include<iostream> using namespace std;*/

#include <iostream>
using namespace std;
int main()
{
    bool a = 321, b;
    cout << "Bool a Contains : " << a << endl;
    int c = true;
    int d = false;
    cout << "c = " << c << endl << "d = " << d;
    c = a + a;
    cout << "\nInteger c contain : " << c;
    b = c + a;
    cout << "\nBool b contain : " << b;
    return 0;
}

//output:

// Bool a Contains : 1
// c = 1
// d = 0
// Integer c contain : 2
// Bool b contain : 1