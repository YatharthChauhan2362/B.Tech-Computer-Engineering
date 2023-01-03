// The "Caesar Box," or "Caesar Cipher," is one of the earliest known ciphers. Developed around 100 BC, it was
// used by Julius Caesar to send secret messages to his generals in the field. In the event that one of his messages got
// intercepted, his opponent could not read them. This obviously gave him a great strategic advantage. Caesar shifted
// each letter of his message few letters to the right to produce what could be called the ciphertext. The ciphertext is
// what the enemy would see instead of the true message. So, for example, if Caesar’s messages were written in the
// English alphabet, and shift by 3 then each letter “A” in the message would become a "D," the "B’s" would become
// "E’s," and the "X's" become "A’s." This type of cipher is appropriately called a “shift cipher.”
// Implement the cipher in any programming language of your choice. Perform encryption, decryption. Discuss and
// try some possible attacks on traditional Caesar cipher.

#include <iostream>
using namespace std;
string encrypt(string msg, int key);
string decrypt(string msg, int key);
void bruteForce(string cipherText);
int main()
{
    string msg;
    int key = 3;
    cout << "Enter the Message: ";
    cin >> msg;
    string cipherText = encrypt(msg, key);
    cout << endl
         << "Cipher Text: " << cipherText << endl
         << endl;
    bruteForce(cipherText);

    cout << "\n20DCE019 - Yatharth Chauhan";
}
string encrypt(string msg, int key)
{
    string text;
    for (int i = 0; i < msg.length(); i++)
        text += 'a' + (msg[i] + key - 'a') % 26;
    return text;
}
string decrypt(string msg, int key)
{
    string text;
    for (int i = 0; i < msg.length(); i++)
        text += 'a' + (msg[i] - key - 'a' + 26) % 26;
    return text;
}
void bruteForce(string cipherText)
{
    for (int key = 1; key < 26; key++)
    {
        string text = decrypt(cipherText, key);
        cout << "Key " << key << " : " << text << endl;
    }
}