#include <iostream>
#include <string.h>
using namespace std;

//Compiler version g++ 6.3.0

class customer
{
  public:
  string name_cust;
  int cust_num;

    void get_data()
    {
      cout<<endl<<"enter customer name:";
      cin>>name_cust;
      cout<<endl<<"enter customer number:";
      cin>>cust_num;
    }

    friend void get_cust_data(customer);
};

class manager
{
  string name_man;

  public:
    void get_cust_data(customer obj)
    {
      cout<<endl<<"enter name of manager:";
      cin>>name_man;
      cout<<endl<<"customer name:"<<obj.name_cust;
      cout<<endl<<"customer number:"<<obj.cust_num;
    }
};

int main()
{
    customer obj1;
    manager obj2;

    obj1.get_data();
    obj2.get_cust_data(obj1);
}
