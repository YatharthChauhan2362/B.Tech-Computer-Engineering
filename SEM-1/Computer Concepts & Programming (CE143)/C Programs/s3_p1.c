/*Write a program to find the greatest of the three numbers entered through the keyboard using conditional operators.*/

#include <stdio.h>
int main()
{
    int a, b, c, max;

    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);
    printf("Enter 3rd Number: ");
    scanf("%d", &c);

    max = a;

    max = (max < b ? b : max);
    max = (max < c ? c : max);

    printf("\nGreatest Number is: %d", max);
}