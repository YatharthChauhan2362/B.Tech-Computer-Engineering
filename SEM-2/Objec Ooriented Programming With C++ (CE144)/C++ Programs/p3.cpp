/*Write a C++ program to add two floating numbers using pointer.
 The result should contain only two digits after the decimal.
 Use fixed, scientific and setprecision () manipulators for controlling the precision of floating point numbers.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float n1, n2, sum;
    float *p1, *p2;

    p1 = &n1;
    p2 = &n2;

    cout << "Enter The First Number: ";
    cin >> *p1;
    cout << "Enter The Second Number: ";
    cin >> *p2;

    sum = *p1 + *p2;

    cout << "In Set Precision Form: " << setprecision(2) << sum << endl;
    cout << "In Fixed Form: " << fixed << setprecision(5) << sum << endl;
    cout << "In Scientific Form: " << scientific << setprecision(3) << sum << endl;
}