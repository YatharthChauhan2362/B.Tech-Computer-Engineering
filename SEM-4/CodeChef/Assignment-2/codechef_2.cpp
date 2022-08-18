// Code By 20DCE019 - Yatharth Chauhan

/*
Maximum Difference

Given a matrix of size N * M where N represent number of rows and M represents number of columns.

For a row we define a value called DiffValue which is difference between its largest term and the smallest term i.e (maximum term - minimum term). You have to answer the largest DiffValue among all the rows for the given matrix.

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
First line of each test case contains two space separated integers N and M
Next N lines contain M space separated integers each denoting a row of the given matrix.

Output
For each test case, output a single line containing the maximum difference value of the given matrix.

Constraints
1 ≤ T ≤ 25
1 ≤ N,M ≤ 500
1 ≤ Value ≤ 10000

Input:
1
2 3
5 1 3
2 10 6

Output:
8

Explanation
Difference value for row 1 is 4. Difference value for row 2 is 8. Hence, Maximum difference value over both the rows is 8.
*/

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];

        int d;
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            int max = INT_MIN;
            int min = INT_MAX;
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] < min)
                {
                    min = a[i][j];
                }
                if (a[i][j] > max)
                {
                    max = a[i][j];
                }
            }
            d = max - min;
            if (d > result)
            {
                result = d;
            }
        }
        cout << result << endl;
    }
    return 0;
}
