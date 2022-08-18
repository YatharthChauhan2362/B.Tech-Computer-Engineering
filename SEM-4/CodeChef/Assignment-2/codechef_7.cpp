// Code By 20DCE019 - Yatharth Chauhan

/*
Non Repeating Array

Chef has a sequence A1,A2,…,AN. Now for each index i (1≤i≤N) find the smallest index j such that Aj ocuurs exactly once in the subarray A[1,i]. If there is no such index j corresponding to a valid index i then print −1.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.

Output
For each test case, print a single line containing N space-separated integers — the smallest index j for each i, or −1 if there is no such j corresponding to a valid index i.

Constraints
1≤T≤10
1≤N≤105
0≤Ai≤105 for each valid i

Example Input
2
4
1 1 8 3
4
1 1 2 2

Example Output
1 -1 3 3
1 -1 3 -1
*/

#include <bits/stdc++.h>
using namespace std;

void ID_20DCE019()
{

    long long int n;
    cin >> n;

    int arr[n], hash[100001] = {0}, start[100001], check[n] = {0};

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (hash[arr[i]] == 0)
        {
            start[arr[i]] = i;
        }
        else
        {
            check[i] = 1;
            check[start[arr[i]]] = 1;
        }
        hash[arr[i]]++;

        int flag = 0;
        while (j < i + 1)
        {
            if (check[j] == 0)
            {
                cout << j + 1 << " ";
                flag = 1;
                break;
            }
            else
            {
                j++;
            }
        }
        if (flag == 0)
        {
            cout << -1 << " ";
        }
    }

    cout << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        ID_20DCE019();
    }

    return 0;
}