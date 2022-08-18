/*Write a Program to multiply any two 3*3 Matrices*/

#include <stdio.h>
#define r 3
#define c 3

int main()
{
    int a[r][c], b[r][c], sum, i, j, k;

    printf("Enter first matrix:");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\n a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n first matrix is: \n");
    for (i = 0; i < r; i++)
    {
        printf("\n");

        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
    }

    printf("\n Enter second matrix:");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\n b[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n second matrix is: \n");
    for (i = 0; i < r; i++)
    {
        printf("\n");

        for (j = 0; j < c; j++)
        {

            printf("%d ", b[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum = 0;
            for (k = 0; k < r; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
        }
    }

    printf("\n multification of two matrix: \n");

    for (i = 0; i < r; i++)

    {
        printf("\n");

        for (j = 0; j < c; j++)
        {
            printf("%d ", sum);
        }
    }

    return 0;
}
