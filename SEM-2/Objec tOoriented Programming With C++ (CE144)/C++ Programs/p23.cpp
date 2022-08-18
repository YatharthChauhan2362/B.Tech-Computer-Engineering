/*Write a C++ program having class time with data members: hr, min and sec.
Define following member functions.
1) getdata() to enter hour, minute and second values
2) putdata() to print the time in the format 11:59:59
3) default constructor
4) parameterized constructor
5) copy constructor
6) Destructor.
Use 52 as default value for sec in parameterized constructor.
Use the concepts of default constructor, parameterized constructor, Copy constructor, constructor with default arguments and destructor.*/

#include <iostream>
using namespace std;
class time
{
    int hr, min, sec;

public:
    void getdata()
    {
        cout << "Enter Hour, Miniute, Second: ";
        cin >> hr >> min >> sec;
    }
    void putdata()
    {
        cout << "You Entered This Data: ";
        cout << hr << ":" << min << ":" << sec << endl;
    }
    time()
    {
        cout << "This is Default Constructor..." << endl;
    }
    time(int h, int m, int s = 52)
    {
        hr = h;
        min = m;
        sec = s;
        cout << "In Parameterized Constructor..."
             << " " << hr << " : " << min << " : " << sec << endl;
    }
    time(const time &t2)
    {
        hr = t2.hr;
        min = t2.min;
        sec = t2.sec;
        cout << "In Copy Constructor..."
             << " " << hr << " : " << min << " : " << sec << endl;
    }
    ~time()
    {
        cout << "Delete The Constructor..." << endl;
    }
};
int main()
{
    time t;
    t.getdata();
    t.putdata();
    time t1(11, 59);
    time t2 = t1;
}
