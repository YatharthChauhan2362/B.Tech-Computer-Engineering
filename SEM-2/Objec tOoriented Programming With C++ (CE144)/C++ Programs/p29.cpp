/*  Create classes Celsius and Fahrenheit with float.
 Define appropriate member functions such that they support the statements in main( ):
 Celsius C1, C2=5.0; Fahrenheit F1, F2; F1=C2; C1=F2;
 Use the concepts of Type conversion from class type to class type.
 Write this Program in two ways. Define appropriatemember function in class Celsius.
 Define appropriate member function in class Fahrenheit.*/

#include <iostream>
#include <conio.h>
using namespace std;
class fahrenhite;
class celcius
{
protected:
    float c;

public:
    celcius()
    {
    }
    void getdata()
    {
        cout << "enter temperature in celcius:";
        cin >> c;
    }
    void display()
    {
        cout << "\n\nTemperature in Celcius:" << c;
    }
    float setc()
    {
        return c;
    }

    celcius(fahrenhite f1);
};
class fahrenhite
{
protected:
    float f;

public:
    fahrenhite()
    {
    }
    void get_data()
    {
        cout << "\n\nEnter temperature in Fahrenhite:";
        cin >> f;
    }
    void display()
    {
        cout << "\n\nTemperature in Fahrenhite:" << f;
    }
    float setf()
    {
        return f;
    }
    fahrenhite(celcius c1)
    {
        f = (1.8 * c1.setc()) + 32;
    }
};
celcius::celcius(fahrenhite f1)
{
    c = ((f1.setf()) - 32) * (0.5556);
}
int main()
{
    celcius c1;
    fahrenhite f1;
    c1.getdata();
    c1.display();
    f1.get_data();
    f1.display();
    c1 = f1;
    cout << "\n\nAfter converting fahrenhite to celcius:";
    c1.display();
    f1 = c1;
    cout << "\n\nAfter converting celcius to fahrenhite:";
    f1.display();
}
