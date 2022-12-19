#include<iostream>
using namespace std;
#include<string.h>
int main() {
   const char *str1="JournalDEV";
   const char *str2="JournalDEv";
   
cout<<"String 1:"<<str1<<endl;
cout<<"String 2:"<<str2<<endl;

	if (strcmp(str1, str2) == 0)
		cout << "\nequal." << endl;
	else
		cout << "not equal.";
 
}