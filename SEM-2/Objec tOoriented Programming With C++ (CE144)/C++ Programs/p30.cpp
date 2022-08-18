/*Define a Base Class Vegetable having data member Color and member function getdata() which takes color as an input and putdata() which print the color as an output.
 Vegetable Class has one subclass named Tomato having data members weight and size and member function gtdata() which takes weight and size as an input and ptdata() which prints weight and size as output.
 Write a C++ Program which inherits the data of Vegetable class in Tomato class using Single Inheritance.*/

#include <iostream>
using namespace std;
class vegetable
{
    string color;

public:
    ;
    void getdata()
    {
        cout << "Enter color of vegetable: " << endl;
        cin >> color;
    }
    void putdata()
    {
        cout << "Tomato has " << color << " In color";
    }
};
class tomato : public vegetable
{
    int wt;
    string size_;

public:
    void gtdata()
    {
        cout << "Enter weight of vegetable: " << endl;
        cin >> wt;
        cout << "Enter size of vegetable: " << endl;
        cin >> size_;
    }
    void ptdata()
    {
        cout << "having"
             << " " << wt << "kg ";
        cout << size_ << " size.";
    }
};
int main()
{
    tomato t;
    t.getdata();
    t.gtdata();
    t.putdata();
    cout << " ";
    t.ptdata();
    cout << endl;
    return 0;
}