/*Write a program that takes a set of names of individuals and abbreviates the first,
 middle and other names except the last name by their first letter.*/

#include <stdio.h>
#include <string.h>

void main()
{
    int i, n;
    char a[20], b[20], c[20];

    printf("\nEnter your first name: ");
    scanf("%s", &a[i]);

    printf("enter your middle name: ");
    scanf("%s", &b[i]);

    printf("Enter your last name: ");
    scanf("%s", &c[i]);

    printf("Displaying your name: ");
    printf("%c", a[0]);
    printf(" ");
    printf("%c", b[0]);
    printf(" ");

    n = strlen(c);

    for (i = 0; i <= n; i++)
    {
        printf("%c", c[i]);
    }
}