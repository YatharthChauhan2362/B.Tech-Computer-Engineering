
/*Define a class Dist with int feet and float inches. Define member function that displays distance in 1’-2.5” format.
 Also define member function scale ( ) function that takes object by reference and scale factor in float as an input argument.
 The function will scale the distance accordingly.
 For example, 20’-5.5” and Scale Factor is 0.5 then answer is 10’-2.75”*/

#include <iostream>
using namespace std;
class dist
{
    int feet;
    float inch;

public:
    void display()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inch: ";
        cin >> inch;

        while (inch > 12)
        {
            feet = feet + 1;
            inch = inch - 12;
        }
        cout << "Distance: " << feet << "'" << inch << "\"" << endl;
    }
    void scale(dist &d)
    {
        float sf;
        cout << "Enter scale factor: ";
        cin >> sf;

        feet = feet * sf;
        inch = inch * sf;

        while (inch > 12)
        {
            feet = feet + 1;
            inch = inch - 12;
        }
        cout << "Distance after scale with: " << sf << feet << "'" << inch << "\"" << endl;
    }
};
int main()
{
    dist d;
    d.display();
    d.scale(d);
}