/*Write a C++ program having class Batsman.
 It has private data members: batsman name, bcode (4 Digit Code Number), innings, not out, runs, batting average.
 Innings, not out and runs are in integer and batting average is in float.Define following function outside the class using scope resolution operator.
1) Public member function getdata()to read values of data members.
2) Public member function putdata()to display values of data members.
3) Private member function calcavg() which calculates the batting average of a batsman.
 Also make this outside function inline. Hint : batting average = runs/(innings - notout)*/

#include <iostream>
using namespace std;

class batsman
{
private:
    string batsman_name;
    int bcode, innings, not_out, runs;
    float batting_average;

public:
    void getdata();
    void putdata();
    float calavg();
} d1;

void batsman::getdata()
{
    cout << "Enter Batsman Name: ";
    cin >> batsman_name;
    cout << "Enter bcode: ";
    cin >> bcode;
    cout << "Enter innings: ";
    cin >> innings;
    cout << "Enter not out: ";
    cin >> not_out;
    cout << "Enter runs: ";
    cin >> runs;
    
}
void batsman::putdata()
{

    cout << "Batsman Name: " << batsman_name << endl;
    cout << "bcode: " << bcode << endl;
    cout << "innings: " << innings << endl;
    cout << "not out: " << not_out << endl;
    cout << "runs :" << runs << endl;
    cout << "batting average is :" << d1.calavg() << endl;
}

float batsman::calavg()
{
    return (float(runs) / (innings - not_out));
}
main()
{
    d1.getdata();
    d1.putdata();
    d1.calavg();
}