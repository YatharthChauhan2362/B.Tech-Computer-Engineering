/*Create an Abstract class vehicle having average as data and pure virtual function getdata() and putdata(). 
 Derive class car and truck from class vehicle having data members: fuel type (petrol, diesel, CNG) and no of wheels respectively.
 Write a main() that enters the data of two cars and a truck and display the details of them.
 Use the concept of Abstract Base class and Pure Virtual functions.*/
#include <iostream>
using namespace std;
class vehicle
{
public:
    float average;
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};
class car : public vehicle
{

public:
    string fuel_type;
    int nowheel;
    void getdata()
    {
        cout << "Enter the type of fuel used in your car (Petrol,  Diesel, CNG): ";
        cin >> fuel_type;
        cout << "Enter the number of wheels: ";
        cin >> nowheel;
    }
    void putdata()
    {
        cout << "fuel type is: " << fuel_type << endl;
        cout << "Number of Wheels: " << nowheel << endl;
        cout << endl;
    }
};
class truck : public vehicle
{

public:
    string fuel;
    int wheel;
    void getdata()
    {
        cout << "Enter the type of fuel used in your truck (Petrol, Diesel, CNG): ";
        cin >> fuel;
        cout << "Enter the number of wheels: ";
        cin >> wheel;

        cout << endl;
    }
    void putdata()
    {
        cout << "fuel type is: " << fuel << endl;
        cout << "Number of Wheels: " << wheel << endl;
        cout << endl;
    }
};
main()
{
    car c1, c2;
    truck t;
    c1.getdata();
    c2.getdata();
    t.getdata();
    cout << "Details of car-1" << endl;
    c1.putdata();
    cout << "Details of car-2" << endl;
    c2.putdata();
    cout << "Details of truck" << endl;
    t.putdata();
}
