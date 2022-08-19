#include <iostream>
using namespace std;
class BC
{
public:
    int b;
    void show()
    {
        cout << "b = " << b << endl;
    }
};
class DC : public BC
{
public:
    int d;
    void show()
    {
        cout << "b = " << b << endl;
        cout << "d = " << d << endl;
    }
};
int main()
{
    BC *bptr;
    BC base;
    bptr = &base;
    bptr->b = 100;
    cout << "bptr poins to base objects" << endl;
    bptr->show();
    DC derived;
    bptr = &derived;
    bptr->b = 200;
    /*bptr->b = 300;*/ // wont work
    cout << "bptr now points to derived object" << endl;
    bptr->show();
    DC *dptr;
    dptr = &derived;
    dptr->d = 300;
    cout << "Dptr is derived type pointer" << endl;
    dptr->show();
    return 0;
}