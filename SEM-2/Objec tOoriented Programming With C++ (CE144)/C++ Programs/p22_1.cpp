//1. Example of const member functions

#include <iostream>
using namespace std;
class sample
{
    int m, n;

public:
    void getdata();
    void putdata() const;
};
void sample::getdata()
{
    cout << "Enter m & n";
    cin >> m >> n;
}
void sample::putdata() const
{
    // m = 12;
    // n = 34;
    cout << " m = " << m << "n= " << n;
}
int main()
{
    sample s1;
    s1.getdata();
    s1.putdata();
    return 0;
}