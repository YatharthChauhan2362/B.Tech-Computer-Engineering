/*Create a Class alpha having data member: int x and one argument constructor which initializes the value of x.
 It also has member function which displays the value of x.
 Create another class beta which contains data member: float y and one argument constructor which initializes the value of y.
 It also has member function which displays the value of y. Create a Class Gamma which publicly inherits from class alpha and class beta and has two data members:
 int m, n and a constructor which passes argument to the base class constructor as well as initializes its own data members.
 Class Gamma also has member function to print the values of m and n.
 Write main function which creates object of class Gamma which passes values of base class constructor as well as derived class constructor.
 Use the concept of Multiple Inheritance and Constructor in Derived Class.*/

#include <iostream>
using namespace std;

class alpha
{
protected:
    int x;

public:
    alpha(int a)
    {
        x = a;
    }
};
class beta
{
protected:
    float y;

public:
    beta(int b)
    {
        y = b;
    }
};
class gamma : public alpha, public beta
{
    int m, n;

public:
    gamma(int a, int b, int c, int d) : alpha(a), beta(b)
    {
        m = c;
        n = d;
    }
    void putdata()
    {
        cout << "The value for m is: " << m << endl;
        cout << "The value for n is: " << n << endl;
        cout << "The value for x is: " << x << endl;
        cout << "The value for y is: " << y << endl;
    }
};
main()
{
    int a, b, c, d;

    cout << endl
         << "Enter the values for four constructors: " << endl;
    cin >> a >> b >> c >> d;
    gamma q1(a, b, c, d);
    q1.putdata();
}