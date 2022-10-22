#include <string.h>
#include <iostream>
using namespace std;
#define d 10
void rabinKarp(char pattern[], char text[], int q)
{
    int m = strlen(pattern);
    int n = strlen(text);
    int i, j;
    int c = 0;
    int p = 0;
    int t = 0;
    int h = 1;
    for (i = 0; i < m - 1; i++)
        h = (h * d) % q;
    for (i = 0; i < m; i++)
    {
        p = (d * p + pattern[i]) % q;
        t = (d * t + text[i]) % q;
    }
    for (i = 0; i <= n - m; i++)
    {
        if (p == t)
        {
            for (j = 0; j < m; j++)
            {
                if (text[i + j] != pattern[j])
                    break;
                c++;
            }
            if (j == m)
                cout << "\n\nPattern is found at position: " << i + 1 << endl;
        }
        if (i < n - m)
        {
            c++;
            t = (d * (t - text[i] * h) + text[i + m]) % q;
            if (t < 0)
                t = (t + q);
        }
    }
    cout << "\ncounter:" << c;
}
int main()
{
    char text[] = "2359023141526739921";
    char pattern[] = "31415";
    cout << "Text : " << text;
    cout << "\nPattern :" << pattern;
    int q = 13;
    rabinKarp(pattern, text, q);
    cout << "\n20DCE019-Yatharth Chauhan";
}
