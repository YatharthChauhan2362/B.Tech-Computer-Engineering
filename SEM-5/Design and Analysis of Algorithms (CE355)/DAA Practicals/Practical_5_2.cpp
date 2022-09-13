#include <iostream>
using namespace std;
int maximum(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int knapsack(int bag_capacity, int weight[], int profit[], int number)
{
    int matrix[number + 1][bag_capacity + 1];
    for (int i = 0; i < number + 1; i++)
        for (int j = 0; j < bag_capacity + 1; j++)
        {
            if (i == 0 || j == 0)
                matrix[i][j] = 0;
            else if (j >= weight[i - 1])
                matrix[i][j] = maximum(matrix[i - 1][j], profit[i - 1] + matrix[i - 1][weight[i - 1]]);
            else
                matrix[i][j] = matrix[i - 1][j];
        }
    return matrix[number][bag_capacity];
}
int main()

{
    int number, bag_capacity;
    cout << " .....BINARY KNAPSACK PROBLEM.....";
    cout << "\n ENTER THE SIZE OF ARRAY : ";
    cin >> number;
    int weight[number], profit[number];
    cout << "\nENTER THE WEIIGHT :";
    for (int i = 0; i < number; i++)
        cin >> weight[i];
    cout << "ENTER THE PROFIT :";
    for (int i = 0; i < number; i++)
        cin >> profit[i];
    cout << "ENTER THE CAPACITY OF BAG : ";
    cin >> bag_capacity;
    cout << "\nMAXIMUM PROFIT IS : " << knapsack(bag_capacity, weight, profit, number) << endl;

    return 0;
}