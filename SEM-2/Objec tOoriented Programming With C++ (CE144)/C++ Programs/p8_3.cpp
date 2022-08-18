#include <iostream> 
using namespace std; 
int main()
{
    int var1 = 0, var2 = 0;
    const int *const ptr = &var1;
    //*ptr = 1;    
    //ptr = &var2;
    cout << "Var1 = " << *ptr;
    return 0;
}
