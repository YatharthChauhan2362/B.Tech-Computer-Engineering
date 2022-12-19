#include <iostream>
using namespace std;
string encrypt(string msg, int key);
string decrypt(string msg, int key);
void bruteForce(string cipherText);
int main()
{
    string msg;
    int key = 3;
    cout << "Enter Message to send : ";
    cin >> msg;
    string cipherText = encrypt(msg, key);
    cout << endl
         << "Cipher Text : " << cipherText << endl
         << endl;
    bruteForce(cipherText);
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
