/*Create a class LAND having data members: length, width, area1.
 Write member functions to read and display the data of land. 
 Also, calculates the area of the land. Create another class TILES having data members: l, w, area2. Write a member function to get the data of tile. 
 Calculate the area of one tile. Class TILE has a member function named number_of_tiles() which is a friend of class LAND and takes the object of class LAND by reference which calculates the number of tiles which can be put over the land area. 
 Write the main function to test all the functions.
 Use the concept of member function of one class can be a friend function of another class.*/

#include <iostream>
using namespace std;
class land
{
public:
    int w1, l1, a1;
    void getdata()
    {
        cout << endl
             << "Enter width & length: " << endl;
        cin >> w1 >> l1;
        a1 = w1 * l1;
    }
    void putdata()
    {
        cout << w1 << " " << l1 << " " << a1;
    }
    friend void number_of_titles();
} l;
class tiles
{
public:
    int w2, l2, a2;

    void getdata()
    {
        cout << endl
             << "Enter the width & length of tiles: " << endl;
        cin >> w2 >> l2;

        a2 = w2 * l2;
    }
    void putdata()
    {
        cout << w2 << " " << l2 << " " << a2 << endl;
    }
    friend void number_of_tiles();
} t;
void number_of_tiles(land &l, tiles &t)
{
    int n;
    n = (l.a1) / (t.a2);
    cout << endl
         << "Tiles taken for LAND area is: " << n;
}
int main()
{
    l.getdata();
    l.putdata();
    t.getdata();
    t.putdata();

    number_of_tiles(l, t);
}