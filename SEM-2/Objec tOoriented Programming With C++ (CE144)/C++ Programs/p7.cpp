/* Write a program to enter a size of array.
 Create an array of size given by user using “new” Dynamic memory management operator (free store operator).
 Enter the data to store in array and display the data after adding 2 to each element in the array.
 Delete the array by using “delete” memory management operator. */

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Size of Array: " << endl;
    cin >> n;

    int *ptr = new int;

    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }

    cout << "The Elements after Adding +2 are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] + 2 << endl;
    }
    delete[] ptr;
}