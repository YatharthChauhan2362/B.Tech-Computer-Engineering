// Factorial (Iterative)

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Using Iterative Method\n\n";

//     long int n, fact = 1, counter = 0;
//     cout << "Enter number:";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//         counter++;
//     }
//     cout << "\nCounter : " << counter;
//     cout << "\nFactorial : " << fact;

//     cout << "\n\n20DCE019-Yatharth Chauhan";
// }

// Factorial (Recursive)

#include <iostream>
using namespace std;

int counter = 0;
long int factfunc(long int n)
{
    if (n == 0)
        return 1;
    else
    {
        counter++;
        return factfunc(n - 1) * n;
    }
}
int main()
{
    cout << "Using Recursion Method:\n\n";
    long int n, fact = 1;

    cout << "Enter number: ";
    cin >> n;

    fact = factfunc(n);

    cout << "\nCounter: " << counter;
    cout << "\nFactorial: " << fact;
    cout << "\n\n20DCE019-Yatharth Chauhan";
}