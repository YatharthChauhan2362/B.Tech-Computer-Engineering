// Code By 20DCE019 - Yatharth Chauhan

#include <iostream>
using namespace std;

int main()
{
    long a, b;
    std::cin >> a >> b;
    long arr1[a];
    long arr2[3];

    for (int i = 0; i < a; i++)
    {
        cin >> arr1[i];
    }

    while (b--)
    {
        int result = -1;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr2[i];
        }
        int start = arr2[0] - 1;
        int end = arr2[1] - 1;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (arr1[mid] >= arr2[2])
            {
                result = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        if (result != -1)
        {
            std::cout << (arr2[1] - result) << std::endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}