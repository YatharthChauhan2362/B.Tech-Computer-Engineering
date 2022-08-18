/*Twenty five numbers are entered from the keyboard into an array. Write a program to find out how many of them
 are positive, negative, how many are even and odd.*/

#include <stdio.h>
int main()
{
    int arr[25], i, pos = 0, neg = 0, even = 0, odd = 0;

    printf("\nEnter the 25 Elements: ");

    for (i = 0; i < 25; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < 25; i++)
    {
        if (arr[i] >= 0)
        {
            pos++;
        }
        else
        {
            neg++;
        }

        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\nTotal Postive numbers: %d", pos);
    printf("\nTotal Negative numbers: %d", neg);
    printf("\nTotal even numbers: %d", even);
    printf("\nTotal odd numbers: %d", odd);

    return 0;
}