/*Create a Class Date having data members: int dd, mm, yyyy. Class has one member function to input the dates and another member function which prints the dates. Write a main() function which takes two dates as input. Write a friend function swapdates() which takes two objects by reference of type Date and swaps both the dates. Use the concept of Friend function which takes objects by reference.*/

#include <iostream>
using namespace std;
class date
{
private:
    int date_, month, year;

public:
    void getdata()
    {
        cout << "Enter dd-mm--yyyy: " << endl;
        cin >> date_ >> month >> year;
    }
    void putdata()
    {
        cout << endl
             << "You Entered: " << endl;
        cout << date_ << "/" << month << "/" << year << endl;
    }

    friend void swap(date &d1, date &d2)
    {
        date temp;
        temp = d1;
        d1 = d2;
        d2 = temp;

        cout << endl
             << "After swapping..." << endl;
        cout << d1.date_ << "/" << d1.month << "/" << d1.year << endl
             << d2.date_ << "/" << d2.month << "/" << d2.year;
    }
};
int main()
{
    date d1, d2;
    d1.getdata();
    d2.getdata();
    d1.putdata();
    d2.putdata();
    swap(d1, d2);
}