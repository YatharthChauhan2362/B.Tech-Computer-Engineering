// Fibonacci (Iterative)

// #include <iostream>
// using namespace std;
// int count = 0;

// void fib(int N)
// {
//     int first = 0, second = 1, next;
//     for (int i = 0; i < N; i++)
//     {
//         if (i <= 1)
//         {
//             count++;
//             next = i;
//         }
//         else
//         {
//             next = first + second;
//             first = second;
//             second = next;
//             count++;
//         }
//         cout << next << ' ';
//     }
// }

// int main()
// {
//     int Number, i = 0;
//     cout << "Enter number for fibonacci terms: ";
//     cin >> Number;
//     cout << "\nFibonacci Sequence is: \n";
//     fib(Number);
//     cout << "\nCount: " << count << endl;

//
//     return 0;
// }

// Fibonacci (Recursive)

#include <iostream>
using namespace std;
int count = 0;
int fibonacci(int n)
{
    if ((n == 1) || (n == 0))
    {
        count++;
        return (n);
    }
    else
    {
        count++;
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main()
{
    int n, i = 0;
    cout << "Input the number of terms for Fibonacci Series: ";
    cin >> n;
    cout << "\nFibonacci Series: ";

    while (i < n)
    {
        cout << " " << fibonacci(i);
        i++;
    }
    cout << "\ncount: " << count << endl;

    return 0;
}
