/*Create a class shape having data member shape_name and member function to get and print shape_name.
 Derive a Class Circle which is inherited publicly from class shape and having data members radius of a circle and member function to get and print radius of a circle.
 Derive a Class Area which is inherited publicly from Class Circle and having data members area_of_circle and member function display () which displays area of a circle.
 Use object of class Area in main () function and get and display all the information.
 Use the concepts of Multilevel Inheritance*/

#include <iostream>
using namespace std;

class shape
{
protected:
    string shape_name;

public:
    void getdata()
    {
        cin >> shape_name;
    }
};

class Circle : public shape
{
protected:
    float radius;

public:
    void getdata1()
    {
        cin >> radius;
    }
};

class Area : public Circle
{
protected:
    float area_of_circle;

public:
    float area()
    {
        area_of_circle = 3.14 * radius * radius;
        return area_of_circle;
    }
    void putdata2()
    {
        cout << "The shape name is: " << shape_name << endl;
        cout << "The radius is: " << radius << endl;
        cout << "The area of circle is: " << area() << endl;
    }
};
int main()
{
    Area a1;
    cout << "Enter the shape name: " << endl;
    a1.getdata();
    cout << "Enter the radius: " << endl;

    a1.getdata1();
    a1.putdata2();
}