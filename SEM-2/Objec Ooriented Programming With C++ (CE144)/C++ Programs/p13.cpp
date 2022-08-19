/*Define a C++ Structure Rectangle with data member’s width and height.
 It has get_values() member functions to get the data from user and area() member functions to print the area of rectangle.
 Also create a C++ Class for the above program. Define both functions inside the class.
 Member function defined inside the class behaves like an inline function and illustrate the difference between C++ Structure and C++ Class.*/

#include <iostream>
using namespace std;

struct Rectangle
{
    float width, height;
    void get_values()
    {
        cout << "Enter the width: ";
        cin >> width;
        cout << "Enter the height: ";
        cin >> height;
    }
    void area()
    {
        float area;
        area = width * height;
        cout << "Area of rectangle is: " << area;
    }
};
int main()
{
    Rectangle r;
    r.get_values();
    r.area();
}