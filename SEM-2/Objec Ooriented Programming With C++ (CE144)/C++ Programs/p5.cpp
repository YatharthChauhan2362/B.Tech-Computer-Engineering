/*Find error in the following code and give reasons for each error: Can we declare an array of references?
 Can we assign NULL value to reference variable? Is Reference variable a pointer variable? 
 Can we declare a reference variable without initializing it? Does Reference Variable change the original value of variable?

 #include <iostream>
using namespace std;
int main()
{
    int no1 = 10, no2 = 12;
    int &x = no1;
    int &r;
    int &c = NULL;
    int &d[2] = {no1, no2};
    cout << "x = " << x + 20;
    cout << "no1=" << no1 + 10;
    return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{
    int no1 = 10, no2 = 12;

    int &x = no1;
    int &r = no2;
    int &c = no1;

    int d[2] = {no1, no2};

    cout << "x = " << x + 20;
    cout << "no1=" << no1 + 10;
    
    return 0;
}