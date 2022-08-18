/* Create a class complex having data members int real , img and member function to print data.
 Overload Unary operator (-) using friend function such that it supports – C1 where C1 is the object of class complex.
 Also define default, parameterized and copy constructor for the class.
 Use the concept of Overloading Unary Operators with friend function.*/

#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    void putdata()
    {
        cout << real << img << "i" << endl;
    }
    complex()
    {
        real = 2;
        img = 1;
    }
    complex(int r, int i)
    {
        real = r;
        img = i;
    }
    complex(const complex &c)
    {
        real = c.real;
        img = c.img;
    }
    friend complex operator-(complex &c3);
};
complex operator-(complex &c3)
{
    complex c;
    c.real = -c3.real;
    c.img = -c3.img;
    return c;
}
int main()
{
    complex c1, c2(6, 2), c3(c2), c4;
    c4 = operator-(c1);
    c4.putdata();
    c4 = operator-(c2);
    c4.putdata();
    c4 = operator-(c3);
    c4.putdata();
}
