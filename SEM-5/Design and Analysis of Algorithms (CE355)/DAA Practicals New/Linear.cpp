#include <iostream>
using namespace std;
int count = 0;
void print(int arr[], int n)
{
    cout << "Size of array is " << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int k)
{
    // print(arr,size);
    count++;
    // base case
    if (size == 0)
        return false;

    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, k);
        return remainingPart;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        int n;
        cin >> n;
        int arr[n];
        int key;
        cin >> key;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int size = n;

        bool ans = linearSearch(arr, size, key);

        if (ans)
        {
            cout << "Present " << endl;
        }
        else
        {
            cout << "absent " << endl;
        }

        T--;
    }
    cout << "Count is: " << count << endl;
    return 0;
}
