// Bubble Sort

#include <iostream>
using namespace std;
int counter = 0;
void bubbleSort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                counter++;
            }
        }
    }
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << endl
         << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    cout << endl
         << "The sorted array is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl
         << "Counter: " << counter << endl;
    cout << "\n20DCE019-Yatharth Chauhan";
}
