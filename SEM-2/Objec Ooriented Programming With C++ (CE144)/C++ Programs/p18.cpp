/*Define a class Fahrenheit with float temp as data member. Define another class Celsius with float temperature as data member. Both classes have member functions to input and print data. Write a non-member function that receives objects of both the classes and declare which one is higher than another according to their values. Also define main() to test the function. Define all member functions outside the class. (Formula for converting Celsius to Fahrenheit is F = (9C/5) + 32). Use the concept of friend function.*/

#include <iostream>
using namespace std;
class c;
class f
{
private:
    float temp;

public:
    void getdata();
    friend void compare(f, c);
} f1;

class c
{
private:
    float temperature;

public:
    void data();
    friend void compare(f, c);
} c1;

void f::getdata()
{
    cout << endl
         << "Enter Temperature in F: ";
    cin >> temp;
}
void c::data()
{
    cout << endl
         << "Enter Temperature in C: ";
    cin >> temperature;
}
void compare(f f1, c c1)
{
    float f;
    f = (9 * c1.temperature) / 5 + 32;
    cout << "Cal. F: " << f;

    if (f > f1.temp)
    {
        cout << endl
             << "C's F is greater than actual F";
    }
    else
    {
        cout << endl
             << "C's F is not greater than actual F";
    }
}
int main()
{
    f1.getdata();
    c1.data();
    compare(f1, c1);
}
