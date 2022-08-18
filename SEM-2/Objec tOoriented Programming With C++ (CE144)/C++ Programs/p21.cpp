/* Create a class Child having data members: name of the child and gender and a member function to get and print child data.
 Create another class Parent which is a friend class of child class.
 Class Parent have member function ReadChildData() which takes child’s object by reference as input argument and Reads the childs data and DisplayChildData() which takes childs object as argument and displays childs data.
 Use the concepts of Friend Class.*/

#include <iostream>
using namespace std;
class child
{
private:
    string name, gender;

public:
    void getdata()
    {
        cin >> name >> gender;
    }
    void putdata()
    {
        cout << "You Entered child data: " << name << " " << gender;
    }
    friend class parent;
} c1;

class parent
{
public:
    void ReadChildData(child &c1)
    {
        cout << endl
             << "Reading child's data..." << endl;
        cout << c1.name << " " << c1.gender << endl;
    }
    void DisplayChildData(child *c1)
    {
        cout << c1->name << " " << c1->gender;
    }
} p1;

int main()
{
    child c1;
    c1.getdata();
    c1.putdata();
    p1.ReadChildData(c1);
    p1.DisplayChildData(&c1);
    return 0;
}
