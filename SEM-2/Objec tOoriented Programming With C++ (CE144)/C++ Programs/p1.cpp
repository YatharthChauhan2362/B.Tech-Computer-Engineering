/*Write a C++ program that will print output in the following form.
 Make sure your output looks exactly as shown here (including spacing, line breaks, punctuation, and the title and author).
 Use cout and cin objects and endl manipulator.
*****************************************
*       Programming Assignment 1        *
*        Computer Programming 1         *
*             Author: ???               *
*       Due Date: Thursday,Dec.20       *
*****************************************
*/

#include<iostream>
using namespace std;
int main()
{
    string author;

    cout<<"Enter the author name: ";
    cin>>author;

    cout<<"*****************************************"<<"\n";
    cout<<"*\tProgramming Assignment 1\t*"<<"\n";
    cout<<"*\t Computer Programming 1\t\t*"<<"\n";
    cout<<"*\t   "<<"Author: "<<author<<"\t\t*"<<"\n";
    cout<<"*\tDue Date: Thursday,Dec.20\t*"<<"\n";
    cout<<"*****************************************";
}
