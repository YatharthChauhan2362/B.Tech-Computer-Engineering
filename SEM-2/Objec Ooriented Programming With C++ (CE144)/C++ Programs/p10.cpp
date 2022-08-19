/* Define three functions named divide(). First function takes numerator and denominator as an input argument and checks it’s divisible or not,
 Second function takes one int number as input argument and checks whether the number is prime or not and Third function takes 3 float number as argument and finds out average of the numbers. 
 Use concept of Function Overloading / static binding.*/

#include <iostream>
using namespace std;

int divide(int a, int b);
int divide(int a);
float divide(float a, float b, float c);

int main()
{
    int a, b;

    cout << "enter a and b where a is numerator and b is denominator : " << endl;
    cin >> a >> b;

    if (divide(a, b))
        cout << "divisible" << endl;
    else
        cout << "not divisible" << endl;

    int p;

    cout << endl;
    cout << "enter a number to check number prime or not:" << endl;
    cin >> p;

    if (divide(p))
        cout << "number is a prime" << endl;
    else
        cout << "number is not prime" << endl;

    float m, n, o, avg;

    cout << endl;
    cout << "enter three numbers to find average: " << endl;
    cin >> m >> n >> o;

    avg = divide(m, n, o);
    cout << "average is:" << avg << endl;
}

int divide(int a, int b)
{
    if (a % b == 0)
        return 1;
    else
        return 0;
}

int divide(int a)
{
    int count = 0, i;

    for (i = 2; i <= a; i++)
    {
        if (a % i == 0)
            count++;
    }

    if (count == 1)
        return 1;
    else
        return 0;
}

float divide(float a, float b, float c)
{
    return ((a + b + c) / 3);
}
