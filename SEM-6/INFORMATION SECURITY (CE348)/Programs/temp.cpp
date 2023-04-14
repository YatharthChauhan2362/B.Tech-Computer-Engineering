#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int modInverse(int a, int m) {
    a = a % m;
    for (int x = 1; x < m; x++) {
        if ((a * x) % m == 1) {
            return x;
        }
    }
}

int main() {
    int p = 17;
    int q = 19;

    int n = p * q;

    int phi = (p - 1) * (q - 1);

    int e = 5;
    while (e < phi) {
        if (gcd(e, phi) == 1) {
            break;
        } else {
            e++;
        }
    }

    int d = modInverse(e, phi);

    cout << "Public key: {" << e << ", " << n << "}" << endl;
    cout << "Private key: {" << d << ", " << n << "}" << endl;

    
    int plaintext = 88;
    int ciphertext = pow(plaintext, e);
    ciphertext = ciphertext % n;
    cout << "Plaintext: " << plaintext << endl;
    cout << "Ciphertext: " << ciphertext << endl;

    
    int decrypted = pow(ciphertext, d);
    decrypted = decrypted % n;
    cout << "Decrypted: " << decrypted << endl;

    return 0;
}