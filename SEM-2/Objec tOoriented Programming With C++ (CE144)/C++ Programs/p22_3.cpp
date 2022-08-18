//3. Example of Local Classes

#include <iostream>
using namespace std;
void testlocalclass()
{
    class Test
    {
        int cnt; //local class should not have static data member
    public:
        void set()
        {
            cout << "Enter Count: ";
            cin >> cnt;
        }
        void get()
        {
            cout << "Count: = " << cnt;
        }
    };
    Test t;
    t.set();
    t.get();
};
int main()
{
    testlocalclass();
    return 0;
}