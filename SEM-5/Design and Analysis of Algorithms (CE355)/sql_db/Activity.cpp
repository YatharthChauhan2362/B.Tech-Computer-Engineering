// Activity

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    int s;
    int f;
} activ;
void input(activ arr[], int lng)
{
    cout << "Enter total " << lng << " Item's Start and Finish time :-\n\n";
    for (int i = 0; i < lng; i++)
    {
        cout << "Enter Start Time For Activity " << i + 1 << ":";
        cin >> arr[i].s;
        cout << "Enter Finish Time For Activity " << i + 1 << ":";
        cin >> arr[i].f;
        cout << "\n";
    }
}
void display(activ arr[], int lng)
{
    int i;
    cout << "Start Time: ";
    for (i = 0; i < lng; i++)
    {
        cout << "\t" << arr[i].s;
    }
    cout << endl
         << "Finish Time: ";
    for (i = 0; i < lng; i++)
    {
        cout << "\t" << arr[i].f;
    }
    cout << endl;
}
bool compare(activ a, activ b)
{
    return a.f < b.f;
}
void MaxAct(activ arr[], int n)
{
    sort(arr, arr + n, compare);

    cout << "Following activities are selected :\n";
    int i = 0;
    cout << "(" << arr[i].s << ", " << arr[i].f << "), ";
    for (int j = 1; j < n; j++)
    {
        if (arr[j].s >= arr[i].f)
        {
            cout << "(" << arr[j].s << ", "
                 << arr[j].f << "), ";
            i = j;
        }
    }
}
int main()
{
    int n;
    cout << "Enter total number of Activities :";
    cin >> n;
    activ arr[n];
    input(arr, n);
    cout << "Entered data \n";
    display(arr, n);
    MaxAct(arr, n);
}
