
#include <iostream>
#include <string>

using namespace std;

int main() {
    int key = 3;
    string text, enc_string = "", dec_string = "";
    char c;

    
    cout << "Enter Text: ";
    getline(cin, text);
    cout << "Given Text: " << text << endl;

    // Encryption
    for (int i = 0; i < text.length(); i++) {
        c = text[i];
        enc_string += char((int(c) + key - 97) % 26 + 97);
    }
    cout << "Encrypted String: " << enc_string << endl;

    // Decryption
    for (int i = 0; i < enc_string.length(); i++) {
        c = enc_string[i];
        dec_string += char((int(c) - key - 97) % 26 + 97);
    }
    cout << "Decrypted String: " << dec_string << endl;
    cout << "\n20DCE011 - Karan Bhatt";

    return 0;
}
