/*Create a class Number having int num as member.
 The class has input and output functions.
 Overload unary operator (++) such that it supports N1=N2++ and N3=++N1 and Overload unary (-) such that it supports N3 = - N3.
 Also define default, parameterized and copy constructor for the class.
 Also explain use of nameless object in operator overloading.
 Use the concept of Overloading Unary Operators.*/

#include <iostream>
using namespace std;
class number
{
    int num;

public:
    void getdata()
    {
        cout << "Enter The Number: " << endl;
        cin >> num;
    }
    void putdata()
    {
        cout << "You Entered..." << num << endl;
    }
    void operator++(int)
    {
        num++;
    }
    void operator++()
    {
        ++num;
    }
    void operator-()
    {
        num = -num;
    }
};
int main()
{
    number n2;
    n2.getdata();
    n2.putdata();
    n2.operator++();
    n2.putdata();
    n2.operator++();
    n2.putdata();
    n2.operator-();
    n2.putdata();
}