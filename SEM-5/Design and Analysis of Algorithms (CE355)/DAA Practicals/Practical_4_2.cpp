#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    double v;
    double w;
} Item;
void input(Item items[], int sizeOfItems)
{
    cout << "Enter total " << sizeOfItems << " Item's values and weight" << endl;
    for (int i = 0; i < sizeOfItems; i++)
    {
        cout << "Enter " << i + 1 << " V ";
        cin >> items[i].v;
        cout << "Enter " << i + 1 << " W ";
        cin >> items[i].w;
    }
}
void display(Item items[], int sizeOfItems)
{
    int i;
    cout << "values: ";
    for (i = 0; i < sizeOfItems; i++)
    {
        cout << items[i].v << "\t";
    }
    cout << endl
         << "weight: ";
    for (i = 0; i < sizeOfItems; i++)
    {
        cout << items[i].w << "\t";
    }
    cout << endl;
}
bool compare(Item a, Item b)
{
    double r1 = (double)(a.v / a.w);
    double r2 = (double)(b.v / b.w);
    return r1 > r2;
}
double knapsack(Item items[], int sizeOfItems, int W)
{
    int i, j;
    double totalValue = 0, totalWeight = 0;

    cout << "Profit per unit of weight :\n";
    cout << "Value     Weight    Profit\n";
    for (int i = 0; i < sizeOfItems; i++)
    {
        cout << items[i].v << "         " << items[i].w << "         "
             << ((double)items[i].v / items[i].w) << endl;
    }
    sort(items, items + sizeOfItems, compare);
    for (i = 0; i < sizeOfItems; i++)
    {
        if (totalWeight + items[i].w <= W)
        {
            totalValue += items[i].v;
            totalWeight += items[i].w;
        }
        else
        {
            int wt = W - totalWeight;
            totalValue += items[i].v * ((double)wt / items[i].w);
            totalWeight += wt;
            break;
        }
    }
    cout << "Total weight in bag " << totalWeight << endl;
    return totalValue;
}
int main()
{
    int W, n;
    cout << "Enter total number of items :";
    cin >> n;
    Item items[n];
    input(items, n);
    cout << "Entered data \n";
    display(items, n);
    cout << "Enter Knapsack weight \n";
    cin >> W;
    double mxVal = knapsack(items, n, W);
    cout << "Max Profit for " << W << " weight is : " << mxVal;
    cout << "\n20DCE019-Yatharth Chauhan";
    return 0;
}
