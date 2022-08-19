//2. (a) Pointer to data members

#include <iostream>
using namespace std;
class student
{
public:
    int roll_no;
};
int main()
{ // declaring pointer to data member
    int student ::*p1 = &student::roll_no;
    student s;
    student *optr = &s;
    s.*p1 = 42;
    cout << "Roll no is " << s.*p1 << endl;
    optr->*p1 = 45;
    cout << "Roll no is " << optr->*p1 << endl;
    return 0;
}