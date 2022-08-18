/*Define a class Hospital having rollno and name as data members and member function to get and print data. Derive a class Ward from class Hospital having data members: 
 ward number and member function to get and print data. Derive another class Room from Hospital having data member bed number and nature of illness and member function to get and print data. 
 Derive class Patient from Class Ward and Class Room. In main () declare 5 object of Class Patient and get and display all the information.
 Use the concept of Virtual Base Class and Hybrid Inheritance.*/

#include <iostream>
using namespace std;

class Hospital
{
    string rollNo, name;

public:
    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter Roll NO: ";
        cin >> rollNo;
    }
    void printdata()
    {
        cout << "Name: " << name << endl;
        cout << "ROLL No: " << rollNo << endl;
    }
};
class Ward : public virtual Hospital
{
    string wardNo;

public:
    void gdata()
    {
        cout << "Enter ward No: ";
        cin >> wardNo;
    }
    void pdata()
    {
        cout << "Ward no is: " << wardNo << endl;
    }
};

class Room : public virtual Hospital
{
    string bedNumber, natureOfillness;

public:
    void gtdata()
    {
        cout << "Enter Bed No: ";
        cin >> bedNumber;
        cout << "Nature of illness: ";
        cin >> natureOfillness;
    }
    void ptdata()
    {
        cout << "Bed no is: " << bedNumber << endl;
        cout << "Nature of illness is: " << natureOfillness << endl;
    }
};
class Patient : public Ward, public Room
{
};
int main()
{
    int i;
    Patient p[5];

    for (i = 0; i < 5; i++)
    {
        p[i].getdata();
        p[i].gdata();
        p[i].gtdata();

        cout << endl;

        p[i].printdata();
        p[i].pdata();
        p[i].ptdata();

        cout << endl;
    }
    return 0;
}