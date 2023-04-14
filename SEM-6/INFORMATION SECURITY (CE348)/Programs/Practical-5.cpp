
#include <cmath>
#include <iostream>
using namespace std;

// Power function to return value of a ^ b mod P
long long int power(long long int a, long long int b,
	long long int P)
{
    if (b == 1)
    return a;

   else
   return (((long long int)pow(a, b)) % P);
}

// Driver program
int main()
{
    long long int P, G, x, a, y, b, ka, kb;

	
    P = 11; // A prime number P is taken
    cout << "The value of P : " << P << endl;

    G = 7; // A primitive root for P, G is taken
    cout << "The value of G : " << G << endl;
    
    a = 6; // a is the chosen private key
    cout << "The private key a for Lucious Fox is : " << a << endl;

    x = power(G, a, P); // gets the generated key
    b = 2; 
    cout << "The private key b for Bruce Wayne is : " << b << endl;

    y = power(G, b, P); // gets the generated key

    ka = power(y, a, P); 
    kb = power(x, b, P); 
    cout << "Secret key for the Lucious Fox is : " << ka << endl;

    cout << "Secret key for the Bruce Wayne is : " << kb << endl;
    cout << "\n20DCE011 - Karan Bhatt";
    return 0;
}
