// Cashier Greedy Approach

// #include <bits/stdc++.h>
// using namespace std;
// void minFinder(int sum, int length, int coins[])
// {
//     int ans[sum], j = 0, i = 0;

//     for (i = length - 1; i >= 0; i--)
//     {
//         while (sum >= coins[i])
//         {
//             sum = sum - coins[i];
//             ans[j] = coins[i];
//             j++;
//         }
//     }
//     cout << "\nTotal coins required are : " << j << "\nThey are : ";
//     for (i = 0; i < j; i++)
//         cout << ans[i] << " ";
//     cout << "\n";
// }
// int main()
// {
//     int length, i, sum;
//     cout << "\nEnter the total types of coins : ";
//     cin >> length;
//     int coins[length];
//     cout << "Enter the denomination of coins : ";
//     for (i = 0; i < length; i++)
//         cin >> coins[i];
//     int n = sizeof(coins) / sizeof(coins[0]);
//     sort(coins, coins + n);
//     cout << "Enter the final sum of coins : ";
//     cin >> sum;
//     minFinder(sum, length, coins);
//
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int minCoins(int coins[], int m, int V)
{

    if (V == 0)
        return 0;

    int res = INT_MAX;

    for (int i = 0; i < m; i++)
    {
        if (coins[i] <= V)
        {
            int sub_res = minCoins(coins, m, V - coins[i]);

            if (sub_res != INT_MAX && sub_res + 1 < res)
                res = sub_res + 1;
        }
    }
    return res;
}

int main()
{
    // int coins[] = {18, 17, 5, 1};
    int coins[] = {100, 25, 10, 5, 1};
    int m = sizeof(coins) / sizeof(coins[0]);
    int V = 289;
    cout << "Minimum coins required is "
         << minCoins(coins, m, V);

    return 0;
}