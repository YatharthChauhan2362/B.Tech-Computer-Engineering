//Write a C Program to Print multiplication table of number entered by user.

#include <stdio.h>
int main()
{
    int a, i = 1;

    printf("\n Enter the number : ");
    scanf("%d", &a);

    printf("\n...Multiplication...");

    printf("\n %d * %d = %d", a, i, a * i);
    i++;
    printf("\n %d * %d = %d", a, i, a * i);
    i++;
    printf("\n %d * %d = %d", a, i, a * i);
    i++;
    printf("\n %d * %d = %d", a, i, a * i);
    i++;
    printf("\n %d * %d = %d", a, i, a * i);
    i++;
    printf("\n %d * %d = %d", a, i, a * i);
    i++;
    printf("\n %d * %d = %d", a, i, a * i);
    i++;
    printf("\n %d * %d = %d", a, i, a * i);
    i++;
    printf("\n %d * %d = %d", a, i, a * i);
    i++;
    printf("\n %d * %d = %d", a, i, a * i);
    i++;

    return 0;
}