/* Create one application which implement all type of inheritance*/

#include <iostream>
#include <iomanip>
using namespace std;

class University
{
public:
    char university_name[30], type[10];
    void getdata()
    {
        cout << "Enter the University Name: ";
        cin.getline(university_name, 30);
        cout << "Enter the Type of University (Goverment / Private): ";
        cin.getline(type, 30);
    }
    void putdata()
    {
        cout << "University Name: " << university_name << endl;
        cout << "University Type: " << type << endl;
    }
};

class Collage : public University
{
public:
    char collage_name[30], department_name[25];

    void gtdata()
    {
        cout << "Enter the Collage Name: ";
        cin.getline(collage_name, 30);
        cout << "Enter the Department Name: ";
        cin.getline(department_name, 25);
    }
    void ptdata()
    {
        cout << "Collage Name: " << collage_name << endl;
        cout << "Department Name: " << department_name << endl;
    }
};

class Student : public Collage
{
public:
    string id, mobile_no, email;
    char name[20];

    void gdata()
    {
        cout << "Enter the Student Name: ";
        cin.getline(name, 20);
        cout << "Enter the Student ID: ";
        cin >> id;
        cout << "Enter the Student Mobile no: ";
        cin >> mobile_no;
        cout << "Enter the Email ID: ";
        cin >> email;
        cout << endl;
    }
    void pdata()
    {
        cout << "Student Name " << name << endl;
        cout << "Student ID: " << id << endl;
        cout << "Student Mobile no: " << mobile_no << endl;
        cout << "Email ID: " << email << endl;
    }
};
int main()
{
    Student s;
    s.getdata();
    s.gtdata();
    s.gdata();

    cout << "__________Student Details__________" << endl;

    cout << endl;

    s.putdata();
    s.ptdata();
    s.pdata();

    return 0;
}