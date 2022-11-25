#include <iostream>
using namespace std;
int count = 0;
int binarySearch(int arr[], int start, int end, int key)
{
    count++;
    int size = end - start + 1;
    // int start = 0;
    // int end = size-1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            return binarySearch(arr, mid + 1, end, key);
        }
        else
        { // key < arr[mid]
            return binarySearch(arr, start, mid - 1, key);
        }
        mid = start + (end - start) / 2;
    }
    return -1;
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
        cout << "Enter key element" << endl;
        cin >> key;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int evenIndex = binarySearch(arr, 0, n - 1, key);

        cout << " Index of key is " << evenIndex << endl;

        T--;
    }
    cout << "Count is:" << count << endl;

    return 0;
}
