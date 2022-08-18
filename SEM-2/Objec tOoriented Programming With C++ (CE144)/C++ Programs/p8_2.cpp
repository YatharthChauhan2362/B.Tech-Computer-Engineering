#include <iostream>
using namespace std;
int main()
{
    int var1 = 43;
    const int *ptr = &var1;
    //*ptr = 1; 
    var1 = 34;
    cout << "var1 = " << *ptr;
    return 0;
}
