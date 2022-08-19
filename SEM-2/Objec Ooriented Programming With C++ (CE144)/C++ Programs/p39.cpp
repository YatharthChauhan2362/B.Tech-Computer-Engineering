/*Write a program that creates a text file that contains ABC…Z. 
  A program should print the file in reverse order on the screen. 
  i.e. ZYX…BA. Use concept of Opening the file using constructor and open() function. 
  Use all error handling functions like eof(), fail(), bad(), good() and functions for manipulation of file pointer like seekg() and tellg().
*/

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    fstream fp;
    char str[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Open file and store characters" << endl;

    int len = strlen(str);

    fp.open("2CE1.txt", ios::out);

    for (int i = 0; i < len; i++)
    {
        fp.put(str[i]);
    }
    fp.close();

    fp.open("2CE1.txt", ios::in);

    cout << "Reading from file:" << endl;
    fp.seekg(-1, ios::end);

    char ch;

    while (fp.tellg() >= 0)
    {
        fp.get(ch);
        cout << ch;
        fp.seekg(-2, ios::cur);
    }
    fp.close();

    return 0;
}
