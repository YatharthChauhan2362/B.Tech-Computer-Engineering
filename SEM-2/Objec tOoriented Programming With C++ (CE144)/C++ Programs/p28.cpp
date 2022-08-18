/*Create a class Celsius with float. Define appropriate member functions such that it support the statements: 
 C1=30.5F; float temperature; temperature=C2;
 Use the concept of Type conversion from basic type to class type and class type to basic type*/

#include <iostream>
using namespace std;
class celsius
{
    float t;

public:
    void get()
    {
        cout << "\nEnter The Temperature in Celsius:";
        cin >> t;
    }
    void put(int x)
    {
        cout << "\nTemperature " << x << ":" << t;
    }
    float operator=(float a)
    {
        t = a;
        return t;
    }
    operator float()
    {
        return t;
    };
};
int main()
{
    celsius c1, c2;
    float temperature;
    c1.get();
    c2.get();
    c1.put(1);
    c2.put(2);
    temperature = c2;
    c1 = 30.5F;
    cout << "\nAfter Changing Temperature...";
    c1.put(1);
    cout << "\nTemperature 2:" << temperature;
}
