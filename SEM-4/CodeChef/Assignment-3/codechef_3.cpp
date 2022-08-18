// Code By 20DCE019 - Yatharth Chauhan

/*
Count Distinct Numbers

Chef has a sequence A1,A2,…,AN and an integer K. Now there is a sliding window of size K which is moving from the very left of the array to the very right and at a particular time Chef has access to only those K elements that are present in that window and Chef wants to find the number of the distinct elements of each window of size K. Help Chef to find the answer.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two integers N and K.
The second line contains N space-separated integers A1,A2,…,AN.

Output
For each test case, print a single line containing N−K+1 space-separated integers — the number of the distinct elements of each window of size K from the very left of the array to the very right of the sequence.

Constraints
1≤T≤10
1≤K≤N≤105
1≤Ai≤105 for each valid i

Example Input
2
6 3
5 8 5 4 4 1
4 2
4 5 2 2

Example Output
2 3 2 2
2 2 1

Explanation
Example case 1: Number of the distinct elements of [5,8,5], [8,5,4], [5,4,4], [4,4,1] are respectively 2, 3, 2, 2.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k, temp, cnt = 0, z = 0;
        vector<int> v;
        unordered_map<int, int> map;
        cin >> n >> k;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        for (int i = 0; i < k; i++)
            !map[v[i]]++ ? cnt++ : z++;

        cout << cnt << " ";

        for (int i = k; i < n; i++)
        {
            map[v[i - k]]-- == 1 ? cnt-- : temp--;
            !map[v[i]]++ ? cnt++ : z++;
            cout << cnt << " ";
        }
        cout << endl;
    }
    return 0;
}