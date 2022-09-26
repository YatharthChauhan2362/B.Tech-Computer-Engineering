#include <bits/stdc++.h>
using namespace std;
int MatrixMultiplication(int p[], int n)
{
    int m[n][n];
    int i, j, k, L, q;
    for (i = 1; i < n; i++)
        m[i][i] = 0;
    // L is chain length.
    for (L = 2; L < n; L++)
    {
        for (i = 1; i < n - L + 1; i++)
        {
            j = i + L - 1;
            m[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++)
            {
                // q = cost/scalar multiplications
                q = m[i][k] + m[k + 1][j] +
                    p[i - 1] * p[k] * p[j];
                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }
    return m[1][n - 1];
}
int main()
{
    int n;
    cout << " ...::::MATRIX MULTIPLICATION:::::...\n\n";
    cout << "ENTER THE TOTAL NUMBER OF DIMENSION VALUES : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter P" << i << " : ";
        cin >> arr[i];
    }
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "MINIMUM NUMBER OF MULITIPLICATION IS : " << MatrixMultiplication(arr, length) << endl;
    cout << "\n20DCE019-Yatharth Chauhan";
    return 0;
}