#include <iostream>
using namespace std;
int counter = 0;
double expo(double base, int power)
{
    counter++;
    if (power == 0)
    {
        return 1;
    }
    int temp = expo(base, power / 2);
    if (power % 2 == 0)
    {
        return temp * temp;
    }
    else if (power % 2 == 1)
    {
        return base * temp * temp;
    }
}
int main()
{
    double base;
    int power;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the power: ";
    cin >> power;
    cout << expo(base, power) << endl;
    cout << counter << endl;
    cout << "\n20DCE019-Yatharth Chauhan";
    return 0;
}