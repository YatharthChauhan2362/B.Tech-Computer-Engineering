/*Create a class Media that stores the title (a string) and price (float).
 Class Mediahas two argument constructor which initializes data members of class Media.
 Also declare a virtual function display () in Class Media. 
 From the class Media derive two classes: Class book,
 which contains data member page count (int): and Class tape, 
 which contains data member playing time in minutes (float).
 Both Class book and Class tape should have a constructor which initializes base class constructor as well as its own data members and display ( ) function which displays book details and tape details respectively. 
 Write a main ( ) to test book and tape classes by creating instances of them, asking the user to fill data and displaying them. 
 Use the concept of Virtual function and Constructor in Derived Class*/

#include <iostream>
using namespace std;
class Media
{
public:
    string title;
    int price;
    Media()
    {
    }
    Media(string s, int p)
    {
        title = s;
        price = p;
    }
    virtual void display()
    {
    }
};
class Book : public Media
{
public:
    int pagecount;
    Book(string s, int p, int a) : Media(s, p)
    {
        pagecount = a;
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Page numbers: " << pagecount << endl;
        cout << endl;
    }
};
class Tape : public Media
{
public:
    float time;
    Tape(string s, int p, int b) : Media(s, p)
    {
        time = b;
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Play Time: " << time << endl;
    }
};
int main()
{
    string title;
    int price;
    int pagecount;
    int time;

    cout << "Enter the Book Details" << endl;
    cout << "Title: ";
    cin >> title;
    cout << "Price: ";
    cin >> price;
    cout << "Number of Pages: ";
    cin >> pagecount;

    cout << endl;

    Book book1(title, price, pagecount);

    cout << "Enter the Tape Details" << endl;
    cout << "Title: ";
    cin >> title;
    cout << "Price: ";
    cin >> price;
    cout << "Play Time (in mins): ";
    cin >> time;

    cout << endl;

    Tape tape1(title, price, time);

    Media *m1, *m2;
    m1 = &book1;
    m2 = &tape1;

    cout << "Book Details";
    cout << endl;
    m1->display();
    cout << "Tape Details";
    cout << endl;
    m2->display();
}