

#include <iostream>
#include <cmath>

using namespace std;
// long int modulo(long int base, long int exponent, long int mod)
// {
//     long int x = 1;
//     long int y = base;
//     while (exponent > 0)
//     {
//         if (exponent % 2 == 1)
//             x = (x * y) % mod;
//         y = (y * y) % mod;
//         exponent = exponent / 2;
//     }
//     return x % mod;
// }

long int modulo(long int base, long int exponent,
                    long int mode)
{
    if (exponent == 1)
        return base;
 
    else
        return (((long int)pow(base, exponent)) % mode);
}

int main()
{
    long int p = 23, g = 5;
    long int a = 6, b = 15;

    long int A = modulo(g, a, p);
    long int B = modulo(g, b, p);

    long int secret1 = modulo(B, a, p);
    long int secret2 = modulo(A, b, p);

    cout << "Secret Key: " << secret1 << endl;
    cout << "Secret Key: " << secret2 << endl;

    return 0;
}
