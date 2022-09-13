// backtracking

#include <iostream>
using namespace std;
int coins[100], n, sum, ans[100], j = 0;
void minFinder(int sum, int length, int coins[])
{
    int i = 0;
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
    int length, i, n;
    cout << "\nEnter the total types of coins : ";
    cin >> length;
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