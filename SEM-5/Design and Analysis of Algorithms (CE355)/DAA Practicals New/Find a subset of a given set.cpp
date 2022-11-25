// Find a subset of a given set S = {s1,s2,....., sn} of n positive integers whose sum is equal to a given positive integer d.
// For example, if S= {1, 2, 5, 6, 8} and d = 9
// there are two solutions {1,2,6} and {1,8}.A suitable message is to be displayed if the given problem instance doesn't have a solution.

#include <iostream>
using namespace std;
int counter = 0;

bool isSubsetSum(int set[], int n, int sum)
{
    counter++;
    if (sum == 0)
        return true;
    if (n == 0 && sum != 0)
        return false;

    if (set[n - 1] > sum)
        return isSubsetSum(set, n - 1, sum);

    return isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]);
}
int main()
{
    int set[] = {1, 1, 2, 6, 8, 7, 4};
    int d = 12;
    int n = sizeof(set) / sizeof(set[0]);
    cout << "no of Inputs: " << n << endl;
    cout << "The Sum is: " << d;
    if (isSubsetSum(set, n, d) == true)
        cout << "\nFound the subset with given sum";
    else
        cout << "No subset with given sum";
    cout << "\nCounter: " << counter << endl;

    return 0;
}
