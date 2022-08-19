/* Create a class String having character array.
 Class includes constructor and required member functions to get and display the object.
 Overload the operators +(s3=s1+s2), ==(s1<s2), +=(s1+=s2) for the class.
 Use the concept of Overloading Binary Operators*/

#include <iostream>
#include <string.h>
using namespace std;
class String
{
    char arr[10];

public:
    String()
    {
        cout << "\nDefault Constructor"<<endl;
    }
    String(char a[10])
    {
        cout << "\nParameterised Constructor ";
        a = arr;
    }
    void get()
    {
        cout << "\nEnter the string: ";
        cin >> arr;
    }
    void put()
    {
        cout << "\nEntered string  is: " << arr;
    }
    String operator+(String &s)
    {
        String t;
        strcat(arr, s.arr);
        strcpy(t.arr, arr);
        return t;
    }
    int operator==(String &s)
    {
        int l1 = 0, l2 = 0;
        l1 = strlen(arr);
        l2 = strlen(s.arr);
        int a = strcmp(arr, s.arr);
        if (l1 == l2 && a == 0)
            return 1;
        else
            return 0;
    }
    String operator+=(String &s)
    {
        strcat(arr, s.arr);
        return arr;
    }
};

int main()
{
    String s1, s2("Welcome");
    s1.get();
    // s2.get();

    String s3;
    s3 = s1 + s2;
    s3.put();

    s1.get();
    s2.get();
    if (s1 == s2)
        cout << "\nS1==S2";
    else
        cout << "\nNot Equal" << endl;

    s1.get();
    s2.get();
    s1 += s2;
    s1.put();

    return 0;
}

// #include <iostream>
// using namespace std;

// class String
// {
// public:
//     char a[50];
//     int len;
//     void getdata()
//     {
//         cout << endl;
//         cout << "Enter the length of string: ";
//         cin >> len;
//         cout << "Enter the string: ";
//         for (int i = 0; i < len; i++)
//         {
//             cin >> a[i];
//         }
//     }
//     void putdata()
//     {
//         cout << endl;
//         cout << "The length of string is: " << len << endl;

//         cout << "Entered string is: ";
//         for (int i = 0; i < len; i++)
//         {
//             cout << a[i];
//         }
//         cout << endl;
//     }
//     String operator+(String s1)
//     {
//         String temp;
//         int i, j, length = 0;
//         for (i = 0; i < len; i++)
//         {
//             temp.a[i] = a[i];
//             length++;
//         }
//         j = i;
//         for (i = 0; i < s1.len; i++)
//         {
//             temp.a[j] = s1.a[i];
//             j++;
//             length++;
//         }
//         temp.len = length;
//         return temp;
//     }
// };

// int main()
// {
//     String s1;
//     s1.getdata();
//     s1.putdata();
//     String s2;
//     s2.getdata();
//     s2.putdata();
//     String s3;
//     s3 = s1 + s2;
//     s3.putdata();
//     return 0;
// }

/*Create a class String having character array. Class includes constructor and
required member functions to get and display the object. Overload the operators
+(s3=s1+s2), ==(s1<s2), +=(s1+=s2) for the class.
Use the concept of Overloading Binary Operators.*/
