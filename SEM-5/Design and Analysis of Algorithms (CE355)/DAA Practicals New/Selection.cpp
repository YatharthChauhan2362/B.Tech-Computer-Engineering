// Selection Sort

#include <iostream>
using namespace std;
int counter = 0;
void selectionSort(int arr[], int size)
{
    int temp;
    int min_index = 0;
    for (int i = 0; i < size; i++)
    {
        min_index = i;
        for (int j = i; j < size; j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
        counter++;
    }
}
int main()
{
    int n;
    cout << "\nEnter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    selectionSort(arr, n);
    cout << endl
         << "Sorted array is: ";
    for (int i = 0; i < n; i++)

        cout << arr[i] << " ";
    cout << endl
         << "Counter: " << counter << endl;
}