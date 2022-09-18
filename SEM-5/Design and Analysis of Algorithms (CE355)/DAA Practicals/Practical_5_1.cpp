#include <bits/stdc++.h>
using namespace std;
void minFinder(int sum, int length, int coins[])
{
    int ans[sum], j = 0, i = 0;

    for (i = length - 1; i >= 0; i--)
    {
        while (sum >= coins[i])
        {
            sum = sum - coins[i];
            ans[j] = coins[i];
            j++;
        }
    }
    cout << "\nTotal coins required are : " << j << "\nThey are : ";
    for (i = 0; i < j; i++)
        cout << ans[i] << " ";
    cout << "\n";
}
int main()
{
    int length, i, sum;
    cout << "\nEnter the total types of coins : ";
    cin >> length;
    int coins[length];
    cout << "Enter the denomination of coins : ";
    for (i = 0; i < length; i++)
        cin >> coins[i];
    int n = sizeof(coins) / sizeof(coins[0]);
    sort(coins, coins + n);
    cout << "Enter the final sum of coins : ";
    cin >> sum;
    minFinder(sum, length, coins);
    cout << "\n20DCE019-Yatharth Chauhan";
    return 0;
}
