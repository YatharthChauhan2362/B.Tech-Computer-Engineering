#include <iostream>
using namespace std;
class student
{
    int roll_no;
    float age;

public:
    student(int r, float a)
    {
        roll_no = r;
        age = a;
    }
    student &greater(student &x)
    {
        if (x.age >= age)
            return x;
        else
            return *this;
    }
    void display()
    {
        cout << "Roll No " << roll_no << endl;
        cout << "Age " << age << endl;
    }
};
int main()
{
    student s1(23, 18), s2(30, 20), s3(45, 16);
    student s = s1.greater(s3);
    cout << "Elder Person is :" << endl;
    s.display();
}