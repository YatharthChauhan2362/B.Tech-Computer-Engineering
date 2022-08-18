/*Write a function called tonLarge() that takes two integer arguments call by reference and then sets the larger of the two numbers to 100 using Return by reference.
 Write a main() program to exercise this function.*/

#include <iostream>
using namespace std;

int tonLarge(int &num1, int &num2);
int main()
{
    int num1, num2;

    cout << "Enter the two numbers: ";
    cin >> num1;
    cin >> num2;

    tonLarge(num1, num2);
    
    cout << "num1= " << num1 << "\tnum2= " << num2;
}

int tonLarge(int &num1, int &num2)
{
    if (num1 > num2)
    {
        return num1 = 100;
    }
    else
    {
        return num2 = 100;
    }
}
