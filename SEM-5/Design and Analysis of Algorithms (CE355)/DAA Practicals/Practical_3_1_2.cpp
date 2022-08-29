// Implement and perform analysis of worst case of Merge Sort and Quick sort.
// Quick Sort

#include <iostream>
using namespace std;
int counter = 0;
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quickSort(int arr[], int low, int high)
{
    counter++;
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the values in the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, size - 1);
    cout << "The sorted array will be: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\nCounter Value is: " << counter;
    cout << "\n20DCE019-Yatharth Chauhan";
    return 0;
}
