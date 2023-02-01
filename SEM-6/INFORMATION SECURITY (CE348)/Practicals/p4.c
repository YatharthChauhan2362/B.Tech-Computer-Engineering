// #include <iostream>
// using namespace std;

// string encrypt(string text, int key)
// {
//     char rail[key][(text.length())];

//     for (int i = 0; i < key; i++)
//         for (int j = 0; j < text.length(); j++)
//             rail[i][j] = '\n';

//     bool dir_down = false;
//     int row = 0, col = 0;

//     for (int i = 0; i < text.length(); i++)
//     {
//         if (row == 0 || row == key - 1)
//             dir_down = !dir_down;

//         rail[row][col++] = text[i];

//         dir_down ? row++ : row--;
//     }

//     string result;
//     for (int i = 0; i < key; i++)
//         for (int j = 0; j < text.length(); j++)
//             if (rail[i][j] != '\n')
//                 result.push_back(rail[i][j]);
//     return result;
// }

// string decrypt(string cipher, int key)
// {
//     char rail[key][cipher.length()];

//     for (int i = 0; i < key; i++)
//         for (int j = 0; j < cipher.length(); j++)
//             rail[i][j] = '\n';

//     bool dir_down;
//     int row = 0, col = 0;

//     for (int i = 0; i < cipher.length(); i++)
//     {
//         if (row == 0)
//             dir_down = true;
//         if (row == key - 1)
//             dir_down = false;

//         rail[row][col++] = '*';

//         dir_down ? row++ : row--;
//     }

//     int index = 0;
//     for (int i = 0; i < key; i++)
//         for (int j = 0; j < cipher.length(); j++)
//             if (rail[i][j] == '*' && index < cipher.length())
//                 rail[i][j] = cipher[index++];
//     string result;

//     row = 0, col = 0;
//     for (int i = 0; i < cipher.length(); i++)
//     {
//         if (row == 0)
//             dir_down = true;
//         if (row == key - 1)
//             dir_down = false;

//         if (rail[row][col] != '*')
//             result.push_back(rail[row][col++]);

//         dir_down ? row++ : row--;
//     }
//     return result;
// }

// int main()
// {
//     string msg, cipherText, decryptedMsg;
//     int key;

//     cout << "Enter Message : ";
//     getline(cin, msg);
//     cout << "Enter Key : ";
//     cin >> key;

//     cipherText = encrypt(msg, key);
//     cout << "\nCipher Text : " << cipherText << endl;
//     decryptedMsg = decrypt(cipherText, key);
//     cout << "\nDecrypted Message : " << decryptedMsg << endl;

//     return 0;
// }
#include <stdio.h>
#include <string.h>
void main()
{
    int i, j, l;
    char a[50], c[50];
    printf("Enter the Plain Text: ");
    gets(a);
    l = strlen(a);
    for (i = 0, j = 0; i < l; i++)
    {
        if (i % 2 == 0)
            c[j++] = a[i];
    }
    for (i = 0; i < l; i++)
    {
        if (i % 2 == 1)
            c[j++] = a[i];
    }
    c[j] = '\0';
    printf("\nEncrypted Text : %s", c);
}