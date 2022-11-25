// Matrix Addition and Matrix Multiplication (Iterative)

#include <iostream>
using namespace std;

int count = 0, cnt = 0;
int main()
{
    int a[10][10], b[10][10], mul[10][10], sum[100][100], r, c, i, j, k;
    cout << "Enter the number of row: ";
    cin >> r;
    cout << "Enter the number of column: ";
    cin >> c;
    cout << "\nEnter the elements of first matrix: \n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "\nEnter the elements of second matrix: \n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                cnt++;
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // adding two matrix
    for (i = 0; i < r; ++i)
    {

        for (j = 0; j < c; ++j)
        {
            count++;
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // for printing result
    cout << "\nMatrix Multiplication :" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << "\n";
    }

    // Displaying the resultant sum matrix.
    cout << "\nMatrix Addition :" << endl;
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if (j == c - 1)
                cout << endl;
        }
    cout << "\nMultiplication Count: " << cnt << endl;
    cout << "\nAddition Count: " << count << endl;

    return 0;
}
