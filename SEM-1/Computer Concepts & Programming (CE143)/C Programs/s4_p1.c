//Write a program to convert the decimal number into octal and hexadecimal format.
//Hint: %o and %x

#include <stdio.h>
int main()
{
    int n, temp;

    printf("Enter the decimal number : ");
    scanf("%d", &n);

    temp = n;

    printf("\noctal number of %d is: %o", n, n);
    printf("\nHexadecimal number of %d is: %x", temp, temp);

    return 0;
}