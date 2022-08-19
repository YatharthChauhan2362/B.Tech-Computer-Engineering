#include <iostream>
using namespace std;
class product
{
    int code;
    float price;

public:
    void getdata(int a, float b)
    {
        code = a;
        price = b;
    }
    void show()
    {
        cout << "Code: " << code << endl;
        cout << "Price: " << price << endl;
    }
};
int main()
{
    product *p = new product;
    product *d = p;
    int x, i;
    float y;
    cout << "Input code and price for product: ";
    cin >> x >> y;
    p->getdata(x, y);
    d->show();
}