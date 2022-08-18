#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool Permutation(int x[], int y[], int n, int start_, int end_)
{
    int z = end_ - start_ + 1;

    int a[z], b[z];

    for (int i = 0; i < z; i++)
    {
        a[i] = x[start_ + i];
        b[i] = y[start_ + i];
    }

    sort(a, a + z);
    sort(b, b + z);

    bool isE = true;

    for (int i = 0; i < z, i++)
    {
        if (a[i] != b[i])
        {
            isE = false;

            break;
        }
    }
    if (isE)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void run_()
{
    ll n;
    cin >> n;

    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int c = 0;

    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (Permutation(a, b, n, i, j))
                c = max(c, j - i + 1);

    cout << c << endl;
}

int main()
{
    ll d;
    cin >> d;

    while (d--)
    {

        run_();
    }
    return 0;
}
