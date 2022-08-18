// Code By 20DCE019 - Yatharth Chauhan

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long sumeven = 0;
        long long sumodd = 0;
        long long int arr[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long output = 0;

        for (long long int i = 0; i < n; i++)
        {

            if (i % 2 == 0)
            {
                sumeven += arr[i];
            }
            else
            {
                sumodd += arr[i];
            }
        }
        output = sumodd > sumeven ? sumodd : sumeven;

        cout << output << endl;
    }
    return 0;
}