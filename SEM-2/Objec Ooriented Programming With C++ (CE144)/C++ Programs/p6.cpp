/* Find output of the following code: Explain how scope Resolution operator is used to access global version of a variable. */

#include <iostream>
using namespace std;
int x = 30;
int main()
{
    int x = 20;
    {
        int x = 10;
        cout << "We are in the inner block" << endl;
        cout << "Value of x=" << x << "\n";
        cout << "Value of x=" << ::x << "\n";
    }
    cout << "We are in the outer block" << endl;
    cout << "Value of x=" << x << "\n";
    cout << "Value of x=" << ::x << "\n";
    return 0;
}
