/*Write a C++ program to find out sum of array element using Recursion.
Question: Show stepwise solution of winding and unwinding phase of recursion.*/

#include <iostream>
using namespace std;

int arr_add(int a[], int n)
{
    static int sum = 0;
    static int i = 0;

    if (i < n)
    {
        sum = sum + a[i];
        i++;

        arr_add(a, n);
    }
    return sum;
}
int main()
{
    int n;

    cout << "Enter The Size Of Array: ";
    cin >> n;

    int i, sum, a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sum = arr_add(a, n);
    cout << "Sum is: " << sum;
}
