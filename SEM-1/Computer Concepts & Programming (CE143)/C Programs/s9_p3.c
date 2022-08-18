/*A positive integer is entered through the keyboard, write a function to find the binary equivalent of this number using
 recursion.*/

#include <stdio.h>
int rec_bin(int n);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("Decimal To Binary Using Recursion: %d", rec_bin(n));
}

int rec_bin(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return ((n % 2) + 10 * rec_bin(n / 2));
    }
}
