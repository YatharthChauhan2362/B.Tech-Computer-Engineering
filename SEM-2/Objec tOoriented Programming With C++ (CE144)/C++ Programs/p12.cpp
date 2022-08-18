/* Write a function called power () that takes two arguments: a double value for n and an int for p,
 and returns the result as double value. Use default argument of 2 for p,
 so that if this argument is omitted, the number will be squared. 
 Write a main () function that gets values from the user to test this function.*/

#include <iostream>
#include <math.h>
using namespace std;

double power(double n, int p = 2)
{
    double ans;
    ans = pow(n, p);

    cout << "ans: " << ans;
}

int main()
{
    double n;
    int p;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of p: ";
    cin >> p;

    if (p == 0)
    {
        power(n);
    }
    else
    {
        power(n, p);
    }
}
