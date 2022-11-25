// Insertion Sort

#include <iostream>
using namespace std;
int counter = 0;
void insertionSort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                counter++;
            }
        }
    }
}
int main()
{
    int n;
    cout << "\nEnter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << endl
         << "Please enter the array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    insertionSort(arr, n);

    cout << endl
         << "The sorted array is: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl
         << "Counter: " << counter << endl;

    return 0;
}